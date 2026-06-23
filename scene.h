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
    // If the simulation is paused, do nothing and skip position updates
    if (!isPaused)
    {
        // --- TRAFFIC LIGHT TIMING CYCLE ---
        trafficTimerAccumulator += 16;
        if (currentTrafficState == RED && trafficTimerAccumulator >= 4000) {
            currentTrafficState = GREEN;
            trafficTimerAccumulator = 0;
        }
        else if (currentTrafficState == GREEN && trafficTimerAccumulator >= 4000) {
            currentTrafficState = YELLOW;
            trafficTimerAccumulator = 0;
        }
        else if (currentTrafficState == YELLOW && trafficTimerAccumulator >= 1500) {
            currentTrafficState = RED;
            trafficTimerAccumulator = 0;
        }

        // --- CAR 1 MOVEMENT & RED LIGHT DETECTION ---
        // Assuming Car 1 moves left-to-right (carX increases)
        // Stop line before x=250 intersection (e.g., between x=180 and x=200)
        if (currentTrafficState == RED && carX >= -130 && carX <= -100) {
            // Do not update carX; it waits at the red light
        } else {
            carX += carSpeed;
        }
        if (carX > 1200) carX = -400;


        // --- CAR 2 / BUS MOVEMENT & RED LIGHT DETECTION ---
        // Assuming Car 2 moves right-to-left (busX decreases)
        // Stop line before x=250 coming from the right (e.g., between x=280 and x=310)
        if (currentTrafficState == RED && busX >= 280 && busX <= 310) {
            // Do not update busX; it waits at the red light
        } else {
            busX -= busSpeed;
        }
        if (busX < -1200) busX = 1250;


        // --- ENVIRONMENT ANIMATIONS ---
        smokeY += smokeSpeed;
        if (smokeY > 550) smokeY = -20;

        cloudX += cloudSpeed;
        if (cloudX > 1200) cloudX = -1000;

        planeX -= planeSpeed;
        if (planeX < -200) planeX = 1300;

        // Beacon blinker timer
        lightTimerAccumulator += 16;
        if (lightTimerAccumulator >= 1000) {
            showRedLight = !showRedLight;
            lightTimerAccumulator = 0;
        }
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

