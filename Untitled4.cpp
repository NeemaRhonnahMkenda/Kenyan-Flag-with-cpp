#include <windows.h> // for MS Windows
#include "glut.h" // GLUT, include glu.h and gl.h
void myInit(void)
{
glClearColor(1.0,1.0,1.0,0.0); // set white background color
glColor3f(0.0f, 0.0f, 0.0f); // set the drawing color
glPointSize(4.0); // a ‘dot’ is 4 by 4 pixels
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
//<<<<<<<<<<<<<<<<<<<<<<<< myDisplay >>>>>>>>>>>>>>>>>
void myDisplay(void)
{
glClear(GL_COLOR_BUFFER_BIT); // clear the screen
glPointSize(4.0);
//BLACK
glColor3f(0.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glVertex2i(50, 330); 
glVertex2i(50, 400);

glVertex2i(50, 400);
glVertex2i(400, 400);

glVertex2i(400, 400);
glVertex2i(400, 330);

glVertex2i(400, 330);
glVertex2i(50, 330);

glEnd();

//RED
glColor3f(1.0f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glVertex2i(50, 250); 
glVertex2i(50, 320);

glVertex2i(50, 320);
glVertex2i(400, 320);

glVertex2i(400, 320);
glVertex2i(400, 250);

glVertex2i(400, 250);
glVertex2i(50, 250);

glEnd();

//GREEN
glColor3f(0.0f, 0.5f, 0.0f);
glBegin(GL_POLYGON);
glVertex2i(50, 170); 
glVertex2i(50, 240);

glVertex2i(50, 240);
glVertex2i(400, 240);

glVertex2i(400, 240);
glVertex2i(400, 170);

glVertex2i(400, 170);
glVertex2i(50, 170);

glEnd();

glFlush(); // send all output to display
}
//<<<<<<<<<<<<<<<<<<<<<<<< main >>>>>>>>>>>>>>>>>>>>>>
int main(int argc, char** argv)
{
glutInit(&argc, argv); // initialize the toolkit
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // set display mode
glutInitWindowSize(640,640); // set window size
glutInitWindowPosition(100, 150); // set window position on screen
glutCreateWindow("Draw DOTS"); // open the screen window
glutDisplayFunc(myDisplay); // register redraw function
myInit();
glutMainLoop(); // go into a perpetual loop
return 0;
}
