float building_offset = 9.0f;
float building_middle_offset = 10.0f;

float building_window_offset = building_offset + .1f;
float building_middle_window_offset = building_middle_offset + .1f;


float building_shadow_offset = building_offset - 1.0f;


void Hospital() {
    glColor3f(.941, .941, .941);//Main building
    glBegin(GL_POLYGON);
    glVertex3f( 80, 185, building_offset);
    glVertex3f( 90, 180, building_offset);
    glVertex3f(170, 180, building_offset);
    glVertex3f(180, 185, building_offset);
    glVertex3f(180, 400, building_offset);
    glVertex3f(170, 410, building_offset);
    glVertex3f( 90, 410, building_offset);
    glVertex3f( 80, 400, building_offset);
    glEnd();

    glColor3f(.901, .901, .901);//left most Building
    glBegin(GL_QUADS);
    glVertex3f(-20, 185, building_offset);
    glVertex3f( 80, 185, building_offset);
    glVertex3f( 80, 355, building_offset);
    glVertex3f(-20, 355, building_offset);
    glEnd();

    glColor3f(.901, .901, .901);//Right most Building
    glBegin(GL_POLYGON);
    glVertex3f(180, 185, building_offset);
    glVertex3f(270, 185, building_offset);
    glVertex3f(270, 345, building_offset);
    glVertex3f(260, 355, building_offset);
    glVertex3f(180, 355, building_offset);
    glEnd();

    glColor3f(.705, .705, .705);//Shadow of side building
    glBegin(GL_QUADS);
    glVertex3f(270, 185, building_shadow_offset);
    glVertex3f(275, 185, building_shadow_offset);
    glVertex3f(275, 337, building_shadow_offset);
    glVertex3f(270, 345, building_shadow_offset);
    glEnd();

    glColor3f(.909, 0.290, 0.188);//signboard
    glBegin(GL_QUADS);
    glVertex3f(110, 380, building_window_offset + 0.1f);
    glVertex3f(150, 380, building_window_offset + 0.1f);
    glVertex3f(150, 430, building_window_offset + 0.1f);
    glVertex3f(110, 430, building_window_offset + 0.1f);
    glEnd();

    glColor3f(1, 1, 1);//Plus sign
    glBegin(GL_QUADS);
    glVertex3f(127, 385, building_window_offset + 0.2f);
    glVertex3f(133, 385, building_window_offset + 0.2f);
    glVertex3f(133, 425, building_window_offset + 0.2f);
    glVertex3f(127, 425, building_window_offset + 0.2f);
    glEnd();

    glColor3f(1, 1, 1);//Plus sign
    glBegin(GL_QUADS);
    glVertex3f(115, 402, building_window_offset + 0.2f);
    glVertex3f(145, 402, building_window_offset + 0.2f);
    glVertex3f(145, 410, building_window_offset + 0.2f);
    glVertex3f(115, 410, building_window_offset + 0.2f);
    glEnd();

    glColor3f(.207, .219, .756);//Entrance
    glBegin(GL_QUADS);
    glVertex3f(110, 180, building_window_offset + 0.1f);
    glVertex3f(150, 180, building_window_offset + 0.1f);
    glVertex3f(150, 220, building_window_offset + 0.1f);
    glVertex3f(110, 220, building_window_offset + 0.1f);
    glEnd();

    glColor3f(1, 1, 1);//Entrance
    glBegin(GL_LINES);
    glVertex3f(110, 212, building_window_offset + 0.1f);
    glVertex3f(150, 212, building_window_offset + 0.1f);
    glVertex3f(130, 212, building_window_offset + 0.1f);
    glVertex3f(130, 180, building_window_offset + 0.1f);
    glEnd();

    //Hospital Windows
    for (int i = 0; i < 6; i++)
    {
        glColor3f(.207, .219, .756);
        glBegin(GL_QUADS);
        glVertex3f(90, 245 + i * 25, building_window_offset);
        glVertex3f(90, 230 + i * 25, building_window_offset);
        glVertex3f(170, 230 + i * 25, building_window_offset);
        glVertex3f(170, 245 + i * 25, building_window_offset);
        glEnd();
    }

    //second building windows
    for (int i = 0; i < 6; i++)
    {
        glColor3f(.207, .219, .756);
        glBegin(GL_QUADS);
        glVertex3f(-20, 215 + i * 25, building_window_offset);
        glVertex3f(-20, 200 + i * 25, building_window_offset);
        glVertex3f(70, 200 + i * 25, building_window_offset);
        glVertex3f(70, 215 + i * 25, building_window_offset);
        glEnd();
    }

    //third building windows
    for (int i = 0; i < 6; i++)
    {
        glColor3f(.207, .219, .756);
        glBegin(GL_QUADS);
        glVertex3f(190, 215 + i * 25, building_window_offset);
        glVertex3f(190, 200 + i * 25, building_window_offset);
        glVertex3f(260, 200 + i * 25, building_window_offset);
        glVertex3f(260, 215 + i * 25, building_window_offset);
        glEnd();
    }
}

void Medical_University() {
    // Left building
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(370+50, 230, building_offset);
    glVertex3f(370+50, 415, building_offset);
    glVertex3f(375+50, 420, building_offset);
    glVertex3f(465+50, 420, building_offset);
    glVertex3f(470+50, 415, building_offset);
    glVertex3f(470+50, 230, building_offset);
    glEnd();

    //Left building windows

    glColor3f(0.656,0.796,0.839);
    glBegin(GL_POLYGON);
    glVertex3f(374+50, 240, building_window_offset);
    glVertex3f(374+50, 411, building_window_offset);
    glVertex3f(379+50, 416, building_window_offset);
    glVertex3f(461+50, 416, building_window_offset);
    glVertex3f(466+50, 411, building_window_offset);
    glVertex3f(466+50, 240, building_window_offset);
    glEnd();
    
    // Right building

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(300, 230, building_offset);
    glVertex3f(300, 415, building_offset);
    glVertex3f(305, 420, building_offset);
    glVertex3f(395, 420, building_offset);
    glVertex3f(400, 415, building_offset);
    glVertex3f(400, 230, building_offset);
    glEnd();

    // Right building windows

    glColor3f(0.656,0.796,0.839);
    glBegin(GL_POLYGON);
    glVertex3f(304, 240, building_window_offset);
    glVertex3f(304, 411, building_window_offset);
    glVertex3f(309, 416, building_window_offset);
    glVertex3f(391, 416, building_window_offset);
    glVertex3f(396, 411, building_window_offset);
    glVertex3f(396, 240, building_window_offset);
    glEnd();
    
    //window Lines Horizontal

    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex3f(304, 260, building_window_offset + 0.1f);
    glVertex3f(516, 260, building_window_offset + 0.1f);
    glVertex3f(304, 280, building_window_offset + 0.1f);
    glVertex3f(516, 280, building_window_offset + 0.1f);
    glVertex3f(304, 300, building_window_offset + 0.1f);
    glVertex3f(516, 300, building_window_offset + 0.1f);
    glVertex3f(304, 320, building_window_offset + 0.1f);
    glVertex3f(516, 320, building_window_offset + 0.1f);
    glVertex3f(304, 340, building_window_offset + 0.1f);
    glVertex3f(516, 340, building_window_offset + 0.1f);
    glVertex3f(304, 360, building_window_offset + 0.1f);
    glVertex3f(396, 360, building_window_offset + 0.1f);
    glVertex3f(304, 380, building_window_offset + 0.1f);
    glVertex3f(396, 380, building_window_offset + 0.1f);
    glVertex3f(304, 400, building_window_offset + 0.1f);
    glVertex3f(396, 400, building_window_offset + 0.1f);
    glVertex3f(424, 400, building_window_offset + 0.1f);
    glVertex3f(516, 400, building_window_offset + 0.1f);
    glVertex3f(424, 380, building_window_offset + 0.1f);
    glVertex3f(516, 380, building_window_offset + 0.1f);
    glVertex3f(424, 360, building_window_offset + 0.1f);
    glVertex3f(516, 360, building_window_offset + 0.1f);
    glEnd();
    
    //window Lines vertical

    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex3f(309, 240, building_window_offset + 0.1f);
    glVertex3f(309, 416, building_window_offset + 0.1f);
    glVertex3f(329, 240, building_window_offset + 0.1f);
    glVertex3f(329, 416, building_window_offset + 0.1f);
    glVertex3f(349, 240, building_window_offset + 0.1f);
    glVertex3f(349, 416, building_window_offset + 0.1f);
    glVertex3f(369, 240, building_window_offset + 0.1f);
    glVertex3f(369, 416, building_window_offset + 0.1f);
    glVertex3f(389, 240, building_window_offset + 0.1f);
    glVertex3f(389, 416, building_window_offset + 0.1f);
    glVertex3f(429, 240, building_window_offset + 0.1f);//Building on the right
    glVertex3f(429, 416, building_window_offset + 0.1f);
    glVertex3f(449, 240, building_window_offset + 0.1f);
    glVertex3f(449, 416, building_window_offset + 0.1f);
    glVertex3f(469, 240, building_window_offset + 0.1f);
    glVertex3f(469, 416, building_window_offset + 0.1f);
    glVertex3f(489, 240, building_window_offset + 0.1f);
    glVertex3f(489, 416, building_window_offset + 0.1f);
    glVertex3f(509, 240, building_window_offset + 0.1f);
    glVertex3f(509, 416, building_window_offset + 0.1f);
    glEnd();

    // Center building

    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(320+40, 230, building_middle_offset);
    glVertex3f(320+40, 345, building_middle_offset);
    glVertex3f(325+40, 350, building_middle_offset);
    glVertex3f(415+40, 350, building_middle_offset);
    glVertex3f(420+40, 345, building_middle_offset);
    glVertex3f(420+40, 230, building_middle_offset);
    glEnd();

    // Center building Windows

    glColor3f(0.656,0.796,0.839);
    glBegin(GL_POLYGON);
    glVertex3f(324+40, 240, building_middle_window_offset);
    glVertex3f(324+40, 341, building_middle_window_offset);
    glVertex3f(329+40, 346, building_middle_window_offset);
    glVertex3f(411+40, 346, building_middle_window_offset);
    glVertex3f(416+40, 341, building_middle_window_offset);
    glVertex3f(416+40, 240, building_middle_window_offset);
    glEnd();

    glColor3f(1,1,1);//window Lines horizontal
    glBegin(GL_LINES);
    glVertex3f(364, 260, building_middle_window_offset + 0.1f);
    glVertex3f(456, 260, building_middle_window_offset + 0.1f);
    glVertex3f(364, 280, building_middle_window_offset + 0.1f);
    glVertex3f(456, 280, building_middle_window_offset + 0.1f);
    glVertex3f(364, 300, building_middle_window_offset + 0.1f);
    glVertex3f(456, 300, building_middle_window_offset + 0.1f);
    glVertex3f(364, 320, building_middle_window_offset + 0.1f);
    glVertex3f(456, 320, building_middle_window_offset + 0.1f);
    glVertex3f(364, 340, building_middle_window_offset + 0.1f);
    glVertex3f(456, 340, building_middle_window_offset + 0.1f);
    glEnd();

    glColor3f(1,1,1);//window Lines vertical
    glBegin(GL_LINES);
    glVertex3f(369, 240, building_middle_window_offset + 0.1f);
    glVertex3f(369, 346, building_middle_window_offset + 0.1f);
    glVertex3f(389, 240, building_middle_window_offset + 0.1f);
    glVertex3f(389, 346, building_middle_window_offset + 0.1f);
    glVertex3f(409, 240, building_middle_window_offset + 0.1f);
    glVertex3f(409, 346, building_middle_window_offset + 0.1f);
    glVertex3f(429, 240, building_middle_window_offset + 0.1f);
    glVertex3f(429, 346, building_middle_window_offset + 0.1f);
    glVertex3f(449, 240, building_middle_window_offset + 0.1f);
    glVertex3f(449, 346, building_middle_window_offset + 0.1f);
    glEnd();

    //University Entrance

    glColor3f(0.773,0.800,0.769);//DOor
    glBegin(GL_POLYGON);
    glVertex3f(390, 230, building_middle_offset + 0.5f);
    glVertex3f(390, 265, building_middle_offset + 0.5f);
    glVertex3f(395, 270, building_middle_offset + 0.5f);
    glVertex3f(425, 270, building_middle_offset + 0.5f);
    glVertex3f(430, 265, building_middle_offset + 0.5f);
    glVertex3f(430, 230, building_middle_offset + 0.5f);

    glEnd();

    glColor3f(0,0,0);//DOor
    glBegin(GL_LINES);
    glVertex3f(410, 230, building_middle_offset + 0.6f);
    glVertex3f(410, 270, building_middle_offset + 0.6f);
    glEnd();
}

void Buildings()
{
    Hospital();

    Medical_University();
    

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
    glVertex3f(590-10, 200, 1.0f);
    glVertex3f(660-10, 200, 1.0f);
    glVertex3f(660-10, 440-10, 1.0f);
    glVertex3f(590-10, 440-10, 1.0f);
    glEnd();
    //fw
    glColor3f(.808, .816, .855);
    glBegin(GL_QUADS);
    glVertex3f(590, 200, 1.0f);
    glVertex3f(660, 200, 1.0f);
    glVertex3f(660, 440, 1.0f);
    glVertex3f(590, 440, 1.0f);
    glEnd();

    //bg
    glColor3f(.392, .412, .519);
    glBegin(GL_QUADS);
    glVertex3f(690-10, 200, 1.0f);
    glVertex3f(760-10, 200, 1.0f);
    glVertex3f(760-10, 420-10, 1.0f);
    glVertex3f(690-10, 440-10, 1.0f);
    glEnd();

    //fw
    glColor3f(.808, .816, .855);
    glBegin(GL_QUADS);
    glVertex3f(690, 200, 1.0f);
    glVertex3f(760, 200, 1.0f);
    glVertex3f(760, 420, 1.0f);
    glVertex3f(690, 440, 1.0f);
    glEnd();

    //bg
    glColor3f(.392, .412, .519);
    glBegin(GL_QUADS);
    glVertex3f(840-10, 250, 1.0f);
    glVertex3f(910-10, 250, 1.0f);
    glVertex3f(910-10, 470-10, 1.0f);
    glVertex3f(840-10, 470-10, 1.0f);
    glEnd();


    //fw
    glColor3f(.808, .816, .855);
    glBegin(GL_QUADS);
    glVertex3f(840, 250, 1.0f);
    glVertex3f(910, 250, 1.0f);
    glVertex3f(910, 470, 1.0f);
    glVertex3f(840, 470, 1.0f);
    glEnd();

    //bg
    glColor3f(.392, .412, .519);
    glBegin(GL_QUADS);
    glVertex3f(240-10, 250, 1.0f);
    glVertex3f(310-10, 250, 1.0f);
    glVertex3f(310-10, 470-10, 1.0f);
    glVertex3f(240-10, 460-10, 1.0f);
    glEnd();

    //fw
    glColor3f(.808, .816, .855);
    glBegin(GL_QUADS);
    glVertex3f(240, 250, 1.0f);
    glVertex3f(310, 250, 1.0f);
    glVertex3f(310, 470, 1.0f);
    glVertex3f(240, 460, 1.0f);
    glEnd();

    //bg
    glColor3f(.392, .412, .519);
    glBegin(GL_QUADS);
    glVertex3f(340-10, 250, 1.0f);
    glVertex3f(410-10, 250, 1.0f);
    glVertex3f(410-10, 470-10, 1.0f);
    glVertex3f(340-10, 470-10, 1.0f);
    glEnd();

    //fw
    glColor3f(.808, .816, .855);
    glBegin(GL_QUADS);
    glVertex3f(340, 250, 1.0f);
    glVertex3f(410, 250, 1.0f);
    glVertex3f(410, 470, 1.0f);
    glVertex3f(340, 470, 1.0f);
    glEnd();
}

void Building_Shadows_N()
{
    // Background (Darker Shade)
    glColor3f(.2, .2, .3);  // Darker shade of blue
    glBegin(GL_QUADS);
    glVertex3f(590-10, 200, 1.0f);
    glVertex3f(660-10, 200, 1.0f);
    glVertex3f(660-10, 440-10, 1.0f);
    glVertex3f(590-10, 440-10, 1.0f);
    glEnd();

// Foreground (Darker Shade)
    glColor3f(.4, .4, .4);  // Darker grayish color
    glBegin(GL_QUADS);
    glVertex3f(590, 200, 1.0f);
    glVertex3f(660, 200, 1.0f);
    glVertex3f(660, 440, 1.0f);
    glVertex3f(590, 440, 1.0f);
    glEnd();

// Background (Darker Shade)
    glColor3f(.2, .2, .3);  // Darker shade of blue
    glBegin(GL_QUADS);
    glVertex3f(690-10, 200, 1.0f);
    glVertex3f(760-10, 200, 1.0f);
    glVertex3f(760-10, 420-10, 1.0f);
    glVertex3f(690-10, 440-10, 1.0f);
    glEnd();

// Foreground (Darker Shade)
    glColor3f(.4, .4, .4);  // Darker grayish color
    glBegin(GL_QUADS);
    glVertex3f(690, 200, 1.0f);
    glVertex3f(760, 200, 1.0f);
    glVertex3f(760, 420, 1.0f);
    glVertex3f(690, 440, 1.0f);
    glEnd();

// Background (Darker Shade)
    glColor3f(.2, .2, .3);  // Darker shade of blue
    glBegin(GL_QUADS);
    glVertex3f(840-10, 250, 1.0f);
    glVertex3f(910-10, 250, 1.0f);
    glVertex3f(910-10, 470-10, 1.0f);
    glVertex3f(840-10, 470-10, 1.0f);
    glEnd();

// Foreground (Darker Shade)
    glColor3f(.4, .4, .4);  // Darker grayish color
    glBegin(GL_QUADS);
    glVertex3f(840, 250, 1.0f);
    glVertex3f(910, 250, 1.0f);
    glVertex3f(910, 470, 1.0f);
    glVertex3f(840, 470, 1.0f);
    glEnd();

// Background (Darker Shade)
    glColor3f(.2, .2, .3);  // Darker shade of blue
    glBegin(GL_QUADS);
    glVertex3f(240-10, 250, 1.0f);
    glVertex3f(310-10, 250, 1.0f);
    glVertex3f(310-10, 470-10, 1.0f);
    glVertex3f(240-10, 460-10, 1.0f);
    glEnd();

// Foreground (Darker Shade)
    glColor3f(.4, .4, .4);  // Darker grayish color
    glBegin(GL_QUADS);
    glVertex3f(240, 250, 1.0f);
    glVertex3f(310, 250, 1.0f);
    glVertex3f(310, 470, 1.0f);
    glVertex3f(240, 460, 1.0f);
    glEnd();

// Background (Darker Shade)
    glColor3f(.2, .2, .3);  // Darker shade of blue
    glBegin(GL_QUADS);
    glVertex3f(340-10, 250, 1.0f);
    glVertex3f(410-10, 250, 1.0f);
    glVertex3f(410-10, 470-10, 1.0f);
    glVertex3f(340-10, 470-10, 1.0f);
    glEnd();

// Foreground (Darker Shade)
    glColor3f(.4, .4, .4);  // Darker grayish color
    glBegin(GL_QUADS);
    glVertex3f(340, 250, 1.0f);
    glVertex3f(410, 250, 1.0f);
    glVertex3f(410, 470, 1.0f);
    glVertex3f(340, 470, 1.0f);
    glEnd();

}