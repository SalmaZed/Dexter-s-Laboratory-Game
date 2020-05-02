#include <glut.h>
#define PI 3.1415926
#include <math.h>

int keyX = 0;
int keyY = 0;

int angle = 0;
int vectX = 0;
int vectY = 0;
int vectZ = 0;

int passX = 0;
int passY = 0;

void Display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0.0f, 0.0f, 0.5f, 0.0f); //changing the background color
	glClear(GL_COLOR_BUFFER_BIT);

	glPushMatrix();
	glTranslated(keyX, 0, 0);
	glBegin(GL_POLYGON); //dexter's head
	glColor3f(1.0f, 0.878f, 0.741f);
	glVertex3f(100.0f, 40.0f, 0.0f);
	glColor3f(1.0f, 0.878f, 0.741f);
	glVertex3f(100.0f, 55.0f, 0.0f);
	glColor3f(1.0f, 0.878f, 0.741f);
	glVertex3f(115.0f, 55.0f, 0.0f);
	glColor3f(1.0f, 0.878f, 0.741f);
	glVertex3f(115.0f, 40.0f, 0.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(keyX, 0, 0);
	glBegin(GL_TRIANGLE_FAN); //dexter's left eyeglasses
	glColor3f(0.529f, 0.807f, 0.98f);
	glVertex3f(103.75f, 51.25f, 0.0f); //center
	glColor3f(0.529f, 0.807f, 0.98f);
	glVertex3f(107.5f, 51.25f, 0.0f); //center's right

	glColor3f(0.529f, 0.807f, 0.98f);
	glVertex3f(106.5f, 50.25f, 0.0f);
	glColor3f(0.529f, 0.807f, 0.98f);
	glVertex3f(105.5f, 49.25f, 0.0f);
	glColor3f(0.529f, 0.807f, 0.98f);
	glVertex3f(104.5f, 48.25f, 0.0f);

	glColor3f(0.529f, 0.807f, 0.98f);
	glVertex3f(103.75f, 47.25f, 0.0f);

	glColor3f(0.529f, 0.807f, 0.98f);
	glVertex3f(102.5f, 48.25f, 0.0f);
	glColor3f(0.529f, 0.807f, 0.98f);
	glVertex3f(101.5f, 49.25f, 0.0f);
	glColor3f(0.529f, 0.807f, 0.98f);
	glVertex3f(100.5f, 50.25f, 0.0f);

	glColor3f(0.529f, 0.807f, 0.98f);
	glVertex3f(100.0f, 51.25f, 0.0f); //center's left
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(keyX, 0, 0);
	glBegin(GL_TRIANGLE_FAN); //dexter's right eyeglasses
	glColor3f(0.529f, 0.807f, 0.98f);
	glVertex3f(111.75f, 51.25f, 0.0f); //center
	glColor3f(0.529f, 0.807f, 0.98f);
	glVertex3f(115.0f, 51.25f, 0.0f); //center's right

	glColor3f(0.529f, 0.807f, 0.98f);
	glVertex3f(114.0f, 50.25f, 0.0f);
	glColor3f(0.529f, 0.807f, 0.98f);
	glVertex3f(113.0f, 49.25f, 0.0f);
	glColor3f(0.529f, 0.807f, 0.98f);
	glVertex3f(112.0f, 48.25f, 0.0f);

	glColor3f(0.529f, 0.807f, 0.98f);
	glVertex3f(111.25f, 47.25f, 0.0f);

	glColor3f(0.529f, 0.807f, 0.98f);
	glVertex3f(110.0f, 48.25f, 0.0f);
	glColor3f(0.529f, 0.807f, 0.98f);
	glVertex3f(109.0f, 49.25f, 0.0f);
	glColor3f(0.529f, 0.807f, 0.98f);
	glVertex3f(108.0f, 50.25f, 0.0f);

	glColor3f(0.529f, 0.807f, 0.98f);
	glVertex3f(107.5f, 51.25f, 0.0f); //center's left
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(keyX, 0, 0);
	glPointSize(3.0); // dexter's left eye
	glBegin(GL_POINTS); 
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2i(103.75, 50);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(keyX, 0, 0);
	glPointSize(3.0); // dexter's right eye
	glBegin(GL_POINTS); 
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2i(111.25, 50); 
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(keyX, 0, 0);
	glBegin(GL_LINE_STRIP); //dexter's mouth
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2i(106,45);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(107.5f, 43.75f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2i(109, 45);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(keyX, 0, 0);
	glBegin(GL_POLYGON); //dexter's hair
	glColor3f(1.0f, 0.549f, 0.0f);
	glVertex3f(100.0f, 55.0f, 0.0f);
	glColor3f(1.0f, 0.549f, 0.0f);
	glVertex3f(100.0f, 60.0f, 0.0f);
	glColor3f(1.0f, 0.549f, 0.0f);
	glVertex3f(115.0f, 60.0f, 0.0f);
	glColor3f(1.0f, 0.549f, 0.0f);
	glVertex3f(115.0f, 55.0f, 0.0f);
	glEnd();
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();
	glTranslated(keyX, 0, 0);
	//glRotated(angle, vectX, vectY, vectZ);
	glBegin(GL_LINES); //dexter's arms
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(100.0f, 38.0f, 0.0f); //lower point
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(93.0f, 45.0f, 0.0f); //upper point
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(keyX, 0, 0);
	glBegin(GL_LINES); //dexter's arms
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(100.0f, 35.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(93.0f, 42.0f, 0.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(keyX, keyY, 0);
	glBegin(GL_QUADS); //hammer1
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(93.0f, 45.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(93.0f, 55.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(95.0f, 55.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(95.0f, 45.0f, 0.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(keyX, keyY, 0);
	glBegin(GL_POLYGON); //hammer2
	glColor3f(0.663f, 0.663f, 0.663f);
	glVertex3f(91.0f, 56.0f, 0.0f);
	glColor3f(0.663f, 0.663f, 0.663f);
	glVertex3f(92.0f, 57.0f, 0.0f);
	glColor3f(0.663f, 0.663f, 0.663f);
	glVertex3f(96.0f, 57.0f, 0.0f);
	glColor3f(0.663f, 0.663f, 0.663f);
	glVertex3f(96.0f, 55.0f, 0.0f);
	glColor3f(0.663f, 0.663f, 0.663f);
	glVertex3f(92.0f, 55.0f, 0.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(keyX, 0, 0);
	glBegin(GL_POLYGON); //dexter's labcoat
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(100.0f, 30.0f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(100.0f, 40.0f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(115.0f, 40.0f, 0.0f);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(115.0f, 30.0f, 0.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(keyX, 0, 0);
	glPointSize(2.0); // button1
	glBegin(GL_POINTS); // render with points
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2i(107.5, 32); //display a point
	//glVertex2i(5, 5);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(keyX, 0, 0);
	glPointSize(2.0); // button2
	glBegin(GL_POINTS); // render with points
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2i(107.5, 35); //display a point
	//glVertex2i(5, 5);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(keyX, 0, 0);
	glPointSize(2.0); // button3
	glBegin(GL_POINTS); // render with points
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2i(107.5, 38); //display a point
	//glVertex2i(5, 5);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(keyX, 0, 0);
	glBegin(GL_TRIANGLES); //dexter's left foot
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(107.0f, 30.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(100.0f, 25.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(107.0f, 25.0f, 0.0f);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslated(keyX, 0, 0);
	glBegin(GL_TRIANGLES); //dexter's right foot
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(107.5f, 30.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(107.5f, 25.0f, 0.0f);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(114.5f, 25.0f, 0.0f);
	glEnd();
	glPopMatrix();

	glFlush();
}


void key(unsigned char k, int x, int y)//keyboard function, takes 3 parameters
									// k is the key pressed from the keyboard
									// x and y are mouse postion when the key was pressed.
{
	if (k == 'x')
	{
		int dist = 255 - 42;
		for (int i = 0; i < dist; i++)
		{
			keyY += 1;
		}
	}
	glutPostRedisplay();//redisplay to update the screen with the changes
}

void spe(int k, int x, int y)// keyboard special key function takes 3 parameters
							// int k: is the special key pressed such as the keyboard arrows the f1,2,3 and so on
{
	if (k == GLUT_KEY_RIGHT)//if the letter d is pressed, then the object will be translated in the x axis by 10 (moving to the right).
	{
		keyX += 5;
		//vectY = 1;
		//angle = 180;
	}

	if (k == GLUT_KEY_LEFT)//if the letter a is pressed, then the object will be translated in the x axis by -10 (moving to the left).
		keyX -= 5;

	glutPostRedisplay();//redisplay to update the screen with the changes

}


void passM(int x, int y)//passive motion function takes 2 parameters the x and y positions of the mouse
						//it allows the user to make use of the mouse motion without clicking on the mouse buttons
{
	passX = x;//it moves the red square center to the mouse location.
	passY = y;
	glutPostRedisplay();
}

void time(int val)//timer animation function, allows the user to pass an integer valu to the timer function.
{
	if (keyY != 0) //if the hammer is not in Dexter's hands, return it to his hands.
		keyY = 0;
	glutPostRedisplay();						// redraw 		
	glutTimerFunc(1000, time, 0);					//recall the time function after 1000 ms and pass a zero value as an input to the time func.
}

void main(int argc, char** argr) {
	glutInit(&argc, argr);

	glutInitWindowSize(800, 600);
	glutInitWindowPosition(290, 80);

	glutCreateWindow("OpenGL - 2D Template");
	glutDisplayFunc(Display);
	glutKeyboardFunc(key);
	//glutSpecialFunc(spe);			//call the keyboard special keys function
	glutTimerFunc(0, time, 0);		//call the timer function
	glutPassiveMotionFunc(passM);	//call the passive motion function
	
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	gluOrtho2D(0.0, 300, 0.0, 300);

	glutMainLoop();
}
