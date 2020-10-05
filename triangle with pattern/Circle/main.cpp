#include <GL/glut.h>
#include <math.h>

void cirlce()
{
// Code for circle glClear(GL_COLOR_BUFFER_BIT); glColor3f(0.0,1.0,0.0); glBegin(GL_POINTS);
for(int i=0;i<1000;++i)
    { glVertex3f(cos(2*3.14159*i/1000.0),sin(2*3.14159*i/1000.0),0);
}
glEnd(); glFlush();
}
void displayMe(void)
{
glClear(GL_COLOR_BUFFER_BIT); glBegin(GL_LINES); glClearColor(0.0,0.0,0.0,0.0);


// code for triangle glColor3f(1.0,0.0,1.0); glVertex2f(0.0, 1.0);
glVertex2f(-0.86, -0.50);
glVertex2f(0.0, 1.0);
glVertex2f(0.86, -0.50);
glVertex2f(-0.86, -0.50);
glVertex2f(0.86, -0.50);

//code for diagonal glColor3f(1.0,0.0,0.0); glVertex2f(0.0, 1.0);
glVertex2f(0.0, -0.50);


//code for staright line glColor3f(0.0,0.0,1.0); glVertex2f(0.0, 0.8);
glVertex2f(0.086, 0.849);
glVertex2f(0.0, 0.6);
glVertex2f(0.173, 0.699);
glVertex2f(0.0, 0.4);
glVertex2f(0.26, 0.548);
glVertex2f(0.0, 0.2);
glVertex2f(0.346, 0.397);
glVertex2f(0.0, 0.0);
glVertex2f(0.433, 0.247);
glVertex2f(0.0, -0.2);
glVertex2f(0.519, 0.096);
glVertex2f(0.0, -0.4);
glVertex2f(0.606, -0.055);
glVertex2f(0.0, -0.5);
glVertex2f(0.649, -0.13);


//code for slant line glColor3f(0.5,1.0,0.0); glVertex2f(0.0, 0.8);
glVertex2f(-0.115, 0.8);
glVertex2f(0.0, 0.6);
glVertex2f(-0.23, 0.6);
glVertex2f(0.0, 0.4);
glVertex2f(-0.345, 0.4);
glVertex2f(0.0, 0.2);
glVertex2f(-0.46, 0.2);
glVertex2f(0.0, 0.0);
glVertex2f(-0.575, 0.0);
glVertex2f(0.0, -0.2);
glVertex2f(-0.69, -0.2);
glVertex2f(0.0, -0.4);
glVertex2f(-0.805, -0.4);
glVertex2f(0.0, -0.5);
glVertex2f(-0.862, -0.5);


glColor3f(0.0,0.0,0.0); cirlce();

}


int main(int argc, char** argv)
{
glutInit(&argc, argv); glutInitDisplayMode(GLUT_RGB); glutInitWindowSize(550, 550); glutCreateWindow("Circle/Triangle with pattern"); glutDisplayFunc(displayMe);
glutMainLoop(); return 0;
}
