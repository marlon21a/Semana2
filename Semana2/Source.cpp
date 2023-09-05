#include <GL/glut.h>
#include <math.h>

void cielo() {
	glBegin(GL_POLYGON);
	     glColor3ub(253, 40, 6);
		 glVertex2d(0, 8.5);
		 glVertex2d(12, 8.5);
		 glColor3ub(248, 201, 155);
		 glVertex2d(12, 2.5);
		 glVertex2d(0, 2.5);

		 glEnd();

}

void mar() {

	glBegin(GL_POLYGON);
	glColor3ub(250, 42, 9);
	glVertex2d(0, 2.5);
	glVertex2d(12, 2.5);
	glColor3ub(3, 173, 237);
	glVertex2d(12, 0);
	glVertex2d(0, 0);

	glEnd();
}

void sol1() {
	float radio = 3.13;
	float cx, cy;
	glBegin(GL_POLYGON);
	glColor3ub(250, 218, 186)

}

void dibujar() 
{
	glLoadIdentity();
	gluOrtho2D(0, 12, 0, 8.5);
	glClear(GL_COLOR_BUFFER_BIT);

	cielo();
	mar();

	glFlush();
}


int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Semana 2 - Primiiivas");
	glutDisplayFunc(dibujar);
	glutMainLoop();
	return 0;

}

/*glLoadIdentity();
gluOrtho2D(0, 10, 0, 10);
glClear(GL_COLOR_BUFFER_BIT);

glLineWidth(5);
   glBegin(GL_TRIANGLES);

   glColor3ub(255, 50, 30);
   glVertex2d(2, 5);
   glVertex2d(4, 8);
   glVertex2d(5, 5);

   glEnd();

   glFlush();

   glLineWidth(5);
   glBegin(GL_QUADS);

   glColor3ub(14, 100, 80);
   glVertex2d(2, 1);
   glVertex2d(2, 5);
   glVertex2d(5, 5);
   glVertex2d(5, 1);
   glColor3ub(14, 20, 100);
   glVertex2d(4, 8);
   glVertex2d(5, 5);
   glVertex2d(9, 5);
   glVertex2d(8, 8);
   glColor3ub(100, 20, 80);
   glVertex2d(5, 1);
   glVertex2d(5, 5);
   glVertex2d(9, 5);
   glVertex2d(9, 1);
   glColor3ub(50, 20, 80);
   glVertex2d(2.5, 1);
   glVertex2d(2.5, 4);
   glVertex2d(4.5, 4);
   glVertex2d(4.5, 1);



glEnd();

glFlush();



glLineWidth(5);
glBegin(GL_QUADS);

glColor3ub(255, 50, 30);
glVertex2d(1, 1);
glVertex2d(1, 7);
glColor3ub(15, 50, 30);
glVertex2d(7, 7);
glVertex2d(7, 1);
glEnd();
glFlush();

float radio = 4;

float cx, cy;



glColor3ub(55, 200, 80);



glBegin(GL_LINE_STRIP);



for (double i = 0; i < 3.14 * 2; i += 0.001) {

	cx = radio * cos(i);

	cy = radio * sin(i);

	glVertex2d(5 + cx, 5 + cy);

}

glEnd();

glFlush();

*/