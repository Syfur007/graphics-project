#include <cstdio>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <cmath>

#include "scene.h"

// ---------------------------------------------------------------------------
// Camera / rotation state
// ---------------------------------------------------------------------------
float rotX    = 20.0f;   // vertical tilt (degrees above horizon)
float rotY    = 0.0f;    // horizontal orbit (degrees)
float camDist = 900.0f;  // distance from scene centre

// Scene centre (middle of the 1200×600 canvas, slightly above ground)
const float CX = 600.0f;
const float CY = 250.0f;
const float CZ = 0.0f;

// Mouse drag state
int   lastMouseX = 0, lastMouseY = 0;
bool  isDragging = false;

// ---------------------------------------------------------------------------
// Helpers
// ---------------------------------------------------------------------------
static inline float toRad(float deg) { return deg * 3.14159265f / 180.0f; }

// Apply the orbital camera: call once at the start of every display callback
void applyCamera()
{
    float rx = toRad(rotX);
    float ry = toRad(rotY);

    float eyeX = CX + camDist * sinf(ry) * cosf(rx);
    float eyeY = CY + camDist * sinf(rx);
    float eyeZ = CZ + camDist * cosf(ry) * cosf(rx);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(eyeX, eyeY, eyeZ,   // eye
              CX,   CY,   CZ,     // centre (look-at)
              0.0f, 1.0f, 0.0f);  // up vector
}

// ---------------------------------------------------------------------------
// Projection / reshape
// ---------------------------------------------------------------------------
void myReshape(int w, int h)
{
    if (h == 0) h = 1;
    glViewport(0, 0, w, h);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double)w / h, 1.0, 8000.0);
}

void myInit(void)
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

    // Enable depth testing so 3D overlap is correct
    glEnable(GL_DEPTH_TEST);

    // Set initial projection
    myReshape(1200, 600);
}

// ---------------------------------------------------------------------------
// Mouse callbacks for orbital rotation + zoom
// ---------------------------------------------------------------------------
void mouseButton(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON)
    {
        isDragging = (state == GLUT_DOWN);
        lastMouseX = x;
        lastMouseY = y;
    }
    // Scroll wheel: button 3 = scroll up (zoom in), 4 = scroll out
    else if (button == 3 && state == GLUT_DOWN)
    {
        camDist -= 40.0f;
        if (camDist < 100.0f) camDist = 100.0f;
        glutPostRedisplay();
    }
    else if (button == 4 && state == GLUT_DOWN)
    {
        camDist += 40.0f;
        if (camDist > 3000.0f) camDist = 3000.0f;
        glutPostRedisplay();
    }
}

void mouseMotion(int x, int y)
{
    if (!isDragging) return;

    int dx = x - lastMouseX;
    int dy = y - lastMouseY;
    lastMouseX = x;
    lastMouseY = y;

    rotY += dx * 0.4f;   // horizontal drag  → orbit left/right
    rotX -= dy * 0.4f;   // vertical drag    → tilt up/down

    // Clamp vertical tilt so the scene doesn't flip
    if (rotX >  89.0f) rotX =  89.0f;
    if (rotX < -89.0f) rotX = -89.0f;

    glutPostRedisplay();
}

// ---------------------------------------------------------------------------
// Main
// ---------------------------------------------------------------------------
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(1200, 600);
    glutInitWindowPosition(100, 150);
    glutCreateWindow("A Modern Sub-City  [drag to rotate | scroll to zoom | d/n day/night | r reset | ESC quit]");

    myInit();

    glutDisplayFunc(Day_Scn);
    glutReshapeFunc(myReshape);
    glutMouseFunc(mouseButton);
    glutMotionFunc(mouseMotion);
    glutKeyboardFunc(keyboard1);
    glutSpecialFunc(keypressed);
    glutTimerFunc(16, update1, 0);

    glutMainLoop();
    return 0;
}
