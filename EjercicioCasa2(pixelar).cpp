/*Flores Molina Miguel de Jesús
GRUPO:03
Version 2017
*/
#include <windows.h>
#include <Gl/glut.h>
void dibujar(void)
{
	glClearColor(1.0, 1.0, 1.0, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();

	glMatrixMode(GL_MODELVIEW);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glOrtho(-22.0, 22.0, -22.0, 22.0, 0.1, 2.0);

	//Inicio de la parte derecha 
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.4);
	glVertex3f(11.0f, 12.0f, -1.0f);
	glVertex3f(12.0f, 12.0f, -1.0f);
	glVertex3f(12.0f, 11.0f, -1.0f);
	glVertex3f(11.0f, 11.0f, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(10.0f, 12.0f, -1.0f);
	glVertex3f(11.0f, 12.0f, -1.0f);
	glVertex3f(11.0f, 11.0f, -1.0f);
	glVertex3f(10.0f, 11.0f, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.76, 1.0);
	glVertex3f(11.0f, 11.0f, -1.0f);
	glVertex3f(13.0f, 11.0f, -1.0f);
	glVertex3f(13.0f, 7.0f, -1.0f);
	glVertex3f(11.0f, 7.0f, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.76, 1.0);
	glVertex3f(11, 9.0f, -1.0f);
	glVertex3f(10, 9, -1.0f);
	glVertex3f(10, 7, -1.0f);
	glVertex3f(11, 7, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.76, 1.0);
	glVertex3f(10, 7, -1.0f);
	glVertex3f(12, 7, -1.0f);
	glVertex3f(12, 3, -1.0f);
	glVertex3f(10, 3, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.76, 1.0);
	glVertex3f(12, 6.0f, -1.0f);
	glVertex3f(13, 6, -1.0f);
	glVertex3f(13, 4, -1.0f);
	glVertex3f(12, 4, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.76, 1.0);
	glVertex3f(9, 7, -1.0f);
	glVertex3f(10, 7, -1.0f);
	glVertex3f(10, 3, -1.0f);
	glVertex3f(9, 3, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(9, 11, -1.0f);
	glVertex3f(10, 11, -1.0f);
	glVertex3f(10, 9, -1.0f);
	glVertex3f(9, 9, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(11, 11, -1.0f);
	glVertex3f(10, 11, -1.0f);
	glVertex3f(10, 9, -1.0f);
	glVertex3f(11, 9, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(9, 9, -1.0f);
	glVertex3f(10, 9, -1.0f);
	glVertex3f(10, 7, -1.0f);
	glVertex3f(9, 7, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(8, 9, -1.0f);
	glVertex3f(9, 9, -1.0f);
	glVertex3f(9, 7, -1.0f);
	glVertex3f(8, 7, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(8, 7, -1.0f);
	glVertex3f(9, 7, -1.0f);
	glVertex3f(9, 4, -1.0f);
	glVertex3f(8, 4, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.76, 1.0);
	glVertex3f(8, 4, -1.0f);
	glVertex3f(9, 4, -1.0f);
	glVertex3f(9, 3, -1.0f);
	glVertex3f(8, 3, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.76, 1.0);
	glVertex3f(10, 3, -1.0f);
	glVertex3f(11, 3, -1.0f);
	glVertex3f(11, 1, -1.0f);
	glVertex3f(10, 1, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(11, 3, -1.0f);
	glVertex3f(12, 3, -1.0f);
	glVertex3f(12, 2, -1.0f);
	glVertex3f(11, 2, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(8, 4, -1.0f);
	glVertex3f(9, 4, -1.0f);
	glVertex3f(9, 3, -1.0f);
	glVertex3f(8, 3, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(9, 3, -1.0f);
	glVertex3f(10, 3, -1.0f);
	glVertex3f(10, -3, -1.0f);
	glVertex3f(9, -3, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(10, 1, -1.0f);
	glVertex3f(11, 1, -1.0f);
	glVertex3f(11, 0, -1.0f);
	glVertex3f(10, 0, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.9, 1.0);
	glVertex3f(8, 3, -1.0f);
	glVertex3f(9, 3, -1.0f);
	glVertex3f(9, -1, -1.0f);
	glVertex3f(8, -1, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(8, -1, -1.0f);
	glVertex3f(9, -1, -1.0f);
	glVertex3f(9, -4, -1.0f);
	glVertex3f(8, -4, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(7, 5, -1.0f);
	glVertex3f(8, 5, -1.0f);
	glVertex3f(8, 4, -1.0f);
	glVertex3f(7, 4, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.9, 1.0);
	glVertex3f(7, 4, -1.0f);
	glVertex3f(8, 4, -1.0f);
	glVertex3f(8, 3, -1.0f);
	glVertex3f(7, 3, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(7, 3, -1.0f);
	glVertex3f(8, 3, -1.0f);
	glVertex3f(8, -1, -1.0f);
	glVertex3f(7, -1, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.9, 1.0);
	glVertex3f(7, -1, -1.0f);
	glVertex3f(8, -1, -1.0f);
	glVertex3f(8, -2, -1.0f);
	glVertex3f(7, -2, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(7, -2, -1.0f);
	glVertex3f(8, -2, -1.0f);
	glVertex3f(8, -5, -1.0f);
	glVertex3f(7, -5, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.9, 1.0);
	glVertex3f(7, -4, -1.0f);
	glVertex3f(-6, -4, -1.0f);
	glVertex3f(-6, -5, -1.0f);
	glVertex3f(7, -5, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(7, 5, -1.0f);
	glVertex3f(6, 5, -1.0f);
	glVertex3f(6, 6, -1.0f);
	glVertex3f(7, 6, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.9, 1.0);
	glVertex3f(7, 4, -1.0f);
	glVertex3f(6, 4, -1.0f);
	glVertex3f(6, 5, -1.0f);
	glVertex3f(7, 5, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(7, 0, -1.0f);
	glVertex3f(6, 0, -1.0f);
	glVertex3f(6, 4, -1.0f);
	glVertex3f(7, 4, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(7, -2, -1.0f);
	glVertex3f(6, -2, -1.0f);
	glVertex3f(6, -1, -1.0f);
	glVertex3f(7, -1, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(7, -2, -1.0f);
	glVertex3f(6, -2, -1.0f);
	glVertex3f(6, -1, -1.0f);
	glVertex3f(7, -1, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.9, 1.0);
	glVertex3f(7, -3, -1.0f);
	glVertex3f(5, -3, -1.0f);
	glVertex3f(5, -2, -1.0f);
	glVertex3f(7, -2, -1.0f);
	glEnd();
	//Tramo largo
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(7, -4, -1.0f);
	glVertex3f(-8, -4, -1.0f);
	glVertex3f(-8, -3, -1.0f);
	glVertex3f(7, -3, -1.0f);
	glEnd();
	//Fin de tramo largo
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(7, -12, -1.0f);
	glVertex3f(6, -12, -1.0f);
	glVertex3f(6, -8, -1.0f);
	glVertex3f(7, -8, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(6, 7, -1.0f);
	glVertex3f(4, 7, -1.0f);
	glVertex3f(4, 6, -1.0f);
	glVertex3f(6, 6, -1.0f);
	glEnd();
	//Tramo Largo 
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(6, 6, -1.0f);
	glVertex3f(-5, 6, -1.0f);
	glVertex3f(-5, 4, -1.0f);
	glVertex3f(6, 4, -1.0f);
	glEnd();
	//FIn de tramo largo ***
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.9, 1.0);
	glVertex3f(6, 4, -1.0f);
	glVertex3f(5, 4, -1.0f);
	glVertex3f(5, 3, -1.0f);
	glVertex3f(6, 3, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(6, 3, -1.0f);
	glVertex3f(5, 3, -1.0f);
	glVertex3f(5, 2, -1.0f);
	glVertex3f(6, 2, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(6, 1, -1.0f);
	glVertex3f(5, 1, -1.0f);
	glVertex3f(5, -2, -1.0f);
	glVertex3f(6, -2, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(6, -7, -1.0f);
	glVertex3f(3, -7, -1.0f);
	glVertex3f(3, -8, -1.0f);
	glVertex3f(6, -8, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(6, -8, -1.0f);
	glVertex3f(3, -8, -1.0f);
	glVertex3f(3, -9, -1.0f);
	glVertex3f(6, -9, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(6, -11, -1.0f);
	glVertex3f(4, -11, -1.0f);
	glVertex3f(4, -9, -1.0f);
	glVertex3f(6, -9, -1.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(6, -12, -1.0f);
	glVertex3f(3, -12, -1.0f);
	glVertex3f(3, -11, -1.0f);
	glVertex3f(6, -11, -1.0f);
	glEnd();
	//Tramo largo
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(6, -12, -1.0f);
	glVertex3f(3, -12, -1.0f);
	glVertex3f(3, -13, -1.0f);
	glVertex3f(6, -13, -1.0f);
	glEnd();
	//FIn del tramo largo
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(5, 4, -1.0f);
	glVertex3f(4, 4, -1.0f);
	glVertex3f(4, 3, -1.0f);
	glVertex3f(5, 3, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.9, 1.0);
	glVertex3f(5, 3, -1.0f);
	glVertex3f(4, 3, -1.0f);
	glVertex3f(4, 2, -1.0f);
	glVertex3f(5, 2, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(5, 2, -1.0f);
	glVertex3f(4, 2, -1.0f);
	glVertex3f(4, -1, -1.0f);
	glVertex3f(5, -1, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.9, 1.0);
	glVertex3f(5, -1, -1.0f);
	glVertex3f(4, -1, -1.0f);
	glVertex3f(4, -2, -1.0f);
	glVertex3f(5, -2, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(5, -2, -1.0f);
	glVertex3f(4, -2, -1.0f);
	glVertex3f(4, -3, -1.0f);
	glVertex3f(5, -3, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(5, -6, -1.0f);
	glVertex3f(4, -6, -1.0f);
	glVertex3f(4, -7, -1.0f);
	glVertex3f(5, -7, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(4, 10, -1.0f);
	glVertex3f(3, 10, -1.0f);
	glVertex3f(3, 7, -1.0f);
	glVertex3f(4, 7, -1.0f);
	glEnd();
	//Tramo largo
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(4, 7, -1.0f);
	glVertex3f(-3, 7, -1.0f);
	glVertex3f(-3, 6, -1.0f);
	glVertex3f(4, 6, -1.0f);
	glEnd();
	//fin de tramo largo 
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(4, 4, -1.0f);
	glVertex3f(3, 4, -1.0f);
	glVertex3f(3, 2, -1.0f);
	glVertex3f(4, 2, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.9, 1.0);
	glVertex3f(4, 2, -1.0f);
	glVertex3f(3, 2, -1.0f);
	glVertex3f(3, -1, -1.0f);
	glVertex3f(4, -1, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(4, -1, -1.0f);
	glVertex3f(3, -1, -1.0f);
	glVertex3f(3, -3, -1.0f);
	glVertex3f(4, -3, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(4, -5, -1.0f);
	glVertex3f(3, -5, -1.0f);
	glVertex3f(3, -6, -1.0f);
	glVertex3f(4, -6, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(4, -6, -1.0f);
	glVertex3f(3, -6, -1.0f);
	glVertex3f(3, -7, -1.0f);
	glVertex3f(4, -7, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(4, -9, -1.0f);
	glVertex3f(3, -9, -1.0f);
	glVertex3f(3, -11, -1.0f);
	glVertex3f(4, -11, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(3, 9, -1.0f);
	glVertex3f(2, 9, -1.0f);
	glVertex3f(2, 10, -1.0f);
	glVertex3f(3, 10, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(3, 8, -1.0f);
	glVertex3f(2, 8, -1.0f);
	glVertex3f(2, 9, -1.0f);
	glVertex3f(3, 9, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(3, 7, -1.0f);
	glVertex3f(2, 7, -1.0f);
	glVertex3f(2, 8, -1.0f);
	glVertex3f(3, 8, -1.0f);
	glEnd();
	//Tramo largo
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(3, 0, -1.0f);
	glVertex3f(-2, 0, -1.0f);
	glVertex3f(-2, 4, -1.0f);
	glVertex3f(3, 4, -1.0f);
	glEnd();
	//Fin del tramo largo 

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(3, -1, -1.0f);
	glVertex3f(2, -1, -1.0f);
	glVertex3f(2, 0, -1.0f);
	glVertex3f(3, 0, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(3, -2, -1.0f);
	glVertex3f(2, -2, -1.0f);
	glVertex3f(2, -1, -1.0f);
	glVertex3f(3, -1, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(3, -3, -1.0f);
	glVertex3f(2, -3, -1.0f);
	glVertex3f(2, -2, -1.0f);
	glVertex3f(3, -2, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(3, -8, -1.0f);
	glVertex3f(2, -8, -1.0f);
	glVertex3f(2, -5, -1.0f);
	glVertex3f(3, -5, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(3, -12, -1.0f);
	glVertex3f(2, -12, -1.0f);
	glVertex3f(2, -8, -1.0f);
	glVertex3f(3, -8, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(2, 8, -1.0f);
	glVertex3f(1, 8, -1.0f);
	glVertex3f(1, 9, -1.0f);
	glVertex3f(2, 9, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(2, 7, -1.0f);
	glVertex3f(1, 7, -1.0f);
	glVertex3f(1, 8, -1.0f);
	glVertex3f(2, 8, -1.0f);
	glEnd();
	//Tramo mediano
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(2, -3, -1.0f);
	glVertex3f(-1,-3, -1.0f);
	glVertex3f(-1, 0, -1.0f);
	glVertex3f(2, 0, -1.0f);
	glEnd();
	//fin de Tramo mediano
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.9, 1.0);
	glVertex3f(2, -6, -1.0f);
	glVertex3f(-1, -6, -1.0f);
	glVertex3f(-1, -5, -1.0f);
	glVertex3f(2, -5, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-1, 0, -1.0f);
	glVertex3f(-2, 0, -1.0f);
	glVertex3f(-2, -1, -1.0f);
	glVertex3f(-1, -1, -1.0f);
	glEnd();


	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-1, -1, -1.0f);
	glVertex3f(-2, -1, -1.0f);
	glVertex3f(-2, -2, -1.0f);
	glVertex3f(-1, -2, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-1, -2, -1.0f);
	glVertex3f(-2, -2, -1.0f);
	glVertex3f(-2, -3, -1.0f);
	glVertex3f(-1, -3, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(2, -9, -1.0f);
	glVertex3f(1, -9, -1.0f);
	glVertex3f(1, -6, -1.0f);
	glVertex3f(2, -6, -1.0f);
	glEnd();
	//Tramo mediano 
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.9, 1.0);
	glVertex3f(2, -11, -1.0f);
	glVertex3f(-1, -11, -1.0f);
	glVertex3f(-1, -9, -1.0f);
	glVertex3f(2, -9, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(2, -12, -1.0f);
	glVertex3f(-2, -12, -1.0f);
	glVertex3f(-2, -11, -1.0f);
	glVertex3f(2, -11, -1.0f);
	glEnd();
	//Fin de Tramo Mediano

	//Fin de tramo derecho

	//Lado Izquierdo
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(1, 9, -1.0f);
	glVertex3f(0, 9, -1.0f);
	glVertex3f(0, 10, -1.0f);
	glVertex3f(1, 10, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(1, 8, -1.0f);
	glVertex3f(0, 8, -1.0f);
	glVertex3f(0, 9, -1.0f);
	glVertex3f(1, 9, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(1, 7, -1.0f);
	glVertex3f(0, 7, -1.0f);
	glVertex3f(0, 8, -1.0f);
	glVertex3f(1, 8, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.9, 1.0);
	glVertex3f(1, -9, -1.0f);
	glVertex3f(0, -9, -1.0f);
	glVertex3f(0, -6, -1.0f);
	glVertex3f(1, -6, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0, -9, -1.0f);
	glVertex3f(-1, -9, -1.0f);
	glVertex3f(-1, -6, -1.0f);
	glVertex3f(0, -6, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-1, -11, -1.0f);
	glVertex3f(-2, -11, -1.0f);
	glVertex3f(-2, -8, -1.0f);
	glVertex3f(-1, -8, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-1, -8, -1.0f);
	glVertex3f(-2, -8, -1.0f);
	glVertex3f(-2, -5, -1.0f);
	glVertex3f(-1, -5, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0, 8, -1.0f);
	glVertex3f(-1, 8, -1.0f);
	glVertex3f(-1, 9, -1.0f);
	glVertex3f(0, 9, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(0, 7, -1.0f);
	glVertex3f(-1, 7, -1.0f);
	glVertex3f(-1, 8, -1.0f);
	glVertex3f(0, 8, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-1, 7, -1.0f);
	glVertex3f(-3, 7, -1.0f);
	glVertex3f(-3, 8, -1.0f);
	glVertex3f(-1, 8, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-3, 6, -1.0f);
	glVertex3f(-5, 6, -1.0f);
	glVertex3f(-5, 7, -1.0f);
	glVertex3f(-3, 7, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-3, 4, -1.0f);
	glVertex3f(-2, 4, -1.0f);
	glVertex3f(-2, 2, -1.0f);
	glVertex3f(-3, 2, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.9, 1.0);
	glVertex3f(-3, 2, -1.0f);
	glVertex3f(-2, 2, -1.0f);
	glVertex3f(-2, -1, -1.0f);
	glVertex3f(-3, -1, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-3, -1, -1.0f);
	glVertex3f(-2, -1, -1.0f);
	glVertex3f(-2, -3, -1.0f);
	glVertex3f(-3, -3, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-3, -5, -1.0f);
	glVertex3f(-2, -5, -1.0f);
	glVertex3f(-2, -6, -1.0f);
	glVertex3f(-3, -6, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-3, -6, -1.0f);
	glVertex3f(-2, -6, -1.0f);
	glVertex3f(-2, -7, -1.0f);
	glVertex3f(-3, -7, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-3, -9, -1.0f);
	glVertex3f(-2, -9, -1.0f);
	glVertex3f(-2, -11, -1.0f);
	glVertex3f(-3, -11, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.9, 1.0);
	glVertex3f(-5, 4, -1.0f);
	glVertex3f(-4, 4, -1.0f);
	glVertex3f(-4, 3, -1.0f);
	glVertex3f(-5, 3, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-5, 3, -1.0f);
	glVertex3f(-4, 3, -1.0f);
	glVertex3f(-4, 2, -1.0f);
	glVertex3f(-5, 2, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-5, 1, -1.0f);
	glVertex3f(-4, 1, -1.0f);
	glVertex3f(-4, -2, -1.0f);
	glVertex3f(-5, -2, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-2, -7, -1.0f);
	glVertex3f(-5, -7, -1.0f);
	glVertex3f(-5, -8, -1.0f);
	glVertex3f(-2, -8, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-2, -8, -1.0f);
	glVertex3f(-5, -8, -1.0f);
	glVertex3f(-5, -9, -1.0f);
	glVertex3f(-2, -9, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-5, -11, -1.0f);
	glVertex3f(-3, -11, -1.0f);
	glVertex3f(-3, -9, -1.0f);
	glVertex3f(-5, -9, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-5, -12, -1.0f);
	glVertex3f(-2, -12, -1.0f);
	glVertex3f(-2, -11, -1.0f);
	glVertex3f(-5, -11, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-4, 2, -1.0f);
	glVertex3f(-3, 2, -1.0f);
	glVertex3f(-3, -1, -1.0f);
	glVertex3f(-4, -1, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.9, 1.0);
	glVertex3f(-4, 3, -1.0f);
	glVertex3f(-3, 3, -1.0f);
	glVertex3f(-3, 2, -1.0f);
	glVertex3f(-4, 2, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-4, 4, -1.0f);
	glVertex3f(-3, 4, -1.0f);
	glVertex3f(-3, 3, -1.0f);
	glVertex3f(-4, 3, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.9, 1.0);
	glVertex3f(-4, -1, -1.0f);
	glVertex3f(-3, -1, -1.0f);
	glVertex3f(-3, -2, -1.0f);
	glVertex3f(-4, -2, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-4, -6, -1.0f);
	glVertex3f(-3, -6, -1.0f);
	glVertex3f(-3, -7, -1.0f);
	glVertex3f(-4, -7, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.9, 1.0);
	glVertex3f(-6, -2, -1.0f);
	glVertex3f(-4, -2, -1.0f);
	glVertex3f(-4, -3, -1.0f);
	glVertex3f(-6, -3, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-4, -2, -1.0f);
	glVertex3f(-3, -2, -1.0f);
	glVertex3f(-3, -3, -1.0f);
	glVertex3f(-4, -3, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-5, -12, -1.0f);
	glVertex3f(-2, -12, -1.0f);
	glVertex3f(-2, -13, -1.0f);
	glVertex3f(-5, -13, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-6, -8, -1.0f);
	glVertex3f(-5, -8, -1.0f);
	glVertex3f(-5, -12, -1.0f);
	glVertex3f(-6, -12, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-6, -1, -1.0f);
	glVertex3f(-5, -1, -1.0f);
	glVertex3f(-5, -2, -1.0f);
	glVertex3f(-6, -2, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-6, 4, -1.0f);
	glVertex3f(-5, 4, -1.0f);
	glVertex3f(-5, 0, -1.0f);
	glVertex3f(-6, 0, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.9, 1.0);
	glVertex3f(-6, 5, -1.0f);
	glVertex3f(-5, 5, -1.0f);
	glVertex3f(-5, 4, -1.0f);
	glVertex3f(-6, 4, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-6, 6, -1.0f);
	glVertex3f(-5, 6, -1.0f);
	glVertex3f(-5, 5, -1.0f);
	glVertex3f(-6, 5, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-7, 5, -1.0f);
	glVertex3f(-6, 5, -1.0f);
	glVertex3f(-6, 4, -1.0f);
	glVertex3f(-7, 4, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.9, 1.0);
	glVertex3f(-7, 4, -1.0f);
	glVertex3f(-6, 4, -1.0f);
	glVertex3f(-6, 3, -1.0f);
	glVertex3f(-7, 3, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-7, 3, -1.0f);
	glVertex3f(-6, 3, -1.0f);
	glVertex3f(-6, -1, -1.0f);
	glVertex3f(-7, -1, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.9, 1.0);
	glVertex3f(-7, -1, -1.0f);
	glVertex3f(-6, -1, -1.0f);
	glVertex3f(-6, -2, -1.0f);
	glVertex3f(-7, -2, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-7, -2, -1.0f);
	glVertex3f(-6, -2, -1.0f);
	glVertex3f(-6, -3, -1.0f);
	glVertex3f(-7, -3, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-7, -4, -1.0f);
	glVertex3f(-6, -4, -1.0f);
	glVertex3f(-6, -5, -1.0f);
	glVertex3f(-7, -5, -1.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-8, -1, -1.0f);
	glVertex3f(-7, -1, -1.0f);
	glVertex3f(-7, -3, -1.0f);
	glVertex3f(-8, -3, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.9, 1.0);
	glVertex3f(-8, 3, -1.0f);
	glVertex3f(-7, 3, -1.0f);
	glVertex3f(-7, -1, -1.0f);
	glVertex3f(-8, -1, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-8, 4, -1.0f);
	glVertex3f(-7, 4, -1.0f);
	glVertex3f(-7, 3, -1.0f);
	glVertex3f(-8, 3, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-8, 9, -1.0f);
	glVertex3f(-7, 9, -1.0f);
	glVertex3f(-7, 7, -1.0f);
	glVertex3f(-8, 7, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-9, 3, -1.0f);
	glVertex3f(-8, 3, -1.0f);
	glVertex3f(-8, -3, -1.0f);
	glVertex3f(-9, -3, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.76, 1.0);
	glVertex3f(-9, 7, -1.0f);
	glVertex3f(-8, 7, -1.0f);
	glVertex3f(-8, 3, -1.0f);
	glVertex3f(-9, 3, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-9, 9, -1.0f);
	glVertex3f(-8, 9, -1.0f);
	glVertex3f(-8, 7, -1.0f);
	glVertex3f(-9, 7, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-8, 7, -1.0f);
	glVertex3f(-7, 7, -1.0f);
	glVertex3f(-7, 4, -1.0f);
	glVertex3f(-8, 4, -1.0f);
	glEnd();
	
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-10, 11.0f, -1.0f);
	glVertex3f(-9,11, -1.0f);
	glVertex3f(-9, 9, -1.0f);
	glVertex3f(-10, 9, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-9, 11, -1.0f);
	glVertex3f(-8, 11, -1.0f);
	glVertex3f(-8, 9, -1.0f);
	glVertex3f(-9, 9, -1.0f);
	glEnd();	
	
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.76, 1.0);
	glVertex3f(-11, 9.0f, -1.0f);
	glVertex3f(-9, 9, -1.0f);
	glVertex3f(-9, 3, -1.0f);
	glVertex3f(-11, 3, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.76, 1.0);
	glVertex3f(-12.0f, 11.0f, -1.0f);
	glVertex3f(-10.0f, 11.0f, -1.0f);
	glVertex3f(-10.0f, 9.0f, -1.0f);
	glVertex3f(-12.0f, 9.0f, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.76, 1.0);
	glVertex3f(-10.0f, 3.0f, -1.0f);
	glVertex3f(-9.0f, 3.0f, -1.0f);
	glVertex3f(-9.0f, 1.0f, -1.0f);
	glVertex3f(-10.0f, 1.0f, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-10.0f, 1.0f, -1.0f);
	glVertex3f(-9.0f, 1.0f, -1.0f);
	glVertex3f(-9.0f, 0.0f, -1.0f);
	glVertex3f(-10.0f, 0.0f, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-10.0f, 3.0f, -1.0f);
	glVertex3f(-11.0f, 3.0f, -1.0f);
	glVertex3f(-11.0f, 2.0f, -1.0f);
	glVertex3f(-10.0f, 2.0f, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-11.0f, 12.0f, -1.0f);
	glVertex3f(-12.0f, 12.0f, -1.0f);
	glVertex3f(-12.0f, 11.0f, -1.0f);
	glVertex3f(-11.0f, 11.0f, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-10.0f, 12.0f, -1.0f);
	glVertex3f(-11.0f, 12.0f, -1.0f);
	glVertex3f(-11.0f, 11.0f, -1.0f);
	glVertex3f(-10.0f, 11.0f, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.76, 1.0);
	glVertex3f(-12, 8, -1.0f);
	glVertex3f(-11, 8, -1.0f);
	glVertex3f(-11, 4, -1.0f);
	glVertex3f(-12, 4, -1.0f);
	glEnd();
	//Fin de parte derecha 
	glFlush();
}

int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(900, 900);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("ARF_ARF");
	glutDisplayFunc(dibujar);
	//glutReshapeFunc(reshape);
	//glutKeyboardFunc(teclado);
	glutMainLoop();
	return 0;
}
