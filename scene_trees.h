float tree_offset = 15.0f;

void Tree(float x, float y, bool isNight = false) {
    if (isNight) {
        glColor3ub(55, 108, 34); // Darker green for the canopy
    } else {
        glColor3ub(78, 148, 45); // Regular green for the canopy
    }
    glBegin(GL_TRIANGLES);
    glVertex3f(x-20, y+15, tree_offset+0.1f);
    glVertex3f(x+40, y+20, tree_offset+0.1f);
    glVertex3f(x, y+55, tree_offset+0.1f);
    glEnd();

    if (isNight) {
        glColor3ub(28, 83, 27); // Even darker green for the second canopy layer
    } else {
        glColor3ub(39, 118, 37); // Regular green for the second canopy layer
    }
    glBegin(GL_TRIANGLES);
    glVertex3f(x-25, y+37, tree_offset+0.2f);
    glVertex3f(x+32, y+33, tree_offset+0.2f);
    glVertex3f(x+5, y+62, tree_offset+0.2f);
    glEnd();


    if (isNight) {
        glColor3ub(55, 108, 34); // Darker green for the third canopy layer
    } else {
        glColor3ub(78, 148, 45); // Regular green for the third canopy layer
    }
    glBegin(GL_TRIANGLES);
    glVertex3f(x-20, y+55, tree_offset+0.3f);
    glVertex3f(x+25, y+55, tree_offset+0.3f);
    glVertex3f(x+5, y+80, tree_offset+0.3f);
    glEnd();

    if (isNight) {
        glColor3ub(87, 47, 23); // Darker brown for the trunk
    } else {
        glColor3ub(119, 68, 34); // Regular brown for the trunk
    }
    glBegin(GL_QUADS);
    glVertex3f(x, y, tree_offset);
    glVertex3f(x+10, y, tree_offset);
    glVertex3f(x+10, y+18, tree_offset);
    glVertex3f(x, y+18, tree_offset);
    glEnd();
}

void Trees()
{
    //Tree 1
    Tree(550, 175);

    //Tree 2
    Tree(700, 175);

    //Tree 3
    Tree(850, 175);

    //Tree 4
    Tree(200, 175);

    //Tree 5
    Tree(1150, 175);

}

void Trees_N()
{
    //Tree 1
    Tree(550, 175, true);

    //Tree 2
    Tree(700, 175, true);

    //Tree 3
    Tree(850, 175, true);

    //Tree 4
    Tree(200, 175, true);

    //Tree 5
    Tree(1150, 175, true);
}