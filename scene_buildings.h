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