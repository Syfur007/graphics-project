
float carX = 0;      // Starting position of the car
float busX = 0;      // Starting position of the car
float smokeX = 0;      // Starting position of the car
float cloudX = 0;      // Starting position of the car
float planeX = 0;      // Starting position of the car
float carSpeed = 0;
float busSpeed = 0;
float smokeSpeed = 4.0f;
float cloudSpeed = 0.0f;
float planeSpeed = 3.0f;

void drawCircle(float x, float y, float radius)
{
    glBegin(GL_POLYGON);  // Use line loop to draw the circle
    for (int i = 0; i < 360; i++)
    {
        float angle = i * 3.14159f / 180.0f; // Convert degrees to radians
        float dx = x + cos(angle) * radius;  // x coordinate of the point on the circle
        float dy = y + sin(angle) * radius;  // y coordinate of the point on the circle
        glVertex2f(dx, dy);  // Set the vertex
    }
    glEnd();
}

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

void Buildings()
{
    //Hospital

    glColor3f(.941, .941, .941);//Main building
    glBegin(GL_POLYGON);
    glVertex2f( 80, 185);
    glVertex2f( 90, 180);
    glVertex2f(170, 180);
    glVertex2f(180, 185);
    glVertex2f(180, 400);
    glVertex2f(170, 410);
    glVertex2f( 90, 410);
    glVertex2f( 80, 400);
    glEnd();

    glColor3f(.901, .901, .901);//left most Building
    glBegin(GL_QUADS);
    glVertex2f(-20, 185);
    glVertex2f( 80, 185);
    glVertex2f( 80, 355);
    glVertex2f(-20, 355);
    glEnd();

    glColor3f(.901, .901, .901);//Right most Building
    glBegin(GL_POLYGON);
    glVertex2f(180, 185);
    glVertex2f(270, 185);
    glVertex2f(270, 345);
    glVertex2f(260, 355);
    glVertex2f(180, 355);
    glEnd();

    glColor3f(.705, .705, .705);//Shadow of side building
    glBegin(GL_QUADS);
    glVertex2f(270, 185);
    glVertex2f(275, 185);
    glVertex2f(275, 337);
    glVertex2f(270, 345);
    glEnd();

    glColor3f(.909, 0.290, 0.188);//signboard
    glBegin(GL_QUADS);
    glVertex2f(110, 380);
    glVertex2f(150, 380);
    glVertex2f(150, 430);
    glVertex2f(110, 430);
    glEnd();

    glColor3f(1, 1, 1);//Plus sign
    glBegin(GL_QUADS);
    glVertex2f(127, 385);
    glVertex2f(133, 385);
    glVertex2f(133, 425);
    glVertex2f(127, 425);
    glEnd();

    glColor3f(1, 1, 1);//Plus sign
    glBegin(GL_QUADS);
    glVertex2f(115, 402);
    glVertex2f(145, 402);
    glVertex2f(145, 410);
    glVertex2f(115, 410);
    glEnd();

    glColor3f(.207, .219, .756);//Entrance
    glBegin(GL_QUADS);
    glVertex2f(110, 180);
    glVertex2f(150, 180);
    glVertex2f(150, 220);
    glVertex2f(110, 220);
    glEnd();

    glColor3f(1, 1, 1);//Entrance
    glBegin(GL_LINES);
    glVertex2f(110, 212);
    glVertex2f(150, 212);
    glVertex2f(130, 212);
    glVertex2f(130, 180);
    glEnd();

    //Hospital Windows
    glColor3f(.207, .219, .756);
    glBegin(GL_QUADS);
    glVertex2f(90, 230);
    glVertex2f(170, 230);
    glVertex2f(170, 245);
    glVertex2f(90, 245);
    glEnd();

    glColor3f(.207, .219, .756);
    glBegin(GL_QUADS);
    glVertex2f(90, 255);
    glVertex2f(170, 255);
    glVertex2f(170, 270);
    glVertex2f(90, 270);
    glEnd();

    glColor3f(.207, .219, .756);
    glBegin(GL_QUADS);
    glVertex2f(90, 280);
    glVertex2f(170, 280);
    glVertex2f(170, 295);
    glVertex2f(90, 295);
    glEnd();

    glColor3f(.207, .219, .756);
    glBegin(GL_QUADS);
    glVertex2f(90, 305);
    glVertex2f(170, 305);
    glVertex2f(170, 320);
    glVertex2f(90, 320);
    glEnd();

    glColor3f(.207, .219, .756);
    glBegin(GL_QUADS);
    glVertex2f(90, 330);
    glVertex2f(170, 330);
    glVertex2f(170, 345);
    glVertex2f(90, 345);
    glEnd();

    glColor3f(.207, .219, .756);
    glBegin(GL_QUADS);
    glVertex2f(90, 355);
    glVertex2f(170, 355);
    glVertex2f(170, 370);
    glVertex2f(90, 370);
    glEnd();

    //second building windows

    glColor3f(.207, .219, .756);
    glBegin(GL_QUADS);
    glVertex2f(-20, 200);
    glVertex2f(70, 200);
    glVertex2f(70, 215);
    glVertex2f(-20, 215);
    glEnd();

    glColor3f(.207, .219, .756);
    glBegin(GL_QUADS);
    glVertex2f(-20, 225);
    glVertex2f(70, 225);
    glVertex2f(70, 240);
    glVertex2f(-20, 240);
    glEnd();

    glColor3f(.207, .219, .756);
    glBegin(GL_QUADS);
    glVertex2f(-20, 250);
    glVertex2f(70, 250);
    glVertex2f(70, 265);
    glVertex2f(-20, 265);
    glEnd();

    glColor3f(.207, .219, .756);
    glBegin(GL_QUADS);
    glVertex2f(-20, 275);
    glVertex2f(70, 275);
    glVertex2f(70, 290);
    glVertex2f(-20, 290);
    glEnd();

    glColor3f(.207, .219, .756);
    glBegin(GL_QUADS);
    glVertex2f(-20, 300);
    glVertex2f( 70, 300);
    glVertex2f( 70, 315);
    glVertex2f(-20, 315);
    glEnd();

    glColor3f(.207, .219, .756);
    glBegin(GL_QUADS);
    glVertex2f(-20, 325);
    glVertex2f( 70, 325);
    glVertex2f( 70, 340);
    glVertex2f(-20, 340);
    glEnd();

    //third building windows

    glColor3f(.207, .219, .756);
    glBegin(GL_QUADS);
    glVertex2f(190, 200);
    glVertex2f(260, 200);
    glVertex2f(260, 215);
    glVertex2f(190, 215);
    glEnd();

    glColor3f(.207, .219, .756);
    glBegin(GL_QUADS);
    glVertex2f(190, 225);
    glVertex2f(260, 225);
    glVertex2f(260, 240);
    glVertex2f(190, 240);
    glEnd();

    glColor3f(.207, .219, .756);
    glBegin(GL_QUADS);
    glVertex2f(190, 250);
    glVertex2f(260, 250);
    glVertex2f(260, 265);
    glVertex2f(190, 265);
    glEnd();

    glColor3f(.207, .219, .756);
    glBegin(GL_QUADS);
    glVertex2f(190, 275);
    glVertex2f(260, 275);
    glVertex2f(260, 290);
    glVertex2f(190, 290);
    glEnd();

    glColor3f(.207, .219, .756);
    glBegin(GL_QUADS);
    glVertex2f(190, 300);
    glVertex2f(260, 300);
    glVertex2f(260, 315);
    glVertex2f(190, 315);
    glEnd();

    glColor3f(.207, .219, .756);
    glBegin(GL_QUADS);
    glVertex2f(190, 325);
    glVertex2f(260, 325);
    glVertex2f(260, 340);
    glVertex2f(190, 340);
    glEnd();


    // Medical University

    glColor3f(1,1,1);//backward building
    glBegin(GL_POLYGON);
    glVertex2f(370+50, 230);
    glVertex2f(370+50, 415);
    glVertex2f(375+50, 420);
    glVertex2f(465+50, 420);
    glVertex2f(470+50, 415);
    glVertex2f(470+50, 230);
    glEnd();

    //windows

    glColor3f(0.656,0.796,0.839);//backward building
    glBegin(GL_POLYGON);
    glVertex2f(374+50, 240);
    glVertex2f(374+50, 411);
    glVertex2f(379+50, 416);
    glVertex2f(461+50, 416);
    glVertex2f(466+50, 411);
    glVertex2f(466+50, 240);
    glEnd();

    glColor3f(1,1,1);//backward building 2
    glBegin(GL_POLYGON);
    glVertex2f(300, 230);
    glVertex2f(300, 415);
    glVertex2f(305, 420);
    glVertex2f(395, 420);
    glVertex2f(400, 415);
    glVertex2f(400, 230);
    glEnd();

    //windows

    glColor3f(0.656,0.796,0.839);//backward building 2
    glBegin(GL_POLYGON);
    glVertex2f(304, 240);
    glVertex2f(304, 411);
    glVertex2f(309, 416);
    glVertex2f(391, 416);
    glVertex2f(396, 411);
    glVertex2f(396, 240);
    glEnd();

    glColor3f(1,1,1);//window Lines Horizontal
    glBegin(GL_LINES);
    glVertex2f(304, 260);
    glVertex2f(516, 260);
    glVertex2f(304, 280);
    glVertex2f(516, 280);
    glVertex2f(304, 300);
    glVertex2f(516, 300);
    glVertex2f(304, 320);
    glVertex2f(516, 320);
    glVertex2f(304, 340);
    glVertex2f(516, 340);
    glVertex2f(304, 360);
    glVertex2f(396, 360);
    glVertex2f(304, 380);
    glVertex2f(396, 380);
    glVertex2f(304, 400);
    glVertex2f(396, 400);
    glVertex2f(424, 400);
    glVertex2f(516, 400);
    glVertex2f(424, 380);
    glVertex2f(516, 380);
    glVertex2f(424, 360);
    glVertex2f(516, 360);
    glEnd();

    glColor3f(1,1,1);//window Lines vertical
    glBegin(GL_LINES);
    glVertex2f(309, 240);
    glVertex2f(309, 416);
    glVertex2f(329, 240);
    glVertex2f(329, 416);
    glVertex2f(349, 240);
    glVertex2f(349, 416);
    glVertex2f(369, 240);
    glVertex2f(369, 416);
    glVertex2f(389, 240);
    glVertex2f(389, 416);
    glVertex2f(429, 240);//Building on the right
    glVertex2f(429, 416);
    glVertex2f(449, 240);
    glVertex2f(449, 416);
    glVertex2f(469, 240);
    glVertex2f(469, 416);
    glVertex2f(489, 240);
    glVertex2f(489, 416);
    glVertex2f(509, 240);
    glVertex2f(509, 416);
    glEnd();

    glColor3f(1,1,1);//Forward building
    glBegin(GL_POLYGON);
    glVertex2f(320+40, 230);
    glVertex2f(320+40, 345);
    glVertex2f(325+40, 350);
    glVertex2f(415+40, 350);
    glVertex2f(420+40, 345);
    glVertex2f(420+40, 230);
    glEnd();

    //Windows

    glColor3f(0.656,0.796,0.839);
    glBegin(GL_POLYGON);
    glVertex2f(324+40, 240);
    glVertex2f(324+40, 341);
    glVertex2f(329+40, 346);
    glVertex2f(411+40, 346);
    glVertex2f(416+40, 341);
    glVertex2f(416+40, 240);
    glEnd();

    glColor3f(1,1,1);//window Lines horizontal
    glBegin(GL_LINES);
    glVertex2f(364, 260);
    glVertex2f(456, 260);
    glVertex2f(364, 280);
    glVertex2f(456, 280);
    glVertex2f(364, 300);
    glVertex2f(456, 300);
    glVertex2f(364, 320);
    glVertex2f(456, 320);
    glVertex2f(364, 340);
    glVertex2f(456, 340);
    glEnd();

    glColor3f(1,1,1);//window Lines vertical
    glBegin(GL_LINES);
    glVertex2f(369, 240);
    glVertex2f(369, 346);
    glVertex2f(389, 240);
    glVertex2f(389, 346);
    glVertex2f(409, 240);
    glVertex2f(409, 346);
    glVertex2f(429, 240);
    glVertex2f(429, 346);
    glVertex2f(449, 240);
    glVertex2f(449, 346);
    glEnd();

    //University Entrance

    glColor3f(0.773,0.800,0.769);//DOor
    glBegin(GL_POLYGON);
    glVertex2f(390, 230);
    glVertex2f(390, 265);
    glVertex2f(395, 270);
    glVertex2f(425, 270);
    glVertex2f(430, 265);
    glVertex2f(430, 230);

    glEnd();

    glColor3f(0,0,0);//DOor
    glBegin(GL_LINES);
    glVertex2f(410, 230);
    glVertex2f(410, 270);
    glEnd();

    //Restaurant

    glColor3f(0.195,0.596,0.898);
    glBegin(GL_QUADS);
    glVertex2i(570, 190);
    glVertex2i(570, 280);
    glVertex2i(680, 280);
    glVertex2i(680, 190);
    glEnd();

    glColor3f(0.085,0.411,0.710);
    glBegin(GL_QUADS);
    glVertex2i(570, 190);
    glVertex2i(570, 280);
    glVertex2i(560, 285);
    glVertex2i(560, 198);
    glEnd();

    glColor3f(0.191,0.371,0.660);
    glBegin(GL_TRIANGLES);
    glVertex2i(565, 280);
    glVertex2i(690, 280);
    glVertex2i(615, 320);
    glEnd();

    glColor3f(0.191,0.371,0.660);
    glBegin(GL_TRIANGLES);
    glVertex2i(565, 280);
    glVertex2i(615, 320);
    glVertex2i(550, 290);
    glEnd();

    //chimney
    glColor3f(0.191,0.371,0.660);
    glBegin(GL_QUADS);
    glVertex2i(635, 300);
    glVertex2i(645, 300);
    glVertex2i(645, 345);
    glVertex2i(635, 340);
    glEnd();

    //Door
    glColor3f(0.656,0.796,0.839);
    glBegin(GL_QUADS);
    glVertex2i(590, 190);
    glVertex2i(590, 250);
    glVertex2i(660, 250);
    glVertex2i(660, 190);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2i(625, 190);
    glVertex2i(625, 250);

    glEnd();

    //Pharmacy
    glColor3f(0.295,0.796,0.773);
    glBegin(GL_QUADS);
    glVertex2i(713, 190);
    glVertex2i(713, 280);
    glVertex2i(823, 280);
    glVertex2i(823, 190);
    glEnd();

    glColor3f(0.187,0.664,0.640);
    glBegin(GL_QUADS);
    glVertex2i(713, 190);
    glVertex2i(713, 280);
    glVertex2i(703, 285);
    glVertex2i(703, 198);
    glEnd();

    glColor3f(0.281,0.488,0.570);
    glBegin(GL_QUADS);
    glVertex2i(708, 270);
    glVertex2i(710, 310);
    glVertex2i(815, 310);
    glVertex2i(830, 270);
    glEnd();

    glColor3f(0.281,0.488,0.570);
    glBegin(GL_TRIANGLES);
    glVertex2i(708, 270);
    glVertex2i(710, 310);
    glVertex2i(695, 280);
    glEnd();

    //Door
    glColor3f(0.281,0.488,0.570);
    glBegin(GL_QUADS);
    glVertex2i(738, 190);
    glVertex2i(738, 250);
    glVertex2i(800, 250);
    glVertex2i(800, 190);
    glEnd();

    glColor3f(0.656,0.796,0.839);
    glBegin(GL_QUADS);
    glVertex2i(767, 195);
    glVertex2i(767, 250);
    glVertex2i(800, 250);
    glVertex2i(800, 190);
    glEnd();

    glColor3f(0.656,0.796,0.839);
    glBegin(GL_QUADS);
    glVertex2i(738, 190);
    glVertex2i(738, 250);
    glVertex2i(765, 250);
    glVertex2i(765, 200);
    glEnd();

    //MegaMall
    glColor3f(0.773,0.800,0.769);
    glBegin(GL_QUADS);
    glVertex2i(860, 210);
    glVertex2i(860, 400);
    glVertex2i(1010, 440);
    glVertex2i(1010, 190);
    glEnd();

    glColor3f(0.801,0.802,0.807);
    glBegin(GL_QUADS);
    glVertex2i(1010, 190);
    glVertex2i(1010, 440);
    glVertex2i(1160, 400);
    glVertex2i(1160, 210);
    glEnd();

    //Entrances

    glColor3f(0.492,0.511,0.617);
    glBegin(GL_QUADS);
    glVertex2i(910, 203);
    glVertex2i(910, 240);
    glVertex2i(960, 236);
    glVertex2i(960, 196);
    glEnd();

    glColor3f(0.492,0.511,0.617);
    glBegin(GL_QUADS);
    glVertex2i(1060, 196);
    glVertex2i(1060, 236);
    glVertex2i(1110, 241);
    glVertex2i(1110, 203);
    glEnd();

    //windows
    glColor3f(0.203,0.203,0.515);
    glBegin(GL_QUADS);
    glVertex2i(865, 250);
    glVertex2i(865, 395);
    glVertex2i(1005, 430);
    glVertex2i(1005, 240);
    glEnd();

    glColor3f(0.382,0.382,0.757);
    glBegin(GL_QUADS);
    glVertex2i(1015, 240);
    glVertex2i(1015, 430);
    glVertex2i(1155, 395);
    glVertex2i(1155, 250);
    glEnd();

    //window Lines
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2i(935, 244);
    glVertex2i(935, 412);
    glVertex2i(865, 322);
    glVertex2i(1005, 335);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2i(1085, 244);
    glVertex2i(1085, 412);
    glVertex2i(1155, 322);
    glVertex2i(1015, 335);
    glEnd();

}

void Buildings_N()
{
    //Hospital

    glColor3f(0.658, 0.658, 0.658); // Main building (Darker)
    glBegin(GL_POLYGON);
    glVertex2f( 80, 185);
    glVertex2f( 90, 180);
    glVertex2f(170, 180);
    glVertex2f(180, 185);
    glVertex2f(180, 400);
    glVertex2f(170, 410);
    glVertex2f( 90, 410);
    glVertex2f( 80, 400);
    glEnd();

    glColor3f(0.630, 0.630, 0.630); // left most Building (Darker)
    glBegin(GL_QUADS);
    glVertex2f(-20, 185);
    glVertex2f( 80, 185);
    glVertex2f( 80, 355);
    glVertex2f(-20, 355);
    glEnd();

    glColor3f(0.630, 0.630, 0.630); // Right most Building (Darker)
    glBegin(GL_POLYGON);
    glVertex2f(180, 185);
    glVertex2f(270, 185);
    glVertex2f(270, 345);
    glVertex2f(260, 355);
    glVertex2f(180, 355);
    glEnd();

    glColor3f(0.493, 0.493, 0.493); // Shadow of side building (Darker)
    glBegin(GL_QUADS);
    glVertex2f(270, 185);
    glVertex2f(275, 185);
    glVertex2f(275, 337);
    glVertex2f(270, 345);
    glEnd();

    glColor3f(0.636, 0.203, 0.132); // signboard (Darker)
    glBegin(GL_QUADS);
    glVertex2f(110, 380);
    glVertex2f(150, 380);
    glVertex2f(150, 430);
    glVertex2f(110, 430);
    glEnd();

    glColor3f(0.7, 0.7, 0.7); // Plus sign (Darker)
    glBegin(GL_QUADS);
    glVertex2f(127, 385);
    glVertex2f(133, 385);
    glVertex2f(133, 425);
    glVertex2f(127, 425);
    glEnd();

    glColor3f(0.7, 0.7, 0.7); // Plus sign (Darker)
    glBegin(GL_QUADS);
    glVertex2f(115, 402);
    glVertex2f(145, 402);
    glVertex2f(145, 410);
    glVertex2f(115, 410);
    glEnd();

    glColor3f(0.8, 0.7, 0.3); // Entrance (Darker)
    glBegin(GL_QUADS);
    glVertex2f(110, 180);
    glVertex2f(150, 180);
    glVertex2f(150, 220);
    glVertex2f(110, 220);
    glEnd();

    glColor3f(0.7, 0.7, 0.7); // Entrance (Darker)
    glBegin(GL_LINES);
    glVertex2f(110, 212);
    glVertex2f(150, 212);
    glVertex2f(130, 212);
    glVertex2f(130, 180);
    glEnd();

//Hospital Windows
    glColor3f(0.8, 0.7, 0.3); // Windows (Darker)
    glBegin(GL_QUADS);
    glVertex2f(90, 230);
    glVertex2f(170, 230);
    glVertex2f(170, 245);
    glVertex2f(90, 245);
    glEnd();

    glColor3f(0.8, 0.7, 0.3); // Windows (Darker)
    glBegin(GL_QUADS);
    glVertex2f(90, 255);
    glVertex2f(170, 255);
    glVertex2f(170, 270);
    glVertex2f(90, 270);
    glEnd();

    glColor3f(0.8, 0.7, 0.3); // Windows (Darker)
    glBegin(GL_QUADS);
    glVertex2f(90, 280);
    glVertex2f(170, 280);
    glVertex2f(170, 295);
    glVertex2f(90, 295);
    glEnd();

    glColor3f(0.8, 0.7, 0.3); // Windows (Darker)
    glBegin(GL_QUADS);
    glVertex2f(90, 305);
    glVertex2f(170, 305);
    glVertex2f(170, 320);
    glVertex2f(90, 320);
    glEnd();

    glColor3f(0.8, 0.7, 0.3); // Windows (Darker)
    glBegin(GL_QUADS);
    glVertex2f(90, 330);
    glVertex2f(170, 330);
    glVertex2f(170, 345);
    glVertex2f(90, 345);
    glEnd();

    glColor3f(0.8, 0.7, 0.3); // Windows (Darker)
    glBegin(GL_QUADS);
    glVertex2f(90, 355);
    glVertex2f(170, 355);
    glVertex2f(170, 370);
    glVertex2f(90, 370);
    glEnd();

//second building windows

    glColor3f(0.8, 0.7, 0.3); // Windows (Darker)
    glBegin(GL_QUADS);
    glVertex2f(-20, 200);
    glVertex2f(70, 200);
    glVertex2f(70, 215);
    glVertex2f(-20, 215);
    glEnd();

    glColor3f(0.8, 0.7, 0.3); // Windows (Darker)
    glBegin(GL_QUADS);
    glVertex2f(-20, 225);
    glVertex2f(70, 225);
    glVertex2f(70, 240);
    glVertex2f(-20, 240);
    glEnd();

    glColor3f(0.8, 0.7, 0.3); // Windows (Darker)
    glBegin(GL_QUADS);
    glVertex2f(-20, 250);
    glVertex2f(70, 250);
    glVertex2f(70, 265);
    glVertex2f(-20, 265);
    glEnd();

    glColor3f(0.8, 0.7, 0.3); // Windows (Darker)
    glBegin(GL_QUADS);
    glVertex2f(-20, 275);
    glVertex2f(70, 275);
    glVertex2f(70, 290);
    glVertex2f(-20, 290);
    glEnd();

    glColor3f(0.8, 0.7, 0.3); // Windows (Darker)
    glBegin(GL_QUADS);
    glVertex2f(-20, 300);
    glVertex2f( 70, 300);
    glVertex2f( 70, 315);
    glVertex2f(-20, 315);
    glEnd();

    glColor3f(0.8, 0.7, 0.3); // Windows (Darker)
    glBegin(GL_QUADS);
    glVertex2f(-20, 325);
    glVertex2f( 70, 325);
    glVertex2f( 70, 340);
    glVertex2f(-20, 340);
    glEnd();

//third building windows

    glColor3f(0.8, 0.7, 0.3); // Windows (Darker)
    glBegin(GL_QUADS);
    glVertex2f(190, 200);
    glVertex2f(260, 200);
    glVertex2f(260, 215);
    glVertex2f(190, 215);
    glEnd();

    glColor3f(0.8, 0.7, 0.3); // Windows (Darker)
    glBegin(GL_QUADS);
    glVertex2f(190, 225);
    glVertex2f(260, 225);
    glVertex2f(260, 240);
    glVertex2f(190, 240);
    glEnd();

    glColor3f(0.8, 0.7, 0.3); // Windows (Darker)
    glBegin(GL_QUADS);
    glVertex2f(190, 250);
    glVertex2f(260, 250);
    glVertex2f(260, 265);
    glVertex2f(190, 265);
    glEnd();

    glColor3f(0.8, 0.7, 0.3); // Windows (Darker)
    glBegin(GL_QUADS);
    glVertex2f(190, 275);
    glVertex2f(260, 275);
    glVertex2f(260, 290);
    glVertex2f(190, 290);
    glEnd();

    glColor3f(0.8, 0.7, 0.3); // Windows (Darker)
    glBegin(GL_QUADS);
    glVertex2f(190, 300);
    glVertex2f(260, 300);
    glVertex2f(260, 315);
    glVertex2f(190, 315);
    glEnd();

    glColor3f(0.8, 0.7, 0.3); // Windows (Darker)
    glBegin(GL_QUADS);
    glVertex2f(190, 325);
    glVertex2f(260, 325);
    glVertex2f(260, 340);
    glVertex2f(190, 340);
    glEnd();


    // Medical University

    glColor3f(0.5, 0.5, 0.5); // backward building (Darker)
    glBegin(GL_POLYGON);
    glVertex2f(370+50, 230);
    glVertex2f(370+50, 415);
    glVertex2f(375+50, 420);
    glVertex2f(465+50, 420);
    glVertex2f(470+50, 415);
    glVertex2f(470+50, 230);
    glEnd();

// windows

    glColor3f(0.3, 0.4, 0.45); // backward building (Darker windows)
    glBegin(GL_POLYGON);
    glVertex2f(374+50, 240);
    glVertex2f(374+50, 411);
    glVertex2f(379+50, 416);
    glVertex2f(461+50, 416);
    glVertex2f(466+50, 411);
    glVertex2f(466+50, 240);
    glEnd();

    glColor3f(0.5, 0.5, 0.5); // backward building 2 (Darker)
    glBegin(GL_POLYGON);
    glVertex2f(300, 230);
    glVertex2f(300, 415);
    glVertex2f(305, 420);
    glVertex2f(395, 420);
    glVertex2f(400, 415);
    glVertex2f(400, 230);
    glEnd();

// windows

    glColor3f(0.3, 0.4, 0.45); // backward building 2 (Darker windows)
    glBegin(GL_POLYGON);
    glVertex2f(304, 240);
    glVertex2f(304, 411);
    glVertex2f(309, 416);
    glVertex2f(391, 416);
    glVertex2f(396, 411);
    glVertex2f(396, 240);
    glEnd();

    glColor3f(0.5, 0.5, 0.5); // window Lines Horizontal (Darker)
    glBegin(GL_LINES);
    glVertex2f(304, 260);
    glVertex2f(516, 260);
    glVertex2f(304, 280);
    glVertex2f(516, 280);
    glVertex2f(304, 300);
    glVertex2f(516, 300);
    glVertex2f(304, 320);
    glVertex2f(516, 320);
    glVertex2f(304, 340);
    glVertex2f(516, 340);
    glVertex2f(304, 360);
    glVertex2f(396, 360);
    glVertex2f(304, 380);
    glVertex2f(396, 380);
    glVertex2f(304, 400);
    glVertex2f(396, 400);
    glVertex2f(424, 400);
    glVertex2f(516, 400);
    glVertex2f(424, 380);
    glVertex2f(516, 380);
    glVertex2f(424, 360);
    glVertex2f(516, 360);
    glEnd();

    glColor3f(0.5, 0.5, 0.5); // window Lines vertical (Darker)
    glBegin(GL_LINES);
    glVertex2f(309, 240);
    glVertex2f(309, 416);
    glVertex2f(329, 240);
    glVertex2f(329, 416);
    glVertex2f(349, 240);
    glVertex2f(349, 416);
    glVertex2f(369, 240);
    glVertex2f(369, 416);
    glVertex2f(389, 240);
    glVertex2f(389, 416);
    glVertex2f(429, 240); // Building on the right
    glVertex2f(429, 416);
    glVertex2f(449, 240);
    glVertex2f(449, 416);
    glVertex2f(469, 240);
    glVertex2f(469, 416);
    glVertex2f(489, 240);
    glVertex2f(489, 416);
    glVertex2f(509, 240);
    glVertex2f(509, 416);
    glEnd();

    glColor3f(0.5, 0.5, 0.5); // Forward building (Darker)
    glBegin(GL_POLYGON);
    glVertex2f(320+40, 230);
    glVertex2f(320+40, 345);
    glVertex2f(325+40, 350);
    glVertex2f(415+40, 350);
    glVertex2f(420+40, 345);
    glVertex2f(420+40, 230);
    glEnd();

// Windows

    glColor3f(0.3, 0.4, 0.45); // Windows (Darker windows)
    glBegin(GL_POLYGON);
    glVertex2f(324+40, 240);
    glVertex2f(324+40, 341);
    glVertex2f(329+40, 346);
    glVertex2f(411+40, 346);
    glVertex2f(416+40, 341);
    glVertex2f(416+40, 240);
    glEnd();

    glColor3f(0.5, 0.5, 0.5); // window Lines horizontal (Darker)
    glBegin(GL_LINES);
    glVertex2f(364, 260);
    glVertex2f(456, 260);
    glVertex2f(364, 280);
    glVertex2f(456, 280);
    glVertex2f(364, 300);
    glVertex2f(456, 300);
    glVertex2f(364, 320);
    glVertex2f(456, 320);
    glVertex2f(364, 340);
    glVertex2f(456, 340);
    glEnd();

    glColor3f(0.5, 0.5, 0.5); // window Lines vertical (Darker)
    glBegin(GL_LINES);
    glVertex2f(369, 240);
    glVertex2f(369, 346);
    glVertex2f(389, 240);
    glVertex2f(389, 346);
    glVertex2f(409, 240);
    glVertex2f(409, 346);
    glVertex2f(429, 240);
    glVertex2f(429, 346);
    glVertex2f(449, 240);
    glVertex2f(449, 346);
    glEnd();

// University Entrance

    glColor3f(0.5, 0.6, 0.55); // Door (Darker)
    glBegin(GL_POLYGON);
    glVertex2f(390, 230);
    glVertex2f(390, 265);
    glVertex2f(395, 270);
    glVertex2f(425, 270);
    glVertex2f(430, 265);
    glVertex2f(430, 230);
    glEnd();

    glColor3f(0, 0, 0); // Door (Black)
    glBegin(GL_LINES);
    glVertex2f(410, 230);
    glVertex2f(410, 270);
    glEnd();

    // restaurant

    glColor3f(0.1, 0.3, 0.6); // Darker Bookstore main color
    glBegin(GL_QUADS);
    glVertex2i(570, 190);
    glVertex2i(570, 280);
    glVertex2i(680, 280);
    glVertex2i(680, 190);
    glEnd();

    glColor3f(0.05, 0.2, 0.45); // Darker Bookstore side color
    glBegin(GL_QUADS);
    glVertex2i(570, 190);
    glVertex2i(570, 280);
    glVertex2i(560, 285);
    glVertex2i(560, 198);
    glEnd();

    glColor3f(0.1, 0.2, 0.45); // Darker Bookstore roof color
    glBegin(GL_TRIANGLES);
    glVertex2i(565, 280);
    glVertex2i(690, 280);
    glVertex2i(615, 320);
    glEnd();

    glColor3f(0.1, 0.2, 0.45); // Darker Bookstore roof color (other triangle)
    glBegin(GL_TRIANGLES);
    glVertex2i(565, 280);
    glVertex2i(615, 320);
    glVertex2i(550, 290);
    glEnd();

    //chimney
    glColor3f(0.1, 0.2, 0.45);
    glBegin(GL_QUADS);
    glVertex2i(635, 300);
    glVertex2i(645, 300);
    glVertex2i(645, 345);
    glVertex2i(635, 340);
    glEnd();

// Door
    glColor3f(0.4, 0.5, 0.6); // Darker door color
    glBegin(GL_QUADS);
    glVertex2i(590, 190);
    glVertex2i(590, 250);
    glVertex2i(660, 250);
    glVertex2i(660, 190);
    glEnd();

    glColor3f(0, 0, 0); // Door line (unchanged)
    glBegin(GL_LINES);
    glVertex2i(625, 190);
    glVertex2i(625, 250);
    glEnd();

// Pharmacy

    glColor3f(0.15, 0.4, 0.35); // Darker Pharmacy main color
    glBegin(GL_QUADS);
    glVertex2i(713, 190);
    glVertex2i(713, 280);
    glVertex2i(823, 280);
    glVertex2i(823, 190);
    glEnd();

    glColor3f(0.1, 0.35, 0.32); // Darker Pharmacy side color
    glBegin(GL_QUADS);
    glVertex2i(713, 190);
    glVertex2i(713, 280);
    glVertex2i(703, 285);
    glVertex2i(703, 198);
    glEnd();

    glColor3f(0.1, 0.25, 0.3); // Darker Pharmacy upper area color
    glBegin(GL_QUADS);
    glVertex2i(708, 270);
    glVertex2i(710, 310);
    glVertex2i(815, 310);
    glVertex2i(830, 270);
    glEnd();

    glColor3f(0.1, 0.25, 0.3); // Darker Pharmacy upper area color (triangle)
    glBegin(GL_TRIANGLES);
    glVertex2i(708, 270);
    glVertex2i(710, 310);
    glVertex2i(695, 280);
    glEnd();

// Door
    glColor3f(0.1, 0.25, 0.3); // Darker door color
    glBegin(GL_QUADS);
    glVertex2i(738, 190);
    glVertex2i(738, 250);
    glVertex2i(800, 250);
    glVertex2i(800, 190);
    glEnd();

    glColor3f(0.8, 0.7, 0.3); // Darker door (small section)
    glBegin(GL_QUADS);
    glVertex2i(767, 195);
    glVertex2i(767, 250);
    glVertex2i(800, 250);
    glVertex2i(800, 190);
    glEnd();

    glColor3f(0.8, 0.7, 0.3); // Darker door (small section)
    glBegin(GL_QUADS);
    glVertex2i(738, 190);
    glVertex2i(738, 250);
    glVertex2i(765, 250);
    glVertex2i(765, 200);
    glEnd();


    // MegaMall
    glColor3f(0.4, 0.4, 0.35); // Darker main MegaMall color
    glBegin(GL_QUADS);
    glVertex2i(860, 210);
    glVertex2i(860, 400);
    glVertex2i(1010, 440);
    glVertex2i(1010, 190);
    glEnd();

    glColor3f(0.35, 0.35, 0.4); // Darker secondary MegaMall color
    glBegin(GL_QUADS);
    glVertex2i(1010, 190);
    glVertex2i(1010, 440);
    glVertex2i(1160, 400);
    glVertex2i(1160, 210);
    glEnd();

// Entrances (with light inside)
    glColor3f(1.0, 0.8, 0.2); // Light yellow color for the entrance
    glBegin(GL_QUADS);
    glVertex2i(910, 203);
    glVertex2i(910, 240);
    glVertex2i(960, 236);
    glVertex2i(960, 196);
    glEnd();

    glColor3f(1.0, 0.8, 0.2); // Light yellow color for the other entrance
    glBegin(GL_QUADS);
    glVertex2i(1060, 196);
    glVertex2i(1060, 236);
    glVertex2i(1110, 241);
    glVertex2i(1110, 203);
    glEnd();

    // Windows (with light inside)
    glColor3f(1.0, 0.8, 0.2); // Light yellow color for left window
    glBegin(GL_QUADS);
    glVertex2i(865, 250);
    glVertex2i(865, 395);
    glVertex2i(1005, 430);
    glVertex2i(1005, 240);
    glEnd();

    glColor3f(1.0, 0.8, 0.2); // Light yellow color for right window
    glBegin(GL_QUADS);
    glVertex2i(1015, 240);
    glVertex2i(1015, 430);
    glVertex2i(1155, 395);
    glVertex2i(1155, 250);
    glEnd();

    // Window Lines (no change, keep them white for contrast)
    glColor3f(1, 1, 1); // Window lines in white
    glBegin(GL_LINES);
    glVertex2i(935, 244);
    glVertex2i(935, 412);
    glVertex2i(865, 322);
    glVertex2i(1005, 335);
    glEnd();

    glColor3f(1, 1, 1); // Window lines in white
    glBegin(GL_LINES);
    glVertex2i(1085, 244);
    glVertex2i(1085, 412);
    glVertex2i(1155, 322);
    glVertex2i(1015, 335);
    glEnd();

}

void Trees()
{
    glColor3ub(78, 148, 45);
    glBegin(GL_TRIANGLES);
    glVertex2i(520, 190);
    glVertex2i(590, 195);
    glVertex2i(550, 230);
    glEnd();

    glColor3ub(39, 118, 37);
    glBegin(GL_TRIANGLES);
    glVertex2i(525, 212);
    glVertex2i(582, 208);
    glVertex2i(555, 237);
    glEnd();

    glColor3ub(78, 148, 45);
    glBegin(GL_TRIANGLES);
    glVertex2i(530, 230);
    glVertex2i(575, 230);
    glVertex2i(555, 255);
    glEnd();

    glColor3ub(119, 68, 34);
    glBegin(GL_QUADS);
    glVertex2i(550, 175);
    glVertex2i(560, 175);
    glVertex2i(560, 193);
    glVertex2i(550, 193);
    glEnd();

    //Tree 2
    glColor3ub(78, 148, 45);
    glBegin(GL_TRIANGLES);
    glVertex2i(670, 190);
    glVertex2i(740, 195);
    glVertex2i(700, 230);
    glEnd();

    glColor3ub(39, 118, 37);
    glBegin(GL_TRIANGLES);
    glVertex2i(675, 212);
    glVertex2i(732, 208);
    glVertex2i(705, 237);
    glEnd();

    glColor3ub(78, 148, 45);
    glBegin(GL_TRIANGLES);
    glVertex2i(680, 230);
    glVertex2i(725, 230);
    glVertex2i(705, 255);
    glEnd();

    glColor3ub(119, 68, 34);
    glBegin(GL_QUADS);
    glVertex2i(700, 175);
    glVertex2i(710, 175);
    glVertex2i(710, 193);
    glVertex2i(700, 193);
    glEnd();

    //Tree 3
    glColor3ub(78, 148, 45);
    glBegin(GL_TRIANGLES);
    glVertex2i(820, 190);
    glVertex2i(890, 195);
    glVertex2i(850, 230);
    glEnd();

    glColor3ub(39, 118, 37);
    glBegin(GL_TRIANGLES);
    glVertex2i(825, 212);
    glVertex2i(882, 208);
    glVertex2i(855, 237);
    glEnd();

    glColor3ub(78, 148, 45);
    glBegin(GL_TRIANGLES);
    glVertex2i(830, 230);
    glVertex2i(875, 230);
    glVertex2i(855, 255);
    glEnd();

    glColor3ub(119, 68, 34);
    glBegin(GL_QUADS);
    glVertex2i(850, 175);
    glVertex2i(860, 175);
    glVertex2i(860, 193);
    glVertex2i(850, 193);
    glEnd();

    //Tree 4
    glColor3ub(78, 148, 45);
    glBegin(GL_TRIANGLES);
    glVertex2i(170, 190);
    glVertex2i(240, 195);
    glVertex2i(200, 230);
    glEnd();

    glColor3ub(39, 118, 37);
    glBegin(GL_TRIANGLES);
    glVertex2i(175, 212);
    glVertex2i(232, 208);
    glVertex2i(205, 237);
    glEnd();

    glColor3ub(78, 148, 45);
    glBegin(GL_TRIANGLES);
    glVertex2i(180, 230);
    glVertex2i(225, 230);
    glVertex2i(205, 255);
    glEnd();

    glColor3ub(119, 68, 34);
    glBegin(GL_QUADS);
    glVertex2i(200, 175);
    glVertex2i(210, 175);
    glVertex2i(210, 193);
    glVertex2i(200, 193);
    glEnd();

    //Tree 5
    glColor3ub(78, 148, 45);
    glBegin(GL_TRIANGLES);
    glVertex2i(1120, 190);
    glVertex2i(1190, 195);
    glVertex2i(1150, 230);
    glEnd();

    glColor3ub(39, 118, 37);
    glBegin(GL_TRIANGLES);
    glVertex2i(1125, 212);
    glVertex2i(1182, 208);
    glVertex2i(1155, 237);
    glEnd();

    glColor3ub(78, 148, 45);
    glBegin(GL_TRIANGLES);
    glVertex2i(1130, 230);
    glVertex2i(1175, 230);
    glVertex2i(1155, 255);
    glEnd();

    glColor3ub(119, 68, 34);
    glBegin(GL_QUADS);
    glVertex2i(1150, 175);
    glVertex2i(1160, 175);
    glVertex2i(1160, 193);
    glVertex2i(1150, 193);
    glEnd();

}

void Trees_N()
{
    // Tree 1 - Darker shades
    glColor3ub(55, 108, 34); // Darker green for the canopy
    glBegin(GL_TRIANGLES);
    glVertex2i(520, 190);
    glVertex2i(590, 195);
    glVertex2i(550, 230);
    glEnd();

    glColor3ub(28, 83, 27); // Even darker green for the second canopy layer
    glBegin(GL_TRIANGLES);
    glVertex2i(525, 212);
    glVertex2i(582, 208);
    glVertex2i(555, 237);
    glEnd();

    glColor3ub(55, 108, 34); // Darker green for the third canopy layer
    glBegin(GL_TRIANGLES);
    glVertex2i(530, 230);
    glVertex2i(575, 230);
    glVertex2i(555, 255);
    glEnd();

    glColor3ub(87, 47, 23); // Darker brown for the trunk
    glBegin(GL_QUADS);
    glVertex2i(550, 175);
    glVertex2i(560, 175);
    glVertex2i(560, 193);
    glVertex2i(550, 193);
    glEnd();

// Tree 2 - Darker shades
    glColor3ub(55, 108, 34); // Darker green for the canopy
    glBegin(GL_TRIANGLES);
    glVertex2i(670, 190);
    glVertex2i(740, 195);
    glVertex2i(700, 230);
    glEnd();

    glColor3ub(28, 83, 27); // Darker green for the second canopy layer
    glBegin(GL_TRIANGLES);
    glVertex2i(675, 212);
    glVertex2i(732, 208);
    glVertex2i(705, 237);
    glEnd();

    glColor3ub(55, 108, 34); // Darker green for the third canopy layer
    glBegin(GL_TRIANGLES);
    glVertex2i(680, 230);
    glVertex2i(725, 230);
    glVertex2i(705, 255);
    glEnd();

    glColor3ub(87, 47, 23); // Darker brown for the trunk
    glBegin(GL_QUADS);
    glVertex2i(700, 175);
    glVertex2i(710, 175);
    glVertex2i(710, 193);
    glVertex2i(700, 193);
    glEnd();

// Tree 3 - Darker shades
    glColor3ub(55, 108, 34); // Darker green for the canopy
    glBegin(GL_TRIANGLES);
    glVertex2i(820, 190);
    glVertex2i(890, 195);
    glVertex2i(850, 230);
    glEnd();

    glColor3ub(28, 83, 27); // Darker green for the second canopy layer
    glBegin(GL_TRIANGLES);
    glVertex2i(825, 212);
    glVertex2i(882, 208);
    glVertex2i(855, 237);
    glEnd();

    glColor3ub(55, 108, 34); // Darker green for the third canopy layer
    glBegin(GL_TRIANGLES);
    glVertex2i(830, 230);
    glVertex2i(875, 230);
    glVertex2i(855, 255);
    glEnd();

    glColor3ub(87, 47, 23); // Darker brown for the trunk
    glBegin(GL_QUADS);
    glVertex2i(850, 175);
    glVertex2i(860, 175);
    glVertex2i(860, 193);
    glVertex2i(850, 193);
    glEnd();

// Tree 4 - Darker shades
    glColor3ub(55, 108, 34); // Darker green for the canopy
    glBegin(GL_TRIANGLES);
    glVertex2i(170, 190);
    glVertex2i(240, 195);
    glVertex2i(200, 230);
    glEnd();

    glColor3ub(28, 83, 27); // Darker green for the second canopy layer
    glBegin(GL_TRIANGLES);
    glVertex2i(175, 212);
    glVertex2i(232, 208);
    glVertex2i(205, 237);
    glEnd();

    glColor3ub(55, 108, 34); // Darker green for the third canopy layer
    glBegin(GL_TRIANGLES);
    glVertex2i(180, 230);
    glVertex2i(225, 230);
    glVertex2i(205, 255);
    glEnd();

    glColor3ub(87, 47, 23); // Darker brown for the trunk
    glBegin(GL_QUADS);
    glVertex2i(200, 175);
    glVertex2i(210, 175);
    glVertex2i(210, 193);
    glVertex2i(200, 193);
    glEnd();

// Tree 5 - Darker shades
    glColor3ub(55, 108, 34); // Darker green for the canopy
    glBegin(GL_TRIANGLES);
    glVertex2i(1120, 190);
    glVertex2i(1190, 195);
    glVertex2i(1150, 230);
    glEnd();

    glColor3ub(28, 83, 27); // Darker green for the second canopy layer
    glBegin(GL_TRIANGLES);
    glVertex2i(1125, 212);
    glVertex2i(1182, 208);
    glVertex2i(1155, 237);
    glEnd();

    glColor3ub(55, 108, 34); // Darker green for the third canopy layer
    glBegin(GL_TRIANGLES);
    glVertex2i(1130, 230);
    glVertex2i(1175, 230);
    glVertex2i(1155, 255);
    glEnd();

    glColor3ub(87, 47, 23); // Darker brown for the trunk
    glBegin(GL_QUADS);
    glVertex2i(1150, 175);
    glVertex2i(1160, 175);
    glVertex2i(1160, 193);
    glVertex2i(1150, 193);
    glEnd();

}
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
void Building_Shadows()
{
    //bg
    glColor3f(.392, .412, .519);
    glBegin(GL_QUADS);
    glVertex2f(590-10, 200);
    glVertex2f(660-10, 200);
    glVertex2f(660-10, 440-10);
    glVertex2f(590-10, 440-10);
    glEnd();
    //fw
    glColor3f(.808, .816, .855);
    glBegin(GL_QUADS);
    glVertex2f(590, 200);
    glVertex2f(660, 200);
    glVertex2f(660, 440);
    glVertex2f(590, 440);
    glEnd();

    //bg
    glColor3f(.392, .412, .519);
    glBegin(GL_QUADS);
    glVertex2f(690-10, 200);
    glVertex2f(760-10, 200);
    glVertex2f(760-10, 420-10);
    glVertex2f(690-10, 440-10);
    glEnd();

    //fw
    glColor3f(.808, .816, .855);
    glBegin(GL_QUADS);
    glVertex2f(690, 200);
    glVertex2f(760, 200);
    glVertex2f(760, 420);
    glVertex2f(690, 440);
    glEnd();

    //bg
    glColor3f(.392, .412, .519);
    glBegin(GL_QUADS);
    glVertex2f(840-10, 250);
    glVertex2f(910-10, 250);
    glVertex2f(910-10, 470-10);
    glVertex2f(840-10, 470-10);
    glEnd();


    //fw
    glColor3f(.808, .816, .855);
    glBegin(GL_QUADS);
    glVertex2f(840, 250);
    glVertex2f(910, 250);
    glVertex2f(910, 470);
    glVertex2f(840, 470);
    glEnd();

    //bg
    glColor3f(.392, .412, .519);
    glBegin(GL_QUADS);
    glVertex2f(240-10, 250);
    glVertex2f(310-10, 250);
    glVertex2f(310-10, 470-10);
    glVertex2f(240-10, 460-10);
    glEnd();

    //fw
    glColor3f(.808, .816, .855);
    glBegin(GL_QUADS);
    glVertex2f(240, 250);
    glVertex2f(310, 250);
    glVertex2f(310, 470);
    glVertex2f(240, 460);
    glEnd();

    //bg
    glColor3f(.392, .412, .519);
    glBegin(GL_QUADS);
    glVertex2f(340-10, 250);
    glVertex2f(410-10, 250);
    glVertex2f(410-10, 470-10);
    glVertex2f(340-10, 470-10);
    glEnd();

    //fw
    glColor3f(.808, .816, .855);
    glBegin(GL_QUADS);
    glVertex2f(340, 250);
    glVertex2f(410, 250);
    glVertex2f(410, 470);
    glVertex2f(340, 470);
    glEnd();
}

void Building_Shadows_N()
{
    // Background (Darker Shade)
    glColor3f(.2, .2, .3);  // Darker shade of blue
    glBegin(GL_QUADS);
    glVertex2f(590-10, 200);
    glVertex2f(660-10, 200);
    glVertex2f(660-10, 440-10);
    glVertex2f(590-10, 440-10);
    glEnd();

// Foreground (Darker Shade)
    glColor3f(.4, .4, .4);  // Darker grayish color
    glBegin(GL_QUADS);
    glVertex2f(590, 200);
    glVertex2f(660, 200);
    glVertex2f(660, 440);
    glVertex2f(590, 440);
    glEnd();

// Background (Darker Shade)
    glColor3f(.2, .2, .3);  // Darker shade of blue
    glBegin(GL_QUADS);
    glVertex2f(690-10, 200);
    glVertex2f(760-10, 200);
    glVertex2f(760-10, 420-10);
    glVertex2f(690-10, 440-10);
    glEnd();

// Foreground (Darker Shade)
    glColor3f(.4, .4, .4);  // Darker grayish color
    glBegin(GL_QUADS);
    glVertex2f(690, 200);
    glVertex2f(760, 200);
    glVertex2f(760, 420);
    glVertex2f(690, 440);
    glEnd();

// Background (Darker Shade)
    glColor3f(.2, .2, .3);  // Darker shade of blue
    glBegin(GL_QUADS);
    glVertex2f(840-10, 250);
    glVertex2f(910-10, 250);
    glVertex2f(910-10, 470-10);
    glVertex2f(840-10, 470-10);
    glEnd();

// Foreground (Darker Shade)
    glColor3f(.4, .4, .4);  // Darker grayish color
    glBegin(GL_QUADS);
    glVertex2f(840, 250);
    glVertex2f(910, 250);
    glVertex2f(910, 470);
    glVertex2f(840, 470);
    glEnd();

// Background (Darker Shade)
    glColor3f(.2, .2, .3);  // Darker shade of blue
    glBegin(GL_QUADS);
    glVertex2f(240-10, 250);
    glVertex2f(310-10, 250);
    glVertex2f(310-10, 470-10);
    glVertex2f(240-10, 460-10);
    glEnd();

// Foreground (Darker Shade)
    glColor3f(.4, .4, .4);  // Darker grayish color
    glBegin(GL_QUADS);
    glVertex2f(240, 250);
    glVertex2f(310, 250);
    glVertex2f(310, 470);
    glVertex2f(240, 460);
    glEnd();

// Background (Darker Shade)
    glColor3f(.2, .2, .3);  // Darker shade of blue
    glBegin(GL_QUADS);
    glVertex2f(340-10, 250);
    glVertex2f(410-10, 250);
    glVertex2f(410-10, 470-10);
    glVertex2f(340-10, 470-10);
    glEnd();

// Foreground (Darker Shade)
    glColor3f(.4, .4, .4);  // Darker grayish color
    glBegin(GL_QUADS);
    glVertex2f(340, 250);
    glVertex2f(410, 250);
    glVertex2f(410, 470);
    glVertex2f(340, 470);
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

