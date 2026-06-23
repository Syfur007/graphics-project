float building_fw_offset = -1.0f; 
float building_bg_offset = -2.0f;

bool showRedLight = true;


void Building_Shadows(bool isNight = false)
{

    // Background
    if (isNight)
        glColor3f(.2, .2, .3); 
    else
        glColor3f(0.392, .412, .519);
    glBegin(GL_QUADS);
    glVertex3f(240-10, 250, building_bg_offset);
    glVertex3f(310-10, 250, building_bg_offset);
    glVertex3f(310-10, 470-10, building_bg_offset);
    glVertex3f(240-10, 460-10, building_bg_offset);
    glEnd();

    // fw
    if (isNight)
        glColor3f(.4, .4, .4);
    else
        glColor3f(.808, .816, .855);
    glBegin(GL_QUADS);
    glVertex3f(240, 250, building_fw_offset);
    glVertex3f(310, 250, building_fw_offset);
    glVertex3f(310, 470, building_fw_offset);
    glVertex3f(240, 460, building_fw_offset);
    glEnd();

    //bg
    if (isNight)
        glColor3f(.2, .2, .3); 
    else
        glColor3f(0.392, .412, .519);
    glBegin(GL_QUADS);
    glVertex3f(340-10, 250, building_bg_offset);
    glVertex3f(410-10, 250, building_bg_offset);
    glVertex3f(410-10, 470-10, building_bg_offset);
    glVertex3f(340-10, 470-10, building_bg_offset);
    glEnd();

    //fw
    if (isNight)
        glColor3f(.4, .4, .4);
    else
        glColor3f(.808, .816, .855);
    glBegin(GL_QUADS);
    glVertex3f(340, 250, building_fw_offset);
    glVertex3f(410, 250, building_fw_offset);
    glVertex3f(410, 470, building_fw_offset);
    glVertex3f(340, 470, building_fw_offset);
    glEnd();


    // bg
    if (isNight)
        glColor3f(.2, .2, .3); 
    else
        glColor3f(0.392, .412, .519);
    glBegin(GL_QUADS);
    glVertex3f(590-10, 200, building_bg_offset);
    glVertex3f(660-10, 200, building_bg_offset);
    glVertex3f(660-10, 440-10, building_bg_offset);
    glVertex3f(590-10, 440-10, building_bg_offset);
    glEnd();

    //fw
    if (isNight)
        glColor3f(.4, .4, .4);
    else
        glColor3f(.808, .816, .855);
    glBegin(GL_QUADS);
    glVertex3f(590, 200, building_fw_offset);
    glVertex3f(660, 200, building_fw_offset);
    glVertex3f(660, 440, building_fw_offset);
    glVertex3f(590, 440, building_fw_offset);
    glEnd();

    //bg
    if (isNight)
        glColor3f(.2, .2, .3); 
    else
        glColor3f(0.392, .412, .519);
    glBegin(GL_QUADS);
    glVertex3f(690-10, 200, building_bg_offset);
    glVertex3f(760-10, 200, building_bg_offset);
    glVertex3f(760-10, 420-10, building_bg_offset);
    glVertex3f(690-10, 440-10, building_bg_offset);
    glEnd();


    //fw
    if (isNight)
        glColor3f(.4, .4, .4);
    else
        glColor3f(.808, .816, .855);
    glBegin(GL_QUADS);
    glVertex3f(690, 200, building_fw_offset);
    glVertex3f(760, 200, building_fw_offset);
    glVertex3f(760, 420, building_fw_offset);
    glVertex3f(690, 440, building_fw_offset);
    glEnd();


    // Light
    if (isNight) {
        glColor3f(.6, .6, .6);
        glBegin(GL_QUADS);
        glVertex3f(905, 470, building_fw_offset);
        glVertex3f(910, 470, building_fw_offset);
        glVertex3f(910, 480, building_fw_offset);
        glVertex3f(905, 480, building_fw_offset);
        glEnd();

        if (showRedLight)
            glColor3f(.9, 0, 0);
        else
            glColor3f(.6, .6, .6);
        drawCircle(907.5, 482, 5);
    }

    //bg
    if (isNight)
        glColor3f(.2, .2, .3); 
    else
        glColor3f(0.392, .412, .519);
    glBegin(GL_QUADS);
    glVertex3f(840-10, 250, building_bg_offset);
    glVertex3f(910-10, 250, building_bg_offset);
    glVertex3f(910-10, 470-10, building_bg_offset);
    glVertex3f(840-10, 470-10, building_bg_offset);
    glEnd();


    //fw
    if (isNight)
        glColor3f(.4, .4, .4);
    else
        glColor3f(.808, .816, .855);
    glBegin(GL_QUADS);
    glVertex3f(840, 250, building_fw_offset);
    glVertex3f(910, 250, building_fw_offset);
    glVertex3f(910, 470, building_fw_offset);
    glVertex3f(840, 470, building_fw_offset);
    glEnd();
}