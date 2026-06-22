#include "scene_utils.h"

float smokeX = 0;      // Starting position of the car
float cloudX = 0;      // Starting position of the car
float planeX = 0;      // Starting position of the car


void smoke()
{
    glPushMatrix();
    glTranslatef(0,smokeX, 0);
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
    glVertex2f(0, 0);
    glVertex2f(1200, 0);
    glVertex2f(1200, 600);
    glVertex2f(0, 600);
    glEnd();
}

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

void Plane()
{
    glPushMatrix();
    glTranslatef(planeX, 400,0);
    glScalef(8.0f, 8.0f,0);

    glColor3f(.8, .8, 0.8);
    glBegin(GL_POLYGON);
    glVertex2f(21, 20);
    glVertex2f(18, 19);
    glVertex2f(21, 19);
    glVertex2f(24, 19);
    glVertex2f(24, 20);
    glVertex2f(25, 21);
    glEnd();

    glColor3f(1, 1, 1);
    drawCircle(20, 19.6, 0.2);

    glColor3f(0, 0, 1);
    drawCircle(23.8, 20, 0.2);

    glColor3f(1, 0, 0);
    drawCircle(23.8, 19.5, 0.2);

    glPopMatrix();
}

void Clouds()
{
    glPushMatrix();
    glTranslatef(cloudX, 0, 0);
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
    drawCircle(1000.0f, 530.0f, 40.0f);
}

void Moon()
{
    glColor3f(.960, .941, .832); //moon
    drawCircle(1000.0f, 530.0f, 40.0f);
}

void Ground_D()
{
    glColor3f(0.360f, 0.478f, 0.470f);//Main Road
    glBegin(GL_QUADS);
    glVertex2f(0, 0);
    glVertex2f(1200, 0);
    glVertex2f(1200, 130);
    glVertex2f(0, 130);
    glEnd();

    glColor3f(1.0f, 1.0f, 1.0f);//White stripe on the road
    glBegin(GL_QUADS);
    glVertex2f(0, 63);
    glVertex2f(1200, 63);
    glVertex2f(1200, 67);
    glVertex2f(0, 67);
    glEnd();

    glColor3f(.525f, 0.525, 0.525f);//Main Sidewalk Height
    glBegin(GL_QUADS);
    glVertex2f(0, 130);
    glVertex2f(1200, 130);
    glVertex2f(1200, 136);
    glVertex2f(0, 136);
    glEnd();

    glColor3f(.647, 0.647, 0.647);// Sidewalk
    glBegin(GL_QUADS);
    glVertex2f(0, 136);
    glVertex2f(1200, 136);
    glVertex2f(1200, 160);
    glVertex2f(0, 160);
    glEnd();

    glColor3f(.537, 0.792, 0.306); //Green Ground
    glBegin(GL_QUADS);
    glVertex2f(0, 160);
    glVertex2f(1200, 160);
    glVertex2f(1200, 250);
    glVertex2f(0, 250);

    //Extended Road towards Medical College

    glColor3f(.647, 0.647, 0.647);//Sub Sidewalk left
    glBegin(GL_QUADS);
    glVertex2f(280, 136);
    glVertex2f(320, 206);
    glVertex2f(345, 206);
    glVertex2f(315, 136);
    glEnd();

    glColor3f(.525f, 0.525, 0.525f);//Sub Sidewalk shadow
    glBegin(GL_QUADS);
    glVertex2f(310, 130);
    glVertex2f(345, 206);
    glVertex2f(349, 206);
    glVertex2f(314, 130);
    glEnd();

    glColor3f(.647, 0.647, 0.647);//Sub Sidewalk right
    glBegin(GL_QUADS);
    glVertex2f(480, 136);
    glVertex2f(445, 206);
    glVertex2f(475, 206);
    glVertex2f(520, 136);

    glColor3f(.525f, 0.525, 0.525f);//Sub Sidewalk shadow
    glBegin(GL_QUADS);
    glVertex2f(480, 136);
    glVertex2f(445, 206);
    glVertex2f(442, 206);
    glVertex2f(477, 130);
    glEnd();

    glColor3f(.525f, 0.525, 0.525f);//Middle Sidewalk shadow
    glBegin(GL_QUADS);
    glVertex2f(445, 202);
    glVertex2f(442, 206);
    glVertex2f(349, 206);
    glVertex2f(345, 202);
    glEnd();

    glColor3f(.647, 0.647, 0.647);//Middle Sidewalk
    glBegin(GL_POLYGON);
    glVertex2f(320, 206);
    glVertex2f(475, 206);
    glVertex2f(470, 214);
    glVertex2f(465, 216);
    glVertex2f(330, 216);
    glVertex2f(325, 214);
    glEnd();

    glColor3f(.360f, .478f, .470f);//Extended Main Road
    glBegin(GL_QUADS);
    glVertex2f(314, 130);
    glVertex2f(347, 202);
    glVertex2f(444, 202);
    glVertex2f(478, 130);
    glEnd();


    glColor3f(1,1,1);//Extended Main Road Stripe
    glBegin(GL_QUADS);
    glVertex2f(396, 130);
    glVertex2f(396, 202);
    glVertex2f(400, 202);
    glVertex2f(400, 130);
    glEnd();
}

void Ground_N()
{
    glColor3f(0.252f, 0.334f, 0.329f);//Main Road
    glBegin(GL_QUADS);
    glVertex2f(0, 0);
    glVertex2f(1200, 0);
    glVertex2f(1200, 130);
    glVertex2f(0, 130);
    glEnd();

    glColor3f(0.7f, 0.7f, 0.7f);//White stripe on the road
    glBegin(GL_QUADS);
    glVertex2f(0, 63);
    glVertex2f(1200, 63);
    glVertex2f(1200, 67);
    glVertex2f(0, 67);
    glEnd();

    glColor3f(.525f, 0.525, 0.525f);//Main Sidewalk Height
    glBegin(GL_QUADS);
    glVertex2f(0, 130);
    glVertex2f(1200, 130);
    glVertex2f(1200, 136);
    glVertex2f(0, 136);
    glEnd();

    glColor3f(0.453f, 0.453f, 0.453f);// Sidewalk
    glBegin(GL_QUADS);
    glVertex2f(0, 136);
    glVertex2f(1200, 136);
    glVertex2f(1200, 160);
    glVertex2f(0, 160);
    glEnd();

    glColor3f(0.376f, 0.554f, 0.214f); //Green Ground
    glBegin(GL_QUADS);
    glVertex2f(0, 160);
    glVertex2f(1200, 160);
    glVertex2f(1200, 250);
    glVertex2f(0, 250);

    //Extended Road towards Medical College

    glColor3f(0.453f, 0.453f, 0.453f);//Sub Sidewalk left
    glBegin(GL_QUADS);
    glVertex2f(280, 136);
    glVertex2f(320, 206);
    glVertex2f(345, 206);
    glVertex2f(315, 136);
    glEnd();

    glColor3f(.525f, 0.525, 0.525f);//Sub Sidewalk shadow
    glBegin(GL_QUADS);
    glVertex2f(310, 130);
    glVertex2f(345, 206);
    glVertex2f(349, 206);
    glVertex2f(314, 130);
    glEnd();

    glColor3f(0.453f, 0.453f, 0.453f);//Sub Sidewalk right
    glBegin(GL_QUADS);
    glVertex2f(480, 136);
    glVertex2f(445, 206);
    glVertex2f(475, 206);
    glVertex2f(520, 136);

    glColor3f(.525f, 0.525, 0.525f);//Sub Sidewalk shadow
    glBegin(GL_QUADS);
    glVertex2f(480, 136);
    glVertex2f(445, 206);
    glVertex2f(442, 206);
    glVertex2f(477, 130);
    glEnd();

    glColor3f(.525f, 0.525, 0.525f);//Middle Sidewalk shadow
    glBegin(GL_QUADS);
    glVertex2f(445, 202);
    glVertex2f(442, 206);
    glVertex2f(349, 206);
    glVertex2f(345, 202);
    glEnd();

    glColor3f(0.453f, 0.453f, 0.453f);//Middle Sidewalk
    glBegin(GL_POLYGON);
    glVertex2f(320, 206);
    glVertex2f(475, 206);
    glVertex2f(470, 214);
    glVertex2f(465, 216);
    glVertex2f(330, 216);
    glVertex2f(325, 214);
    glEnd();

    glColor3f(0.252f, 0.334f, 0.329f);//Extended Main Road
    glBegin(GL_QUADS);
    glVertex2f(314, 130);
    glVertex2f(347, 202);
    glVertex2f(444, 202);
    glVertex2f(478, 130);
    glEnd();


    glColor3f(0.7,0.7,0.7);//Extended Main Road stripe
    glBegin(GL_QUADS);
    glVertex2f(396, 130);
    glVertex2f(396, 202);
    glVertex2f(400, 202);
    glVertex2f(400, 130);
    glEnd();
}