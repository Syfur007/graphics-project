void Building_Shadows()
{
    //bg
    glColor3f(0.392, .412, .519);
    glBegin(GL_QUADS);
    glVertex3f(590-10, 200, 2.0f);
    glVertex3f(660-10, 200, 2.0f);
    glVertex3f(660-10, 440-10, 2.0f);
    glVertex3f(590-10, 440-10, 2.0f);
    glEnd();
    //fw
    glColor3f(0.808, .816, .855);
    glBegin(GL_QUADS);
    glVertex3f(590, 200, 1.0f);
    glVertex3f(660, 200, 1.0f);
    glVertex3f(660, 440, 1.0f);
    glVertex3f(590, 440, 1.0f);
    glEnd();

    //bg
    glColor3f(.392, .412, .519);
    glBegin(GL_QUADS);
    glVertex3f(690-10, 200, 2.0f);
    glVertex3f(760-10, 200, 2.0f);
    glVertex3f(760-10, 420-10, 2.0f);
    glVertex3f(690-10, 440-10, 2.0f);
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
    glVertex3f(840-10, 250, 2.0f);
    glVertex3f(910-10, 250, 2.0f);
    glVertex3f(910-10, 470-10, 2.0f);
    glVertex3f(840-10, 470-10, 2.0f);
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
    glVertex3f(240-10, 250, 2.0f);
    glVertex3f(310-10, 250, 2.0f);
    glVertex3f(310-10, 470-10, 2.0f);
    glVertex3f(240-10, 460-10, 2.0f);
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
    glVertex3f(340-10, 250, 2.0f);
    glVertex3f(410-10, 250, 2.0f);
    glVertex3f(410-10, 470-10, 2.0f);
    glVertex3f(340-10, 470-10, 2.0f);
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