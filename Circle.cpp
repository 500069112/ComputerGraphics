#include<gl/glut.h>
#include<math.h>
void init()
{
glClearColor(0,0,0,1);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,500,0,500);
}
void display()
{glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.0,1.0,0.0);
glBegin(GL_POINTS);
for(int i=0;i<1000;++i)
{
glVertex3f(cos(2*3.14159*i/1000.0),sin(2*3.14159*i/1000.0),0);
}
glEnd(); glFlush();
}
int main(int argc,char **argv,char **arg)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH); glutInitWindowPosition(700,700);
glutInitWindowSize(500,500); glutCreateWindow("Circle Code"); glutDisplayFunc(display); glutMainLoop();
return 0;
}
