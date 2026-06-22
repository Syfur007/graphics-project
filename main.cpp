#include <cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <cmath>

#include "scene.h"

void myInit(void)
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1200.0, 0.0, 600.0);
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1200, 600);
    glutInitWindowPosition(100, 150);
    glutCreateWindow("A Modern Sub-City");
    glMatrixMode(GL_PROJECTION);
    myInit();
    glutTimerFunc(16, update1, 0);
    glutDisplayFunc(Day_Scn);
    glutKeyboardFunc(keyboard1);
    glutSpecialFunc(keypressed);

    glutMainLoop();
}
