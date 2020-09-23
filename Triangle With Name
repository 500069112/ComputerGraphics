#include <GL/glut.h> void init()
void display()
{
    glClearColor(1,1,3,5);
glMatrixMode(GL_PROJECTION);
glOrtho(-10,100,-10,100,20,-20);
glClear(GL_COLOR_BUFFER_BIT); glColor3f(0.0, 0.1, 0.0); glBegin(GL_TRIANGLES);
glVertex2f(5,2); glVertex2f(70,2);
glVertex2f(33.5,70); glEnd();

glColor3f(0.0,0.0,0.0);

char name[] = {'A','n','u','b','h','a','v'};
int x=20;
for(int i=0;i<7;i++)
{
glRasterPos2i(x,12); glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,name[i]); x+=5;
}

glFlush();
}
int main(int argc,char **argv)
{
glutInit(&argc,argv);

glutInitDisplayMode(GLUT_RGB); glutInitWindowSize(500,500); glutInitWindowPosition(800,100); glutCreateWindow("Triangle with name");

glutDisplayFunc(display); glutMainLoop();
return 0;
}
