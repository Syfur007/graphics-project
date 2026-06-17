#include "scene_back.inc"
#include "scene_trees.inc"
#include "scene_buildings.inc"
#include "scene_cars.inc"

float carSpeed = 0;
float busSpeed = 0;
float smokeSpeed = 4.0f;
float cloudSpeed = 0.0f;
float planeSpeed = 3.0f;


void Night_Sky()
{
    glColor3f(0.0f, 0.0f, 0.0f); // Light blue sky
    glBegin(GL_QUADS);
    glVertex2f(0, 0);
    glVertex2f(1200, 0);
    glVertex2f(1200, 600);
    glVertex2f(0, 600);
    glEnd();

    glPointSize(3.0f); // Set the size of the points to create visible stars
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f);


    glVertex2i(50, 490);
    glVertex2i(140, 460);
    glVertex2i(190, 470);
    glVertex2i(240, 520);
    glVertex2i(290, 490);
    glVertex2i(340, 500);
    glVertex2i(390, 510);
    glVertex2i(440, 460);
    glVertex2i(500, 520);
    glVertex2i(550, 535);
    glVertex2i(590, 480);
    glVertex2i(640, 510);
    glVertex2i(690, 520);
    glVertex2i(740, 530);
    glVertex2i(790, 500);
    glVertex2i(840, 460);
    glVertex2i(890, 500);
    glVertex2i(940, 530);
    glVertex2i(70, 515);
    glVertex2i(170, 525);
    glVertex2i(230, 535);
    glVertex2i(300, 525);
    glVertex2i(350, 530);
    glVertex2i(410, 520);
    glVertex2i(470, 515);
    glVertex2i(530, 530);
    glVertex2i(590, 510);
    glVertex2i(640, 530);
    glVertex2i(710, 515);
    glVertex2i(760, 500);
    glVertex2i(820, 530);
    glVertex2i(890, 525);
    glVertex2i(940, 500);
    glVertex2i(990, 510);
    glVertex2i(1015, 515);
    glVertex2i(1115, 510);
    glVertex2i(1090, 495);
    glVertex2i(1105, 535);
    glVertex2i(1085, 520);
    glVertex2i(1150, 500);

    glEnd();

}

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

