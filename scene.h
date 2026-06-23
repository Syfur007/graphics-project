#include "scene_back.h"
#include "scene_trees.h"
#include "scene_buildings.h"
#include "scene_far_buildings.h"
#include "scene_cars.h"

float carSpeed = 6.0f;
float busSpeed = 4.0f;
float smokeSpeed = 4.0f;
float cloudSpeed = 0.0f;
float planeSpeed = 3.0f;

int lightTimerAccumulator = 0;
int trafficTimerAccumulator = 0;

// New state tracking variables
bool isPaused = false; 
extern TrafficState currentTrafficState; // Reference to our traffic light enum

// --- PEDESTRIAN & BUS STOP WORKFLOW ---
float pedX = 410.0f;               // Pedestrian X (Starts at University Door)
float pedY = 230.0f;               // Pedestrian Y
float pedZ = 5.0f;                // Pedestrian Z (Slightly in front of sidewalk)
bool pedActive = false;            // Is a person currently walking/waiting?
bool pedBoarded = false;           // Track if boarding animation is complete
int pedSpawnTimer = 0;             // Tracks intervals to spawn a new pedestrian

int busWaitTimer = 0;              // How long the bus has been idling at the stop
bool busIsStoppedAtStation = false;// State tracking flag for Car_2

// --- DOOR SLIDING CONTROL ---
float doorSlideOffset = 0.0f;     // How far the doors have slid open (0 = closed, max = 15)
float maxDoorSlide = 15.0f;       // Maximum sliding distance to clear the doorway
enum DoorState { CLOSED, OPENING, OPEN, CLOSING };
DoorState currentDoorState = CLOSED;

// Declared in main.cpp — applies the orbital perspective camera
extern void applyCamera();
extern float rotX, rotY, camDist;

void Day_Scn()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    applyCamera();

    drawGrid(1200, 50);

    Day_Sky();
    sunA();
    Clouds();
    Building_Shadows();
    Ground();
    DrawTrafficLight();
    drawPedestrian();
    smoke();
    Buildings();
    Trees();
    Car_2();
    Car_1();

    glutSwapBuffers();
}

void Night_Scn()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    applyCamera();

    drawGrid(1200, 50);

    Night_Sky();
    Moon();
    Building_Shadows(true);
    Ground(true);
    DrawTrafficLight();
    drawPedestrian();
    Buildings_N();
    Trees_N();
    Car_1(true);
    Car_2(true);
    Plane();

    glutSwapBuffers();
}

void keypressed(int key, int x, int y)
{
    if (key == GLUT_KEY_UP) // Increase speed
    {
        carSpeed += 2.0f;
        busSpeed += 2.0f;
    }
    else if (key == GLUT_KEY_DOWN) // Decrease speed
    {
        carSpeed -= 2.0f;
        if (carSpeed < 0)
            carSpeed = 0;
        
        busSpeed -= 2.0f;
        if (busSpeed < 0)
            busSpeed = 0;
    }
}

void update1(int value)
{
    if (!isPaused)
    {
        // --- EXISTING TRAFFIC LIGHT LOGIC ---
        trafficTimerAccumulator += 16;
        if (currentTrafficState == RED && trafficTimerAccumulator >= 4000) { currentTrafficState = GREEN; trafficTimerAccumulator = 0; }
        else if (currentTrafficState == GREEN && trafficTimerAccumulator >= 4000) { currentTrafficState = YELLOW; trafficTimerAccumulator = 0; }
        else if (currentTrafficState == YELLOW && trafficTimerAccumulator >= 1500) { currentTrafficState = RED; trafficTimerAccumulator = 0; }

        // --- CAR 1 MOVEMENT & RED LIGHT DETECTION ---
        if (currentTrafficState == RED && carX >= -130 && carX <= -100) {
            // Wait at light
        } else {
            carX += carSpeed;
        }
        if (carX > 1200) carX = -400;

        // --- PEDESTRIAN & SLIDING DOOR TIMING STATE MACHINE ---
        if (!pedActive) {
            pedSpawnTimer += 16*5;
            
            // Trigger door opening sequence slightly before the 5-second mark
            if (pedSpawnTimer >= 4500 && currentDoorState == CLOSED) {
                currentDoorState = OPENING;
            }

            // Animate doors sliding open
            if (currentDoorState == OPENING) {
                doorSlideOffset += 0.5f;
                if (doorSlideOffset >= maxDoorSlide) {
                    doorSlideOffset = maxDoorSlide;
                    currentDoorState = OPEN;
                    
                    // Doors are fully open! Spawn the pedestrian now
                    pedX = 410.0f;           
                    pedY = 230.0f;
                    pedZ = 13.0f;
                    pedActive = true;
                    pedBoarded = false;
                    pedSpawnTimer = 0;
                }
            }
        } else {
            // Animate Pedestrian Path Movement
            if (pedY > 150.0f) {
                pedY -= 1.5f;
            } 
            if (pedX < 520.0f) {
                pedX += 2.0f;
            }

            // Once the pedestrian walks down past the entrance area (y <= 210), close doors
            if (pedY <= 210.0f && currentDoorState == OPEN) {
                currentDoorState = CLOSING;
            }
        }

        // Animate doors sliding shut
        if (currentDoorState == CLOSING) {
            doorSlideOffset -= 0.5f;
            if (doorSlideOffset <= 0.0f) {
                doorSlideOffset = 0.0f;
                currentDoorState = CLOSED;
            }
        }

        // --- BUS (CAR 2) STOPPAGE & BOARDING LOGIC ---
        // Bus stop region is roughly x around 500 to 530 coming from the right
        bool busAtStopPosition = (busX >= -330 && busX <= -300); // Adjusted for bus's width and position

        if (busAtStopPosition && pedActive && pedX >= 510.0f && !busIsStoppedAtStation) {
            // Bus spots person waiting at stop -> Halt vehicle movement
            busIsStoppedAtStation = true;
            busWaitTimer = 0;
        }

        if (busIsStoppedAtStation) {
            // Handle boarding sequence animation
            if (pedActive) {
                if (pedY > 100.0f) { // Person steps down off curb onto road level
                    pedY -= 1.0f;
                } else {
                    // Fully onboarded -> Delete from visible scene
                    pedActive = false; 
                    pedBoarded = true;
                }
            } else {
                // Wait briefly at station after boarding completes before pulling out
                busWaitTimer += 16;
                if (busWaitTimer >= 1000) {
                    busIsStoppedAtStation = false; // Resume travel
                }
            }
        } else {
            // Standard travel rules (with Red Light enforcement)
            if (currentTrafficState == RED && busX >= 280 && busX <= 310) {
                // Wait at Red traffic light intersection
            } else {
                busX -= busSpeed;
            }
        }

        if (busX < -1200) busX = 1250;

        // --- OTHER ENVIRONMENTAL ANIMATIONS ---
        smokeY += smokeSpeed; if (smokeY > 550) smokeY = -20;
        cloudX += cloudSpeed; if (cloudX > 1200) cloudX = -1000;
        planeX -= planeSpeed; if (planeX < -200) planeX = 1300;

        lightTimerAccumulator += 16;
        if (lightTimerAccumulator >= 1000) { showRedLight = !showRedLight; lightTimerAccumulator = 0; }
    }

    glutPostRedisplay();
    glutTimerFunc(16, update1, 0);
}

void keyboard1(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'p':
    case 'P':
    case ' ': // Spacebar or 'P' toggles pause
        isPaused = !isPaused;
        break;
    case 'd':
    case 'D':
        glutDisplayFunc(Day_Scn);
        glutPostRedisplay();
        break;
    case 'n':
    case 'N':
        glutDisplayFunc(Night_Scn);
        glutPostRedisplay();
        break;
    case 'r':
    case 'R':
        rotX    = 00.0f;
        rotY    = 0.0f;
        camDist = 700.0f;
        glutPostRedisplay();
        break;
    case 27: // ESC
        exit(0);
        break;
    }
}

