#include "scene_utils.inc"

float carX = 0;      // Starting position of the car
float busX = 0;      // Starting position of the car

void Car_1()
{
    glPushMatrix();
    glTranslatef(carX, 0, 0);

    // Car Body (Blue color)
    glColor3f(0.0f, 0.0f, 1.0f); // Blue color for the car body
    glBegin(GL_POLYGON);
    glVertex2f(210, 20);  // Bottom-left corner
    glVertex2f(350, 20);  // Bottom-right corner
    glVertex2f(350, 40);  // Slope up to the front
    glVertex2f(330, 60);  // Front-top corner
    glVertex2f(200, 60);  // Rear-top corner
    glVertex2f(200, 40);  // Slope down to the rear
    glEnd();

// Car Roof (Darker Blue)
    glColor3f(0.0f, 0.0f, 0.6f); // Darker blue for the roof
    glBegin(GL_POLYGON);
    glVertex2f(230, 60);  // Rear corner
    glVertex2f(320, 60);  // Front corner
    glVertex2f(305, 85);  // Front curve
    glVertex2f(245, 85);  // Rear curve
    glEnd();

// Windows (Silver color)
    glColor3f(0.75f, 0.75f, 0.75f); // Light silver color for windows
    glBegin(GL_QUADS);
    glVertex2f(250, 65);  // Bottom-left of window
    glVertex2f(300, 65);  // Bottom-right of window
    glVertex2f(290, 80);  // Top-right of window
    glVertex2f(260, 80);  // Top-left of window
    glEnd();

// Wheels (Black color)
    glColor3f(0.0f, 0.0f, 0.0f); // Black color for wheels
    drawCircle(230, 20, 15); // Left wheel (center at (230, 20) with radius 15)
    drawCircle(320, 20, 15); // Right wheel (center at (320, 20) with radius 15)

// Wheel Caps (Dark Gray color)
    glColor3f(0.3f, 0.3f, 0.3f); // Dark gray color for wheel caps
    drawCircle(230, 20, 7); // Left wheel cap (center at (230, 20) with radius 7)
    drawCircle(320, 20, 7); // Right wheel cap (center at (320, 20) with radius 7)

    glPopMatrix();
}
void Car_1_N()
{
    glPushMatrix();
    glTranslatef(carX, 0, 0);
    //headlight
    glColor3f(0.8, 0.7, 0.3); // Darker silver color for windows
    glBegin(GL_TRIANGLES);
    glVertex2f(340, 45);  // Bottom-left of window
    glVertex2f(410, 25);  // Bottom-right of window
    glVertex2f(410, 55);  // Top-right of window
    //glVertex2f(260, 80);  // Top-left of window
    glEnd();
    // Car Body (Darker Blue)
    glColor3f(0.0f, 0.0f, 0.5f); // Darker blue for the car body
    glBegin(GL_POLYGON);
    glVertex2f(210, 20);  // Bottom-left corner
    glVertex2f(350, 20);  // Bottom-right corner
    glVertex2f(350, 40);  // Slope up to the front
    glVertex2f(330, 60);  // Front-top corner
    glVertex2f(200, 60);  // Rear-top corner
    glVertex2f(200, 40);  // Slope down to the rear
    glEnd();

// Car Roof (Darker Navy Blue)
    glColor3f(0.0f, 0.0f, 0.3f); // Even darker blue for the roof
    glBegin(GL_POLYGON);
    glVertex2f(230, 60);  // Rear corner
    glVertex2f(320, 60);  // Front corner
    glVertex2f(305, 85);  // Front curve
    glVertex2f(245, 85);  // Rear curve
    glEnd();

// Windows (Darker Silver)
    glColor3f(0.8, 0.7, 0.3); // Darker silver color for windows
    glBegin(GL_QUADS);
    glVertex2f(250, 65);  // Bottom-left of window
    glVertex2f(300, 65);  // Bottom-right of window
    glVertex2f(290, 80);  // Top-right of window
    glVertex2f(260, 80);  // Top-left of window
    glEnd();

// Wheels (Darker Black)
    glColor3f(0.0f, 0.0f, 0.0f); // Black color for wheels
    drawCircle(230, 20, 15);
    drawCircle(320, 20, 15);

// Wheel Caps (Darker Gray)
    glColor3f(0.2f, 0.2f, 0.2f); // Darker gray color for wheel caps
    drawCircle(230, 20, 7);
    drawCircle(320, 20, 7);
    glPopMatrix();
}
void Car_2()
{
    glPushMatrix();
    glTranslatef(busX, 0, 0);
    // Car Body (Blue color)
    glColor3f(1.0f, 1.0f, 1.0f); // Blue color for the car body
    glBegin(GL_POLYGON);
    glVertex2f(810, 90);  // Bottom-left corner
    glVertex2f(805, 120);  // Bottom-right corner
    glVertex2f(810, 165);  // Bottom-right corner
    glVertex2f(815, 170);  // Slope up to the front
    glVertex2f(990, 170);  // Slope up to the front
    glVertex2f(995, 165);  // Front-top corner
    glVertex2f(995, 95);  // Front-top corner
    glVertex2f(990, 90);  // Rear-top corner
    //glVertex2f(300, 40);  // Slope down to the rear
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f); // Black color for wheels
    drawCircle(850, 90, 15); // Left wheel (center at (230, 20) with radius 15)
    drawCircle(940, 90, 15); // Right wheel (center at (320, 20) with radius 15)

// Wheel Caps (Darker Gray)
    glColor3f(0.2f, 0.2f, 0.2f); // Darker gray color for wheel caps
    drawCircle(850, 90, 7); // Left wheel cap (center at (230, 20) with radius 7)
    drawCircle(940, 90, 7); // Right wheel cap (center at (320, 20) with radius 7)
    //Driver window
    glColor3f(0.0f, 1.0f, 1.0f); // Blue color for the car body
    glBegin(GL_POLYGON);
    glVertex2f(805, 120+5);  // Bottom-right corner
    glVertex2f(820+5, 120+5);  // Bottom-right corner
    glVertex2f(825+5, 125+5);  // Slope up to the front
    glVertex2f(825+5, 170);  // Slope up to the front
    glVertex2f(810, 170);  // Slope up to the front
    glEnd();
    //window
    glColor3f(0.0f, 1.0f, 1.0f); // Blue color for the car body
    glBegin(GL_POLYGON);
    glVertex2f(835, 120);  // Bottom-right corner
    glVertex2f(990, 120);  // Bottom-right corner
    glVertex2f(990, 160);  // Slope up to the front
    glVertex2f(985, 165);  // Slope up to the front
    glVertex2f(835, 165);  // Slope up to the front
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(865, 120);  // Bottom-right corner
    glVertex2f(865, 165);
    glVertex2f(866, 120);
    glVertex2f(866, 165);
    glVertex2f(895, 120);
    glVertex2f(895, 165);
    glVertex2f(896, 120);
    glVertex2f(896, 165);
    glVertex2f(895+30, 120);
    glVertex2f(895+30, 165);
    glVertex2f(896+30, 120);
    glVertex2f(896+30, 165);
    glVertex2f(895+60, 120);
    glVertex2f(895+60, 165);
    glVertex2f(896+60, 120);
    glVertex2f(896+60, 165);
    glEnd();

    glPopMatrix();
}
void Car_2_N()
{
    glPushMatrix();
    glTranslatef(busX, 0, 0);

    // Car Body (Blue color)
    glColor3f(.5f, 0.5f, 0.5f); // Blue color for the car body
    glBegin(GL_POLYGON);
    glVertex2f(810, 90);  // Bottom-left corner
    glVertex2f(805, 120);  // Bottom-right corner
    glVertex2f(810, 165);  // Bottom-right corner
    glVertex2f(815, 170);  // Slope up to the front
    glVertex2f(990, 170);  // Slope up to the front
    glVertex2f(995, 165);  // Front-top corner
    glVertex2f(995, 95);  // Front-top corner
    glVertex2f(990, 90);  // Rear-top corner
    //glVertex2f(300, 40);  // Slope down to the rear
    glEnd();

    glColor3f(0.0f, 0.0f, 0.0f); // Black color for wheels
    drawCircle(850, 90, 15); // Left wheel (center at (230, 20) with radius 15)
    drawCircle(940, 90, 15); // Right wheel (center at (320, 20) with radius 15)

// Wheel Caps (Darker Gray)
    glColor3f(0.2f, 0.2f, 0.2f); // Darker gray color for wheel caps
    drawCircle(850, 90, 7); // Left wheel cap (center at (230, 20) with radius 7)
    drawCircle(940, 90, 7); // Right wheel cap (center at (320, 20) with radius 7)
    //car window
    glColor3f(0.8, 0.7, 0.3); // Blue color for the car body
    glBegin(GL_POLYGON);
    glVertex2f(805, 120+5);  // Bottom-right corner
    glVertex2f(820+5, 120+5);  // Bottom-right corner
    glVertex2f(825+5, 125+5);  // Slope up to the front
    glVertex2f(825+5, 170);  // Slope up to the front
    glVertex2f(810, 170);  // Slope up to the front
    glEnd();

    glColor3f(0.8, 0.7, 0.3); // Blue color for the car body
    glBegin(GL_POLYGON);
    glVertex2f(835, 120);  // Bottom-right corner
    glVertex2f(990, 120);  // Bottom-right corner
    glVertex2f(990, 160);  // Slope up to the front
    glVertex2f(985, 165);  // Slope up to the front
    glVertex2f(835, 165);  // Slope up to the front
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(865, 120);  // Bottom-right corner
    glVertex2f(865, 165);
    glVertex2f(866, 120);
    glVertex2f(866, 165);
    glVertex2f(895, 120);
    glVertex2f(895, 165);
    glVertex2f(896, 120);
    glVertex2f(896, 165);
    glVertex2f(895+30, 120);
    glVertex2f(895+30, 165);
    glVertex2f(896+30, 120);
    glVertex2f(896+30, 165);
    glVertex2f(895+60, 120);
    glVertex2f(895+60, 165);
    glVertex2f(896+60, 120);
    glVertex2f(896+60, 165);
    glEnd();
    glPopMatrix();
}