#pragma once

float building_offset = 9.0f;
float building_middle_offset = 10.0f;

float building_window_offset = building_offset + .1f;
float building_middle_window_offset = building_middle_offset + .1f;

float building_shadow_offset = building_offset - 1.0f;

float zBack  = -50.0f;
float zFront = building_offset; 

void Hospital(bool isNight = false) {
    
    // Choose side-wall illumination based on Day/Night cycle
    if (isNight)
        glColor3f(0.35f, 0.35f, 0.35f);     // Darker tones for 3D side shadows at night
    else
        glColor3f(0.55f, 0.55f, 0.55f);     // Grounded structural shadow during day

    // Leftmost wing edge side extrusion (from x = -20)
    drawExtrudedSide(-20, 185, -20, 355, zFront, zBack);

    // Rightmost wing edge side extrusion (from x = 270)
    drawExtrudedSide(270, 185, 270, 345, zFront, zBack);

    // Main Center Building elevated profile side extrusions (x = 80 and x = 180)
    // Connects the forward jutting center block cleanly to the rest of the layout
    drawExtrudedSide(80, 185, 80, 400, zFront, zBack);
    drawExtrudedSide(180, 185, 180, 400, zFront, zBack);

    // Top Roof side extrusions to prevent hollow gaps when looking down from an angle
    drawExtrudedSide(-20, 355, 80, 355, zFront, zBack);
    drawExtrudedSide(180, 355, 260, 355, zFront, zBack);
    drawExtrudedSide(90, 410, 170, 410, zFront, zBack);

    if (isNight)
        glColor3f(0.658, 0.658, 0.658); // Main building (Darker)
    else
        glColor3f(0.7, 0.7, 0.7); // Main building
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

    if (isNight)
        glColor3f(0.630, 0.630, 0.630); // left most Building (Darker)
    else
        glColor3f(.901, .901, .901); // left most Building
    glBegin(GL_QUADS);
    glVertex3f(-20, 185, building_offset);
    glVertex3f( 80, 185, building_offset);
    glVertex3f( 80, 355, building_offset);
    glVertex3f(-20, 355, building_offset);
    glEnd();

    if (isNight)
        glColor3f(0.630, 0.630, 0.630); // Right most Building (Darker)
    else
        glColor3f(.901, .901, .901); // Right most Building
    glBegin(GL_POLYGON);
    glVertex3f(180, 185, building_offset);
    glVertex3f(270, 185, building_offset);
    glVertex3f(270, 345, building_offset);
    glVertex3f(260, 355, building_offset);
    glVertex3f(180, 355, building_offset);
    glEnd();

    if (isNight)
        glColor3f(0.493, 0.493, 0.493); // Shadow of side building (Darker)
    else
        glColor3f(.705, .705, .705); // Shadow of side building
    glBegin(GL_QUADS);
    glVertex3f(270, 185, building_shadow_offset);
    glVertex3f(275, 185, building_shadow_offset);
    glVertex3f(275, 337, building_shadow_offset);
    glVertex3f(270, 345, building_shadow_offset);
    glEnd();

    if (isNight)
        glColor3f(0.636, 0.203, 0.132); // signboard (Darker)
    else
        glColor3f(.909, 0.290, 0.188);//signboard
    glBegin(GL_QUADS);
    glVertex3f(110, 380, building_window_offset + 0.1f);
    glVertex3f(150, 380, building_window_offset + 0.1f);
    glVertex3f(150, 430, building_window_offset + 0.1f);
    glVertex3f(110, 430, building_window_offset + 0.1f);
    glEnd();

    if (isNight)
        glColor3f(0.8, 0.8, 0.8); // Plus sign (Darker)
    else
        glColor3f(1, 1, 1); // Plus sign
    glBegin(GL_QUADS);
    glVertex3f(127, 385, building_window_offset + 0.2f);
    glVertex3f(133, 385, building_window_offset + 0.2f);
    glVertex3f(133, 425, building_window_offset + 0.2f);
    glVertex3f(127, 425, building_window_offset + 0.2f);
    glEnd();

    if (isNight)
        glColor3f(0.8, 0.8, 0.8); // Plus sign (Darker)
    else
        glColor3f(1, 1, 1); // Plus sign
    glBegin(GL_QUADS);
    glVertex3f(115, 402, building_window_offset + 0.2f);
    glVertex3f(145, 402, building_window_offset + 0.2f);
    glVertex3f(145, 410, building_window_offset + 0.2f);
    glVertex3f(115, 410, building_window_offset + 0.2f);
    glEnd();

    if (isNight)
        glColor3f(0.8, 0.7, 0.3); // Entrance (Darker)
    else
        glColor3f(.207, .219, .756); // Entrance
    glBegin(GL_QUADS);
    glVertex3f(110, 180, building_window_offset + 0.1f);
    glVertex3f(150, 180, building_window_offset + 0.1f);
    glVertex3f(150, 220, building_window_offset + 0.1f);
    glVertex3f(110, 220, building_window_offset + 0.1f);
    glEnd();

    if (isNight)
        glColor3f(0.8, 0.7, 0.3); // Entrance (Darker)
    else
        glColor3f(.207, .219, .756); // Entrance
    glBegin(GL_LINES);
    glVertex3f(110, 212, building_window_offset + 0.2f);
    glVertex3f(150, 212, building_window_offset + 0.2f);
    glVertex3f(130, 212, building_window_offset + 0.2f);
    glVertex3f(130, 180, building_window_offset + 0.2f);
    glEnd();

    //Hospital Windows
    for (int i = 0; i < 6; i++)
    {
        if (isNight)
            glColor3f(0.8, 0.7, 0.3);
        else
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
        if (isNight)
            glColor3f(0.8, 0.7, 0.3);
        else
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
        if (isNight)
            glColor3f(0.8, 0.7, 0.3);
        else
            glColor3f(.207, .219, .756);
        glBegin(GL_QUADS);
        glVertex3f(190, 215 + i * 25, building_window_offset);
        glVertex3f(190, 200 + i * 25, building_window_offset);
        glVertex3f(260, 200 + i * 25, building_window_offset);
        glVertex3f(260, 215 + i * 25, building_window_offset);
        glEnd();
    }
}

void Medical_University(bool isNight = false) {
    // True 3D depth parameters
    float zFrontMain   = building_offset;         // Sits at 9.0f
    float zFrontCenter = building_middle_offset;  // Sits at 10.0f (recessed/different forward block)

    if (isNight)
        glColor3f(0.25f, 0.25f, 0.25f);     // Dark side shadows at night
    else
        glColor3f(0.6f, 0.6f, 0.6f);        // Side structure shading under daytime sun

    // --- Right Building Blocks Extrusions ---
    // Leftmost edge of the entire university structure (at x = 300)
    drawExtrudedSide(300, 230, 300, 415, zFrontMain, zBack);
    // Top angled roof elements for the right building
    drawExtrudedSide(300, 415, 305, 420, zFrontMain, zBack);
    drawExtrudedSide(305, 420, 395, 420, zFrontMain, zBack);
    drawExtrudedSide(395, 420, 400, 415, zFrontMain, zBack);
    // Right inner edge where it meets the center block (at x = 400)
    drawExtrudedSide(400, 230, 400, 415, zFrontMain, zBack);

    // --- Left Building Blocks Extrusions ---
    // Left inner edge near the center block (at x = 420)
    drawExtrudedSide(420, 230, 420, 415, zFrontMain, zBack);
    // Top angled roof elements for the left building
    drawExtrudedSide(420, 415, 425, 420, zFrontMain, zBack);
    drawExtrudedSide(425, 420, 515, 420, zFrontMain, zBack);
    drawExtrudedSide(515, 420, 520, 415, zFrontMain, zBack);
    // Rightmost ultimate boundary of the university structure (at x = 520)
    drawExtrudedSide(520, 230, 520, 415, zFrontMain, zBack);

    // --- Center Building (Recessed Mid-Section Block) Extrusions ---
    // Left edge transition (at x = 360)
    drawExtrudedSide(360, 230, 360, 345, zFrontCenter, zBack);
    // Roof transitions
    drawExtrudedSide(360, 345, 365, 350, zFrontCenter, zBack);
    drawExtrudedSide(365, 350, 455, 350, zFrontCenter, zBack);
    drawExtrudedSide(455, 350, 460, 345, zFrontCenter, zBack);
    // Right edge transition (at x = 460)
    drawExtrudedSide(460, 230, 460, 345, zFrontCenter, zBack);


    // Left building
    if (isNight)
        glColor3f(0.5, 0.5, 0.5);
    else
        glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3f(370+50, 230, building_offset);
    glVertex3f(370+50, 415, building_offset);
    glVertex3f(375+50, 420, building_offset);
    glVertex3f(465+50, 420, building_offset);
    glVertex3f(470+50, 415, building_offset);
    glVertex3f(470+50, 230, building_offset);
    glEnd();

    //Left building windows
    if (isNight)
        glColor3f(0.3, 0.4, 0.45);
    else
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
    if (isNight)
        glColor3f(0.5, 0.5, 0.5);
    else
        glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3f(300, 230, building_offset);
    glVertex3f(300, 415, building_offset);
    glVertex3f(305, 420, building_offset);
    glVertex3f(395, 420, building_offset);
    glVertex3f(400, 415, building_offset);
    glVertex3f(400, 230, building_offset);
    glEnd();

    // Right building windows
    if (isNight)
        glColor3f(0.3, 0.4, 0.45);
    else
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
    if (isNight)
        glColor3f(0.5, 0.5, 0.5);
    else
        glColor3f(1, 1, 1);
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
    if (isNight)
        glColor3f(0.5, 0.5, 0.5);
    else
        glColor3f(1, 1, 1);
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
    glVertex3f(429, 240, building_window_offset + 0.1f);
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
    if (isNight)
        glColor3f(0.5, 0.5, 0.5);
    else
        glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex3f(320+40, 230, building_middle_offset);
    glVertex3f(320+40, 345, building_middle_offset);
    glVertex3f(325+40, 350, building_middle_offset);
    glVertex3f(415+40, 350, building_middle_offset);
    glVertex3f(420+40, 345, building_middle_offset);
    glVertex3f(420+40, 230, building_middle_offset);
    glEnd();

    // Center building Windows
    if (isNight)
        glColor3f(0.3, 0.4, 0.45);
    else
        glColor3f(0.656,0.796,0.839);
    glBegin(GL_POLYGON);
    glVertex3f(324+40, 240, building_middle_window_offset);
    glVertex3f(324+40, 341, building_middle_window_offset);
    glVertex3f(329+40, 346, building_middle_window_offset);
    glVertex3f(411+40, 346, building_middle_window_offset);
    glVertex3f(416+40, 341, building_middle_window_offset);
    glVertex3f(416+40, 240, building_middle_window_offset);
    glEnd();
    
    if (isNight)
        glColor3f(0.5, 0.5, 0.5);
    else
        glColor3f(1, 1, 1); //window Lines horizontal
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
    
    if (isNight)
        glColor3f(0.5, 0.5, 0.5);
    else
        glColor3f(1, 1, 1); //window Lines vertical
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
    if (isNight)
        glColor3f(0.5, 0.6, 0.55);
    else
        glColor3f(0.773,0.800,0.769);
    glBegin(GL_POLYGON);
    glVertex3f(390, 230, building_middle_offset + 0.5f);
    glVertex3f(390, 265, building_middle_offset + 0.5f);
    glVertex3f(395, 270, building_middle_offset + 0.5f);
    glVertex3f(425, 270, building_middle_offset + 0.5f);
    glVertex3f(430, 265, building_middle_offset + 0.5f);
    glVertex3f(430, 230, building_middle_offset + 0.5f);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex3f(410, 230, building_middle_offset + 0.6f);
    glVertex3f(410, 270, building_middle_offset + 0.6f);
    glEnd();
}

void Restaurant(bool isNight = false) {
    if (isNight)
        glColor3f(0.1, 0.3, 0.6);
    else
        glColor3f(0.195,0.596,0.898);
    glBegin(GL_QUADS);
    glVertex3f(570, 190, building_offset);
    glVertex3f(570, 280, building_offset);
    glVertex3f(680, 280, building_offset);
    glVertex3f(680, 190, building_offset);
    glEnd();

    if (isNight)
        glColor3f(0.05, 0.2, 0.45);
    else
        glColor3f(0.085,0.411,0.710);
    glBegin(GL_QUADS);
    glVertex3f(570, 190, building_offset);
    glVertex3f(570, 280, building_offset);
    glVertex3f(560, 285, building_offset);
    glVertex3f(560, 198, building_offset);
    glEnd();

    // Roof Front
    if (isNight)
        glColor3f(0.1, 0.2, 0.45);
    else
        glColor3f(0.191,0.371,0.660);
    glBegin(GL_TRIANGLES);
    glVertex3f(565, 280, building_offset+0.02f);
    glVertex3f(690, 280, building_offset+0.02f);
    glVertex3f(615, 320, building_offset+0.02f);
    glEnd();
    
    // Roof Back
    if (isNight)
        glColor3f(0.1, 0.2, 0.45);
    else
        glColor3f(0.151,0.321,0.610);
    glBegin(GL_TRIANGLES);
    glVertex3f(565, 280, building_offset+0.1f);
    glVertex3f(615, 320, building_offset+0.1f);
    glVertex3f(550, 290, building_offset+0.1f);
    glEnd();

    // Chimney
    
    if (isNight)
        glColor3f(0.1, 0.2, 0.45);
    else
        glColor3f(0.191,0.371,0.660);
    glBegin(GL_QUADS);
    glVertex3f(635, 300, building_offset);
    glVertex3f(645, 300, building_offset);
    glVertex3f(645, 345, building_offset);
    glVertex3f(635, 340, building_offset);
    glEnd();

    //Door
    if (isNight)
        glColor3f(0.4, 0.5, 0.6);
    else
        glColor3f(0.656,0.796,0.839);
    glBegin(GL_QUADS);
    glVertex3f(590, 190, building_offset+0.1f);
    glVertex3f(590, 250, building_offset+0.1f);
    glVertex3f(660, 250, building_offset+0.1f);
    glVertex3f(660, 190, building_offset+0.1f);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex3f(625, 190, building_offset+0.3f);
    glVertex3f(625, 250, building_offset+0.3f);
    glEnd();
}

void Pharmacy(bool isNight = false) {
    if (isNight)
        glColor3f(0.15, 0.4, 0.35);
    else
        glColor3f(0.295,0.796,0.773);
    glBegin(GL_QUADS);
    glVertex3f(713, 190, building_offset);
    glVertex3f(713, 280, building_offset);
    glVertex3f(823, 280, building_offset);
    glVertex3f(823, 190, building_offset);
    glEnd();

    if (isNight)
        glColor3f(0.1, 0.35, 0.32);
    else
        glColor3f(0.187,0.664,0.640);
    glBegin(GL_QUADS);
    glVertex3f(713, 190, building_offset);
    glVertex3f(713, 280, building_offset);
    glVertex3f(703, 285, building_offset);
    glVertex3f(703, 198, building_offset);
    glEnd();

    // Roof Side
    if (isNight)
        glColor3f(0.1, 0.25, 0.3);
    else
        glColor3f(0.281,0.488,0.570);
    glBegin(GL_QUADS);
    glVertex3f(708, 270, building_offset+0.02f);
    glVertex3f(710, 310, building_offset+0.02f);
    glVertex3f(815, 310, building_offset+0.02f);
    glVertex3f(830, 270, building_offset+0.02f);
    glEnd();

    if (isNight)
        glColor3f(0.1, 0.25, 0.3);
    else
        glColor3f(0.281,0.488,0.570);
    glBegin(GL_TRIANGLES);
    glVertex3f(708, 270, building_offset+0.01f);
    glVertex3f(710, 310, building_offset+0.01f);
    glVertex3f(695, 280, building_offset+0.01f);
    glEnd();

    // Entrance
    
    if (isNight)
        glColor3f(0.1, 0.25, 0.3);
    else
        glColor3f(0.281,0.488,0.570);
    glBegin(GL_QUADS);
    glVertex3f(738, 190, building_offset+0.2f);
    glVertex3f(738, 250, building_offset+0.2f);
    glVertex3f(800, 250, building_offset+0.2f);
    glVertex3f(800, 190, building_offset+0.2f);
    glEnd();

    // Doors

    if (isNight)
        glColor3f(0.8, 0.7, 0.3);
    else
        glColor3f(0.656,0.796,0.839);
    glBegin(GL_QUADS);
    glVertex3f(767, 195, building_offset+0.3f);
    glVertex3f(767, 250, building_offset+0.3f);
    glVertex3f(800, 250, building_offset+0.3f);
    glVertex3f(800, 190, building_offset+0.3f);
    glEnd();

    if (isNight)
        glColor3f(0.8, 0.7, 0.3);
    else
        glColor3f(0.656,0.796,0.839);
    glBegin(GL_QUADS);
    glVertex3f(738, 190, building_offset+0.3f);
    glVertex3f(738, 250, building_offset+0.3f);
    glVertex3f(765, 250, building_offset+0.3f);
    glVertex3f(765, 200, building_offset+0.3f);
    glEnd();

}

void MegaMall(bool isNight = false) {

    if (isNight)
        glColor3f(0.25f, 0.25f, 0.25f);     // Dark side-wall shadow at night
    else
        glColor3f(0.5f, 0.5f, 0.55f);       // Metallic side-wall shading under daylight

    // Leftmost outer edge boundary (at x = 800)
    drawExtrudedSide(860, 200, 860, 400, zFront, zBack);
    
    // Top roof angled profile lines
    drawExtrudedSide(860, 400, 1010, 440, zFront, zBack);
    drawExtrudedSide(1010, 440, 1160, 390, zFront, zBack);
    
    // Rightmost outer edge boundary (at x = 1160)
    drawExtrudedSide(1160, 200, 1160, 390, zFront, zBack);

    if (isNight)
        glColor3f(0.4, 0.4, 0.35);
    else
        glColor3f(0.773,0.800,0.769);
    glBegin(GL_QUADS);
    glVertex3f(860, 210, building_offset);
    glVertex3f(860, 400, building_offset);
    glVertex3f(1010, 440, building_offset);
    glVertex3f(1010, 190, building_offset);
    glEnd();

    if (isNight)
        glColor3f(0.35, 0.35, 0.4);
    else
        glColor3f(0.801,0.802,0.807);
    glBegin(GL_QUADS);
    glVertex3f(1010, 190, building_offset);
    glVertex3f(1010, 440, building_offset);
    glVertex3f(1160, 400, building_offset);
    glVertex3f(1160, 210, building_offset);
    glEnd();

    //Entrances
    if (isNight)
        glColor3f(1.0, 0.8, 0.2); 
    else
        glColor3f(0.492,0.511,0.617);
    glBegin(GL_QUADS);
    glVertex3f(910, 203, building_offset+0.1f);
    glVertex3f(910, 240, building_offset+0.1f);
    glVertex3f(960, 236, building_offset+0.1f);
    glVertex3f(960, 196, building_offset+0.1f);
    glEnd();

    if (isNight)
        glColor3f(1.0, 0.8, 0.2); 
    else
        glColor3f(0.492,0.511,0.617);
    glBegin(GL_QUADS);
    glVertex3f(1060, 196, building_offset+0.1f);
    glVertex3f(1060, 236, building_offset+0.1f);
    glVertex3f(1110, 241, building_offset+0.1f);
    glVertex3f(1110, 203, building_offset+0.1f);
    glEnd();

    //windows
    if (isNight)
        glColor3f(1.0, 0.8, 0.2); 
    else
        glColor3f(0.203,0.203,0.515);
    glBegin(GL_QUADS);
    glVertex3f(865, 250, building_offset+0.1f);
    glVertex3f(865, 395, building_offset+0.1f);
    glVertex3f(1005, 430, building_offset+0.1f);
    glVertex3f(1005, 240, building_offset+0.1f);
    glEnd();

    if (isNight)
        glColor3f(1.0, 0.8, 0.2); 
    else
        glColor3f(0.382,0.382,0.757);
    glBegin(GL_QUADS);
    glVertex3f(1015, 240, building_offset+0.1f);
    glVertex3f(1015, 430, building_offset+0.1f);
    glVertex3f(1155, 395, building_offset+0.1f);
    glVertex3f(1155, 250, building_offset+0.1f);
    glEnd();

    //window Lines
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex3f(935, 244, building_offset+0.2f);
    glVertex3f(935, 412, building_offset+0.2f);
    glVertex3f(865, 322, building_offset+0.2f);
    glVertex3f(1005, 335, building_offset+0.2f);
    glEnd();

    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex3f(1085, 244, building_offset+0.2f);
    glVertex3f(1085, 412, building_offset+0.2f);
    glVertex3f(1155, 322, building_offset+0.2f);
    glVertex3f(1015, 335, building_offset+0.2f);
    glEnd();
}

void Buildings()
{
    Hospital();
    Medical_University();
    Restaurant();
    Pharmacy();
    MegaMall();
}

void Buildings_N()
{
    //Hospital
    Hospital(true);

    // Medical University
    Medical_University(true);

    Restaurant(true);

    Pharmacy(true);

    MegaMall(true);

}

