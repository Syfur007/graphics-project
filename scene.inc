#include "scene_back.inc"
#include "scene_trees.inc"
#include "scene_buildings.inc"
#include "scene_cars.inc"

float carSpeed = 0;
float busSpeed = 0;
float smokeSpeed = 4.0f;
float cloudSpeed = 0.0f;
float planeSpeed = 3.0f;


void Day_Scn()
{
    glClear(GL_COLOR_BUFFER_BIT);

    Day_Sky();
    sunA();
    Clouds();
    Building_Shadows();
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
    glClear(GL_COLOR_BUFFER_BIT);

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
    }
    else if (key == GLUT_KEY_DOWN) // Decrease speed
    {
        carSpeed -= 2.0f;
        if (carSpeed < 0)
            carSpeed = 0;
    }

    if (key == GLUT_KEY_UP) // Increase speed
    {
        busSpeed += 2.0f;
    }
    else if (key == GLUT_KEY_DOWN) // Decrease speed
    {
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
    case  'd':
        glutDisplayFunc(Day_Scn);
        glutKeyboardFunc(keyboard1);
        glutPostRedisplay();
        break;
    case 'D':
        glutDisplayFunc(Day_Scn);
        glutKeyboardFunc(keyboard1);
        glutPostRedisplay();
        break;
    case 'n':
        glutDisplayFunc(Night_Scn);
        glutKeyboardFunc(keyboard1);
        glutPostRedisplay();
        break;
    case  'N':
        glutDisplayFunc(Night_Scn);
        glutKeyboardFunc(keyboard1);
        glutPostRedisplay();
        break;
    }
}

