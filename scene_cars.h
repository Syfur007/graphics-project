#include "scene_utils.h"

float carX = 0;      // Starting position of the car
float carZ = 14.0f;      // Starting position of the car
float busX = 0;      // Starting position of the car
float busZ = 12.0f;      // Starting position of the car

void Car_1(bool isNight = false)
{
    glPushMatrix();
    glTranslatef(carX, 0, 0);

    if (isNight) {
        //headlight
        glColor3f(0.8, 0.7, 0.3); // Darker silver color for windows
        glBegin(GL_TRIANGLES);
        glVertex3f(340, 45, carZ+0.2f);  // Bottom-left of window
        glVertex3f(410, 25, carZ+0.2f);  // Bottom-right of window
        glVertex3f(410, 55, carZ+0.2f);  // Top-right of window
        //glVertex3f(260, 80, carZ+0.2f);  // Top-left of window
        glEnd();
    }

    // Car Body (Blue color)
    if (isNight) 
        glColor3f(0.0f, 0.0f, 0.5f);
    else
        glColor3f(0.0f, 0.0f, 1.0f); // Blue color for the car body
    glBegin(GL_POLYGON);
    glVertex3f(210, 20, carZ);  // Bottom-left corner
    glVertex3f(350, 20, carZ);  // Bottom-right corner
    glVertex3f(350, 40, carZ);  // Slope up to the front
    glVertex3f(330, 60, carZ);  // Front-top corner
    glVertex3f(200, 60, carZ);  // Rear-top corner
    glVertex3f(200, 40, carZ);  // Slope down to the rear
    glEnd();

    // Car Roof (Darker Blue)
    if (isNight) 
        glColor3f(0.0f, 0.0f, 0.3f);
    else
        glColor3f(0.0f, 0.0f, 0.6f); // Darker blue for the roof
    glBegin(GL_POLYGON);
    glVertex3f(230, 60, carZ);  // Rear corner
    glVertex3f(320, 60, carZ);  // Front corner
    glVertex3f(305, 85, carZ);  // Front curve
    glVertex3f(245, 85, carZ);  // Rear curve
    glEnd();

    // Windows (Silver color)
    if (isNight)
        glColor3f(0.8, 0.7, 0.3);
    else
        glColor3f(0.75f, 0.75f, 0.75f); // Light silver color for windows
    glBegin(GL_QUADS);
    glVertex3f(250, 65, carZ+0.1f);  // Bottom-left of window
    glVertex3f(300, 65, carZ+0.1f);  // Bottom-right of window
    glVertex3f(290, 80, carZ+0.1f);  // Top-right of window
    glVertex3f(260, 80, carZ+0.1f);  // Top-left of window
    glEnd();


    // Wheels (Black color)
    glColor3f(0.0f, 0.0f, 0.0f); // Black color for wheels
    drawCircle(230, 20, 15, carZ+0.1f); // Left wheel (center at (230, 20) with radius 15)
    drawCircle(320, 20, 15, carZ+0.1f); // Right wheel (center at (320, 20) with radius 15)

    // Wheel Caps (Dark Gray color)
    if (isNight)
        glColor3f(0.2f, 0.2f, 0.2f); 
    else
        glColor3f(0.3f, 0.3f, 0.3f); // Dark gray color for wheel caps
    drawCircle(230, 20, 7, carZ+0.2f); // Left wheel cap (center at (230, 20) with radius 7)
    drawCircle(320, 20, 7, carZ+0.2f); // Right wheel cap (center at (320, 20) with radius 7)

    glPopMatrix();
}


void Car_2(bool isNight = false)
{
    glPushMatrix();
    glTranslatef(busX, 0, 0);


    // Car Body (Blue color)
    if (isNight)
        glColor3f(.5f, 0.5f, 0.5f);
    else
        glColor3f(1.0f, 1.0f, 1.0f); // Blue color for the car body
    glBegin(GL_POLYGON);
    glVertex3f(810, 90, busZ);  // Bottom-left corner
    glVertex3f(805, 120, busZ);  // Bottom-right corner
    glVertex3f(810, 165, busZ);  // Bottom-right corner
    glVertex3f(815, 170, busZ);  // Slope up to the front
    glVertex3f(990, 170, busZ);  // Slope up to the front
    glVertex3f(995, 165, busZ);  // Front-top corner
    glVertex3f(995, 95, busZ);  // Front-top corner
    glVertex3f(990, 90, busZ);  // Rear-top corner
    //glVertex3f(300, 40, busZ);  // Slope down to the rear
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f); // Black color for wheels
    drawCircle(850, 90, 15, busZ+0.1f); // Left wheel (center at (230, 20) with radius 15)
    drawCircle(940, 90, 15, busZ+0.1f); // Right wheel (center at (320, 20) with radius 15)

    // Wheel Caps (Darker Gray)
    if (isNight)
        glColor3f(0.2f, 0.2f, 0.2f);
    else
        glColor3f(0.3f, 0.3f, 0.3f); // Darker gray color for wheel caps
    drawCircle(850, 90, 7, busZ+0.2f); // Left wheel cap (center at (230, 20) with radius 7)
    drawCircle(940, 90, 7, busZ+0.2f); // Right wheel cap (center at (320, 20) with radius 7)
    
    //Driver window
    if (isNight)
        glColor3f(0.8, 0.7, 0.3);
    else
        glColor3f(0.0f, 1.0f, 1.0f); // Blue color for the car body
    glBegin(GL_POLYGON);
    glVertex3f(805, 120+5, busZ+0.1f);  // Bottom-right corner
    glVertex3f(820+5, 120+5, busZ+0.1f);  // Bottom-right corner
    glVertex3f(825+5, 125+5, busZ+0.1f);  // Slope up to the front
    glVertex3f(825+5, 170, busZ+0.1f);  // Slope up to the front
    glVertex3f(810, 170, busZ+0.1f);  // Slope up to the front
    glEnd();

    //window
    if (isNight)
        glColor3f(0.8, 0.7, 0.3);
    else
        glColor3f(0.0f, 1.0f, 1.0f); // Blue color for the car body
    glBegin(GL_POLYGON);
    glVertex3f(835, 120, busZ+0.1f);  // Bottom-right corner
    glVertex3f(990, 120, busZ+0.1f);  // Bottom-right corner
    glVertex3f(990, 160, busZ+0.1f);  // Slope up to the front
    glVertex3f(985, 165, busZ+0.1f);  // Slope up to the front
    glVertex3f(835, 165, busZ+0.1f);  // Slope up to the front
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex3f(865, 120, busZ+0.2f);  // Bottom-right corner
    glVertex3f(865, 165, busZ+0.2f);
    glVertex3f(866, 120, busZ+0.2f);
    glVertex3f(866, 165, busZ+0.2f);
    glVertex3f(895, 120, busZ+0.2f);
    glVertex3f(895, 165, busZ+0.2f);
    glVertex3f(896, 120, busZ+0.2f);
    glVertex3f(896, 165, busZ+0.2f);
    glVertex3f(895+30, 120, busZ+0.2f);
    glVertex3f(895+30, 165, busZ+0.2f);
    glVertex3f(896+30, 120, busZ+0.2f);
    glVertex3f(896+30, 165, busZ+0.2f);
    glVertex3f(895+60, 120, busZ+0.2f);
    glVertex3f(895+60, 165, busZ+0.2f);
    glVertex3f(896+60, 120, busZ+0.2f);
    glVertex3f(896+60, 165, busZ+0.2f);
    glEnd();

    glPopMatrix();
}