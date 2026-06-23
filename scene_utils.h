#include <string>

#ifndef SCENE_UTILS_INC
#define SCENE_UTILS_INC

void drawCircle(float x, float y, float radius, float z = 0.0f)
{
    glBegin(GL_POLYGON);  // Use line loop to draw the circle
    for (int i = 0; i < 360; i++)
    {
        float angle = i * 3.14159f / 180.0f; // Convert degrees to radians
        float dx = x + cos(angle) * radius;  // x coordinate of the point on the circle
        float dy = y + sin(angle) * radius;  // y coordinate of the point on the circle
        glVertex3f(dx, dy, z);  // Set the vertex
    }
    glEnd();
}

void drawText(float x, float y, float z, const char *string) {
    // Upgraded to glRasterPos3f to handle the grid's depth coordinate
    glRasterPos3f(x, y, z);
    int len = strlen(string);
    for (int i = 0; i < len; i++) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10, string[i]);
    }
}

void drawGrid(int size, float step) {
    // 1. Draw the grid lines
    glBegin(GL_LINES);
    glColor3f(0.5f, 0.5f, 0.5f); // Set grid color (gray)
    
    for (int i = -size; i <= size; i += step) {
        glVertex3f(-size, (float)i, 15.0f);
        glVertex3f(size, (float)i, 15.0f);
    }
    
    for (int i = -size; i <= size; i += step) {
        glVertex3f((float)i, -size, 15.0f);
        glVertex3f((float)i, size, 15.0f);
    }
    glEnd();

    // 2. Draw measurement labels
    glColor3f(1.0f, 1.0f, 1.0f); // Set text color (white)
    
    for (int i = -size; i <= size; i += step) {
        std::string numStr = std::to_string(i);
        
        // Label the vertical axis (Y) along the center line (X = 0)
        drawText(0.2f, (float)i, 15.0f, numStr.c_str());
        
        // Label the horizontal axis (X) along the center line (Y = 0)
        // Skip zero to avoid double text overlap in the center
        if (i != 0) {
            drawText((float)i, 0.2f, 15.0f, numStr.c_str());
        }
    }
}

// Automatically draws a 3D connecting side wall between two depths
void drawExtrudedSide(float x1, float y1, float x2, float y2, float zFront, float zBack) {
    glBegin(GL_QUADS);
        glVertex3f(x1, y1, zFront);
        glVertex3f(x2, y2, zFront);
        glVertex3f(x2, y2, zBack);
        glVertex3f(x1, y1, zBack);
    glEnd();
}

#endif // SCENE_UTILS_INC
