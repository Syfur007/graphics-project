#include "scene_back.h"
#include "scene_trees.h"
#include "scene_buildings.h"
#include "scene_far_buildings.h"
#include "scene_cars.h"

float carSpeed = 0;
float busSpeed = 0;
float smokeSpeed = 4.0f;
float cloudSpeed = 0.0f;
float planeSpeed = 3.0f;


// Declared in main.cpp — applies the orbital perspective camera
extern void applyCamera();
extern float rotX, rotY, camDist;

void Day_Scn()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    applyCamera();

    Day_Sky();
    sunA();
    Clouds();
    // Building_Shadows();
    Ground_D();
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

    Night_Sky();
    Moon();
    Building_Shadows_N();
    Ground_N();
    Buildings_N();
    Trees_N();
    Car_2_N();
    Car_1_N();
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
    //car
    carX += carSpeed;

    if (carX > 1200)
        carX = -200;
    //bus
    busX -= busSpeed;

    if (busX < -1200)
        busX = 1250;

    //smoke
    smokeX += smokeSpeed;

    if (smokeX > 550)
        smokeX = -20;

    //cloud
    cloudX += cloudSpeed;

    if (cloudX > 1200)
        cloudX = -1000;

    //plane
    planeX -= planeSpeed;

    if (planeX < -200)
        planeX = 1300;

    glutPostRedisplay();
    glutTimerFunc(16, update1, 0);
}

void keyboard1(unsigned char key, int x, int y)
{
    switch (key)
    {
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
        // Reset camera to default orbital position
        rotX    = 20.0f;
        rotY    = 0.0f;
        camDist = 900.0f;
        glutPostRedisplay();
        break;
    case 27: // ESC
        exit(0);
        break;
    }
}

