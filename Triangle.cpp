#include<gl/glut.h>




void display()
{
glClearColor(1,1,0,0);
glClear(GL_COLOR_BUFFER_BIT);
glBegin(GL_TRIANGLES);
glVertex2f(0,0.5);
glColor3f(0,1,0);
glVertex2f(-0.5,-0.5);
glVertex2f(0.5,-0.5);
glEnd();
glFlush();


}

int main(int argc,char**argv)
{
glutInit(&argc,argv);
glutInitWindowSize(640,500);
glutInitWindowPosition(100,10);
glutCreateWindow("triangle");
glutDisplayFunc(display);
glutMainLoop();
return 0;

}
