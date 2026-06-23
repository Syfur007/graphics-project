#include "scene_utils.h"

float smokeY = 0;      // Starting position of the car
float cloudX = 0;      // Starting position of the car
float planeX = 0;      // Starting position of the car

float cloudZ = -30.0f;
float planeZ = 2.0f;
float sunMoonZ = -34.0f;
float traffic_z_offset = 15.0f;

float sky_offset = -35.0f; // Z offset for sky layers to ensure they are drawn behind everything else

enum TrafficState { RED, GREEN, YELLOW };
TrafficState currentTrafficState = RED;

void smoke()
{
    glPushMatrix();
    glTranslatef(0,smokeY, 0);
    glColor3f(0.6f, 0.6f, 0.6f);

    drawCircle(640, 350, 10);
    drawCircle(640, 360, 8);
    drawCircle(640, 368, 6);
    glPopMatrix();
}

void Day_Sky()
{
    glColor3f(0.53f, 0.81f, 0.92f); // Light blue sky
    glBegin(GL_QUADS);
    glVertex3f(0, 0, sky_offset);
    glVertex3f(1200, 0, sky_offset);
    glVertex3f(1200, 600, sky_offset);
    glVertex3f(0, 600, sky_offset);
    glEnd();
}

void Night_Sky()
{
    glColor3f(0.0f, 0.0f, 0.0f); // Light blue sky
    glBegin(GL_QUADS);
    glVertex3f(0, 0, sky_offset);
    glVertex3f(1200, 0, sky_offset);
    glVertex3f(1200, 600, sky_offset);
    glVertex3f(0, 600, sky_offset);
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

void Plane()
{
    glPushMatrix();
    glTranslatef(planeX, 400, planeZ);
    glScalef(8.0f, 8.0f, 0);

    glColor3f(.8, .8, 0.8);
    glBegin(GL_POLYGON);
    glVertex3f(21, 20, planeZ);
    glVertex3f(18, 19, planeZ);
    glVertex3f(21, 19, planeZ);
    glVertex3f(24, 19, planeZ);
    glVertex3f(24, 20, planeZ);
    glVertex3f(25, 21, planeZ);
    glEnd();

    glColor3f(1, 1, 1);
    drawCircle(20, 19.6, 0.2, planeZ);

    glColor3f(0, 0, 1);
    drawCircle(23.8, 20, 0.2, planeZ);

    glColor3f(1, 0, 0);
    drawCircle(23.8, 19.5, 0.2, planeZ);

    glPopMatrix();
}

void Clouds()
{
    glPushMatrix();
    glTranslatef(cloudX, 0, cloudZ);
    glColor3f(1.0f, 1.0f, 1.0f);
    drawCircle(100.0f, 550.0f, 20.0f);
    drawCircle(120.0f, 540.0f, 20.0f);
    drawCircle(125.0f, 560.0f, 20.0f);
    drawCircle(150.0f, 550.0f, 20.0f);

    glColor3f(1.0f, 1.0f, 1.0f);
    drawCircle(200.0f, 490.0f, 20.0f);
    drawCircle(220.0f, 480.0f, 20.0f);
    drawCircle(225.0f, 500.0f, 20.0f);
    drawCircle(250.0f, 490.0f, 20.0f);
    drawCircle(255.0f, 490.0f, 20.0f);

    glColor3f(1.0f, 1.0f, 1.0f);
    drawCircle(400.0f, 520.0f, 20.0f);
    drawCircle(420.0f, 510.0f, 20.0f);
    drawCircle(425.0f, 530.0f, 20.0f);
    drawCircle(450.0f, 520.0f, 20.0f);
    drawCircle(455.0f, 520.0f, 20.0f);

    glColor3f(1.0f, 1.0f, 1.0f);
    drawCircle(500.0f, 560.0f, 20.0f);
    drawCircle(520.0f, 550.0f, 20.0f);
    drawCircle(525.0f, 570.0f, 20.0f);
    drawCircle(550.0f, 560.0f, 20.0f);

    glColor3f(1.0f, 1.0f, 1.0f);
    drawCircle(700.0f, 540.0f, 20.0f);
    drawCircle(720.0f, 530.0f, 20.0f);
    drawCircle(725.0f, 550.0f, 20.0f);
    drawCircle(750.0f, 540.0f, 20.0f);

    glColor3f(1.0f, 1.0f, 1.0f);
    drawCircle(850.0f, 520.0f, 20.0f);
    drawCircle(870.0f, 510.0f, 20.0f);
    drawCircle(875.0f, 530.0f, 20.0f);
    drawCircle(900.0f, 520.0f, 20.0f);
    drawCircle(905.0f, 520.0f, 20.0f);
    glPopMatrix();
}

void sunA()
{
    glColor3f(.882, .937, .161); //SUN
    drawCircle(1000.0f, 530.0f, 40.0f, sunMoonZ);
}

void Moon()
{
    glColor3f(.960, .941, .832); //moon
    drawCircle(1000.0f, 530.0f, 40.0f, sunMoonZ);
}

float ground_offset = 4.0f;
float road_offset = 5.0f;
float extended_road_offset = 5.5f;

void Ground(bool isNight = false)
{

    glColor3f(0.5f, 0.5f, 0.5f); 
    glBegin(GL_QUADS);
        glVertex3f(500.0f, 150.0f, extended_road_offset+0.1f);
        glVertex3f(505.0f, 150.0f, extended_road_offset+0.1f);
        glVertex3f(505.0f, 195.0f, extended_road_offset+0.1f);
        glVertex3f(500.0f, 195.0f, extended_road_offset+0.1f);
    glEnd();
    
    glColor3f(1.0f, 0.0f, 0.0f); 
    glBegin(GL_POLYGON);
        glVertex3f(515.5f, 200.0f, extended_road_offset + 0.2f); // Right
        glVertex3f(509.0f, 211.26f, extended_road_offset + 0.2f); // Top Right
        glVertex3f(496.0f, 211.26f, extended_road_offset + 0.2f); // Top Left
        glVertex3f(489.5f, 200.0f, extended_road_offset + 0.2f); // Left
        glVertex3f(496.0f, 188.74f, extended_road_offset + 0.2f); // Bottom Left
        glVertex3f(509.0f, 188.74f, extended_road_offset + 0.2f); // Bottom Right
    glEnd();

    if (isNight)
        glColor3f(0.252f, 0.334f, 0.329f);
    else
        glColor3f(0.360f, 0.478f, 0.470f);//Main Road
    glBegin(GL_QUADS);
    glVertex3f(0, 0, road_offset);
    glVertex3f(1200, 0, road_offset);
    glVertex3f(1200, 130, road_offset);
    glVertex3f(0, 130, road_offset);
    glEnd();

    if (isNight)
        glColor3f(0.7f, 0.7f, 0.7f);
    else
        glColor3f(1.0f, 1.0f, 1.0f);//White stripe on the road
    glBegin(GL_QUADS);
    glVertex3f(0, 63, road_offset+0.1f);
    glVertex3f(1200, 63, road_offset+0.1f);
    glVertex3f(1200, 67, road_offset+0.1f);
    glVertex3f(0, 67, road_offset+0.1f);
    glEnd();

    glColor3f(.525f, 0.525, 0.525f);//Main Sidewalk Height
    glBegin(GL_QUADS);
    glVertex3f(0, 130, road_offset);
    glVertex3f(1200, 130, road_offset);
    glVertex3f(1200, 136, road_offset);
    glVertex3f(0, 136, road_offset);
    glEnd();

    if (isNight)
        glColor3f(0.453f, 0.453f, 0.453f);
    else
        glColor3f(.647, 0.647, 0.647);// Sidewalk
    glBegin(GL_QUADS);
    glVertex3f(0, 136, road_offset);
    glVertex3f(1200, 136, road_offset);
    glVertex3f(1200, 160, road_offset);
    glVertex3f(0, 160, road_offset);
    glEnd();

    if (isNight)
        glColor3f(0.376f, 0.554f, 0.214f);
    else
        glColor3f(.537, 0.792, 0.306); //Green Ground
    glBegin(GL_QUADS);
    glVertex3f(0, 160, ground_offset);
    glVertex3f(1200, 160, ground_offset);
    glVertex3f(1200, 250, ground_offset);
    glVertex3f(0, 250, ground_offset);

    //Extended Road towards Medical College

    if (isNight)
        glColor3f(0.453f, 0.453f, 0.453f);
    else
        glColor3f(.647, 0.647, 0.647);//Sub Sidewalk left
    glBegin(GL_QUADS);
    glVertex3f(280, 136, extended_road_offset+0.1f);
    glVertex3f(320, 206, extended_road_offset);
    glVertex3f(345, 206, extended_road_offset);
    glVertex3f(315, 136, extended_road_offset);
    glEnd();

    glColor3f(.525f, 0.525, 0.525f);//Sub Sidewalk shadow
    glBegin(GL_QUADS);
    glVertex3f(310, 130, extended_road_offset);
    glVertex3f(345, 206, extended_road_offset);
    glVertex3f(349, 206, extended_road_offset);
    glVertex3f(314, 130, extended_road_offset);
    glEnd();

    if (isNight)
        glColor3f(0.453f, 0.453f, 0.453f);
    else
        glColor3f(.647, 0.647, 0.647);//Sub Sidewalk right
    glBegin(GL_QUADS);
    glVertex3f(480, 136, extended_road_offset);
    glVertex3f(445, 206, extended_road_offset);
    glVertex3f(475, 206, extended_road_offset);
    glVertex3f(520, 136, extended_road_offset);

    glColor3f(.525f, 0.525, 0.525f);//Sub Sidewalk shadow
    glBegin(GL_QUADS);
    glVertex3f(480, 136, extended_road_offset);
    glVertex3f(445, 206, extended_road_offset);
    glVertex3f(442, 206, extended_road_offset);
    glVertex3f(477, 130, extended_road_offset);
    glEnd();

    glColor3f(.525f, 0.525, 0.525f);//Middle Sidewalk shadow
    glBegin(GL_QUADS);
    glVertex3f(445, 202, extended_road_offset);
    glVertex3f(442, 206, extended_road_offset);
    glVertex3f(349, 206, extended_road_offset);
    glVertex3f(345, 202, extended_road_offset);
    glEnd();

    if (isNight)
        glColor3f(0.453f, 0.453f, 0.453f);
    else
        glColor3f(.647, 0.647, 0.647);//Middle Sidewalk
    glBegin(GL_POLYGON);
    glVertex3f(320, 206, extended_road_offset);
    glVertex3f(475, 206, extended_road_offset);
    glVertex3f(470, 214, extended_road_offset);
    glVertex3f(465, 216, extended_road_offset);
    glVertex3f(330, 216, extended_road_offset);
    glVertex3f(325, 214, extended_road_offset);
    glEnd();

    if (isNight)
        glColor3f(0.252f, 0.334f, 0.329f);
    else
        glColor3f(.360f, .478f, .470f);//Extended Main Road
    glBegin(GL_QUADS);
    glVertex3f(314, 130, extended_road_offset);
    glVertex3f(347, 202, extended_road_offset);
    glVertex3f(444, 202, extended_road_offset);
    glVertex3f(478, 130, extended_road_offset);
    glEnd();

    if (isNight)
        glColor3f(0.7,0.7,0.7);
    else
        glColor3f(1,1,1);//Extended Main Road Stripe
    glBegin(GL_QUADS);
    glVertex3f(396, 130, extended_road_offset+0.1f);
    glVertex3f(396, 202, extended_road_offset+0.1f);
    glVertex3f(400, 202, extended_road_offset+0.1f);
    glVertex3f(400, 130, extended_road_offset+0.1f);
    glEnd();
}


void DrawTrafficLight()
{
    // Check if the state variable can be seen safely from scene.h
    extern TrafficState currentTrafficState;

    glPushMatrix();
    // Position the traffic pole near x = 250, y = 140 (just at the edge of the sidewalk/road)
    glTranslatef(250.0f, 0.0f, 0.0f);

    // 1. Draw Post Pole (Gray Rectangle)
    glColor3f(0.3f, 0.3f, 0.3f);
    glBegin(GL_QUADS);
        glVertex3f(-3.0f, 0.0f, traffic_z_offset);
        glVertex3f(3.0f, 0.0f, traffic_z_offset);
        glVertex3f(3.0f, 60.0f, traffic_z_offset);
        glVertex3f(-3.0f, 60.0f, traffic_z_offset);
    glEnd();

    // 2. Draw Light Box Box Housing (Black Back-plate)
    glColor3f(0.1f, 0.1f, 0.1f);
    glBegin(GL_QUADS);
        glVertex3f(-8.0f, 60.0f, traffic_z_offset + 0.1f);
        glVertex3f(8.0f, 60.0f, traffic_z_offset + 0.1f);
        glVertex3f(8.0f, 105.0f, traffic_z_offset + 0.1f);
        glVertex3f(-8.0f, 105.0f, traffic_z_offset + 0.1f);
    glEnd();

    // 3. Draw Red Lamp (Top)
    if (currentTrafficState == RED)
        glColor3f(1.0f, 0.0f, 0.0f); // Bright active Red
    else
        glColor3f(0.2f, 0.0f, 0.0f); // Dim inactive Red
    drawCircle(0.0f, 95.0f, 5.0f, traffic_z_offset + 0.2f);

    // 4. Draw Yellow Lamp (Middle)
    if (currentTrafficState == YELLOW)
        glColor3f(1.0f, 0.8f, 0.0f); // Bright active Yellow
    else
        glColor3f(0.2f, 0.16f, 0.0f); // Dim inactive Yellow
    drawCircle(0.0f, 82.5f, 5.0f, traffic_z_offset + 0.2f);

    // 5. Draw Green Lamp (Bottom)
    if (currentTrafficState == GREEN)
        glColor3f(0.0f, 1.0f, 0.0f); // Bright active Green
    else
        glColor3f(0.0f, 0.2f, 0.0f); // Dim inactive Green
    drawCircle(0.0f, 70.0f, 5.0f, traffic_z_offset + 0.2f);

    glPopMatrix();
}