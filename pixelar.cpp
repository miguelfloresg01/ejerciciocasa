/*VILLAGOMEZ CHAVEZ LUIS FERNANDO
GRUPO:03
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
	/*
	//INICIA_NARIZ
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-2.0f, -2.5f, -1.0f);
	glVertex3f(-2.0f, 1.5f, -1.0f);
	glVertex3f(2.0f, 1.5f, -1.0f);
	glVertex3f(2.0f, -2.5f, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-3.5f, -1.0f, -1.0f);
	glVertex3f(-3.5f, 0.0f, -1.0f);
	glVertex3f(-2.0f, 0.0f, -1.0f);
	glVertex3f(-2.0f, -1.0f, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-3.5f, -1.0f, -1.0f);
	glVertex3f(-3.5f, 0.0f, -1.0f);
	glVertex3f(-2.0f, 0.0f, -1.0f);
	glVertex3f(-2.0f, -1.0f, -1.0f);
	glEnd();
	*/
	//Fin de Nariz
	//Inicio de la parte de la oreja derecha 
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
	glColor3f(1.0, 0.7, 1.0);
	glVertex3f(11.0f, 11.0f, -1.0f);
	glVertex3f(13.0f, 11.0f, -1.0f);
	glVertex3f(13.0f, 7.0f, -1.0f);
	glVertex3f(11.0f, 7.0f, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.7, 1.0);
	glVertex3f(11, 9.0f, -1.0f);
	glVertex3f(10, 9, -1.0f);
	glVertex3f(10, 7, -1.0f);
	glVertex3f(11, 7, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.7, 1.0);
	glVertex3f(10, 7, -1.0f);
	glVertex3f(12, 7, -1.0f);
	glVertex3f(12, 3, -1.0f);
	glVertex3f(10, 3, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.7, 1.0);
	glVertex3f(12, 6.0f, -1.0f);
	glVertex3f(13, 6, -1.0f);
	glVertex3f(13, 4, -1.0f);
	glVertex3f(12, 4, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.7, 1.0);
	glVertex3f(9, 7, -1.0f);
	glVertex3f(10, 7, -1.0f);
	glVertex3f(10, 3, -1.0f);
	glVertex3f(9, 3, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(9, 11, -1.0f);
	//glColor3f(0.0, 0.0, 0.0);
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
	//glColor3f(0.0, 0.0, 0.0);
	glVertex3f(9, 7, -1.0f);
	glVertex3f(9, 4, -1.0f);
	glVertex3f(8, 4, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.7, 1.0);
	glVertex3f(8, 4, -1.0f);
	//glColor3f(0.0, 0.0, 0.0);
	glVertex3f(9, 4, -1.0f);
	glVertex3f(9, 3, -1.0f);
	glVertex3f(8, 3, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.7, 1.0);
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
	glColor3f(0.0, 0.85, 1.0);
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
	glColor3f(0.0, 0.85, 1.0);
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
	glColor3f(0.0, 0.85, 1.0);
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
	glColor3f(0.0, 0.85, 1.0);
	glVertex3f(7, -4, -1.0f);
	glVertex3f(-7, -4, -1.0f);
	glVertex3f(-7, -5, -1.0f);
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
	glColor3f(0.0, 0.85, 1.0);
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

	//oreja izquierda
		glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.4);
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
	glColor3f(1.0, 0.7, 1.0);
	glVertex3f(-12.0f, 11.0f, -1.0f);
	glVertex3f(-10.0f, 11.0f, -1.0f);
	glVertex3f(-10.0f, 9.0f, -1.0f);
	glVertex3f(-12.0f, 9.0f, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.1, 1.0);
	glVertex3f(-10, 11.0f, -1.0f);
	glVertex3f(-9,11, -1.0f);
	glVertex3f(-9, 9, -1.0f);
	glVertex3f(-10, 9, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.7, 1.0);
	glVertex3f(-9, 11, -1.0f);
	glVertex3f(-8, 11, -1.0f);
	glVertex3f(-8, 9, -1.0f);
	glVertex3f(-9, 9, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0.7, 0);
	glVertex3f(-11, 9.0f, -1.0f);
	glVertex3f(-9, 9, -1.0f);
	glVertex3f(-9, 3, -1.0f);
	glVertex3f(-11, 3, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, 0, 1.0);
	glVertex3f(-9, 9, -1.0f);
	glVertex3f(-8, 9, -1.0f);
	glVertex3f(-8, 7, -1.0f);
	glVertex3f(-9, 7, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(-8, 9, -1.0f);
	//glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-7, 9, -1.0f);
	glVertex3f(-7, 7, -1.0f);
	glVertex3f(-8, 7, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 1.0);
	glVertex3f(-8, 7, -1.0f);
	glVertex3f(-7, 7, -1.0f);
	glVertex3f(-7, 4, -1.0f);
	glVertex3f(-8, 4, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 1.0, 1.0);
	glVertex3f(-9, 7, -1.0f);
	glVertex3f(-8, 7, -1.0f);
	glVertex3f(-8, 3, -1.0f);
	glVertex3f(-9, 3, -1.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-12, 8, -1.0f);
	glVertex3f(-11, 8, -1.0f);
	glVertex3f(-11, 4, -1.0f);
	glVertex3f(-12, 4, -1.0f);
	glEnd();

	//glBegin(GL_QUADS);
	//glColor3f(0.0, 0.0, 1.0);
	//glVertex3f(8, 7, -1.0f);
	////glColor3f(0.0, 0.0, 0.0);
	//glVertex3f(9, 7, -1.0f);
	//glVertex3f(9, 4, -1.0f);
	//glVertex3f(8, 4, -1.0f);
	//glEnd();

	//glBegin(GL_QUADS);
	//glColor3f(1.0, 0.7, 1.0);
	//glVertex3f(8, 4, -1.0f);
	////glColor3f(0.0, 0.0, 0.0);
	//glVertex3f(9, 4, -1.0f);
	//glVertex3f(9, 3, -1.0f);
	//glVertex3f(8, 3, -1.0f);
	//glEnd();

	//glBegin(GL_QUADS);
	//glColor3f(1.0, 0.7, 1.0);
	//glVertex3f(10, 3, -1.0f);
	//glVertex3f(11, 3, -1.0f);
	//glVertex3f(11, 1, -1.0f);
	//glVertex3f(10, 1, -1.0f);
	//glEnd();

	//glBegin(GL_QUADS);
	//glColor3f(0.0, 0.0, 0.0);
	//glVertex3f(11, 3, -1.0f);
	//glVertex3f(12, 3, -1.0f);
	//glVertex3f(12, 2, -1.0f);
	//glVertex3f(11, 2, -1.0f);
	//glEnd();

	//glBegin(GL_QUADS);
	//glColor3f(0.0, 0.0, 0.0);
	//glVertex3f(8, 4, -1.0f);
	//glVertex3f(9, 4, -1.0f);
	//glVertex3f(9, 3, -1.0f);
	//glVertex3f(8, 3, -1.0f);
	//glEnd();

	//glBegin(GL_QUADS);
	//glColor3f(0.0, 0.0, 0.0);
	//glVertex3f(9, 3, -1.0f);
	//glVertex3f(10, 3, -1.0f);
	//glVertex3f(10, -3, -1.0f);
	//glVertex3f(9, -3, -1.0f);
	//glEnd();

	//glBegin(GL_QUADS);
	//glColor3f(0.0, 0.0, 0.0);
	//glVertex3f(10, 1, -1.0f);
	//glVertex3f(11, 1, -1.0f);
	//glVertex3f(11, 0, -1.0f);
	//glVertex3f(10, 0, -1.0f);
	//glEnd();

	//glBegin(GL_QUADS);
	//glColor3f(0.0, 0.85, 1.0);
	//glVertex3f(8, 3, -1.0f);
	//glVertex3f(9, 3, -1.0f);
	//glVertex3f(9, -1, -1.0f);
	//glVertex3f(8, -1, -1.0f);
	//glEnd();

	//glBegin(GL_QUADS);
	//glColor3f(0.0, 0.0, 1.0);
	//glVertex3f(8, -1, -1.0f);
	//glVertex3f(9, -1, -1.0f);
	//glVertex3f(9, -4, -1.0f);
	//glVertex3f(8, -4, -1.0f);
	//glEnd();

	//glBegin(GL_QUADS);
	//glColor3f(0.0, 0.0, 0.0);
	//glVertex3f(7, 5, -1.0f);
	//glVertex3f(8, 5, -1.0f);
	//glVertex3f(8, 4, -1.0f);
	//glVertex3f(7, 4, -1.0f);
	//glEnd();

	//glBegin(GL_QUADS);
	//glColor3f(0.0, 0.75, 1.0);
	//glVertex3f(7, 4, -1.0f);
	//glVertex3f(8, 4, -1.0f);
	//glVertex3f(8, 3, -1.0f);
	//glVertex3f(7, 3, -1.0f);
	//glEnd();

	//glBegin(GL_QUADS);
	//glColor3f(0.0, 0.0, 0.0);
	//glVertex3f(7, 3, -1.0f);
	//glVertex3f(8, 3, -1.0f);
	//glVertex3f(8, -1, -1.0f);
	//glVertex3f(7, -1, -1.0f);
	//glEnd();

	//glBegin(GL_QUADS);
	//glColor3f(0.0, 0.75, 1.0);
	//glVertex3f(7, -1, -1.0f);
	//glVertex3f(8, -1, -1.0f);
	//glVertex3f(8, -2, -1.0f);
	//glVertex3f(7, -2, -1.0f);
	//glEnd();
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



