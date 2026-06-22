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

#endif // SCENE_UTILS_INC
