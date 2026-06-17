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