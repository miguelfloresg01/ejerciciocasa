/*Flores Molina Miguel de Jesús
Version 2017
PRACTICA #03
INTRUCCIONES:
Q --->La camara se mueve hacia arriba
E --->La camara se mueve hacia abajo
W --->La camara se mueve hacia enfrente
S --->La camara se mueve hacia atras
A --->La camara se mueve hacia la izquierda
D --->La camara se mueve hacia la derecha
*/
#include <GL/glut.h>

float transZ = -10.0f;
float transX = 0.0f;
float transY = 0.0f;

float angleX = 0.0f;
float angleY = 0.0f;

float negro[3] = { 0.00,0.0,0.0 };
float rojo[3] = { 1, 0, 0 };
float amarillo[3] = { 0.8, 1, 0.0};

void inicializar(void)
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClearDepth(1.0f);
	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

//función para dibujar un cubo a partir de polígonos
void prisma(void)
{
	GLfloat vertice[8][3] = {
	 { 0.5 ,-0.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ -0.5 ,-0.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ -0.5 ,-0.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 0.5 ,-0.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 0.5 ,0.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 0.5 ,0.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ -0.5 ,0.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ -0.5 ,0.5, 0.5 },    //Coordenadas Vértice 7 V7
	};

	glBegin(GL_POLYGON); //Enfrente
	glColor3fv(negro);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON); //Derecha
	glColor3fv(negro);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON); //Atrás
	glColor3fv(negro);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Izquierda
	glColor3fv(negro);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Abajo
	glColor3fv(negro);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Arriba
	glColor3fv(negro);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
void prismaR(void)
{
	GLfloat vertice[8][3] = {
	 { 0.5 ,-0.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ -0.5 ,-0.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ -0.5 ,-0.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 0.5 ,-0.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 0.5 ,0.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 0.5 ,0.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ -0.5 ,0.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ -0.5 ,0.5, 0.5 },    //Coordenadas Vértice 7 V7
	};

	glBegin(GL_POLYGON); //Enfrente
	glColor3fv(rojo);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON); //Derecha
	glColor3fv(rojo);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON); //Atrás
	glColor3fv(rojo);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Izquierda
	glColor3fv(rojo);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Abajo
	glColor3fv(rojo);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Arriba
	glColor3fv(rojo);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}
void prismamarillo(void)
{
	GLfloat vertice[8][3] = {
	 { 0.5 ,-0.5, 0.5 },    //Coordenadas Vértice 0 V0
	{ -0.5 ,-0.5, 0.5 },    //Coordenadas Vértice 1 V1
	{ -0.5 ,-0.5, -0.5 },    //Coordenadas Vértice 2 V2
	{ 0.5 ,-0.5, -0.5 },    //Coordenadas Vértice 3 V3
	{ 0.5 ,0.5, 0.5 },    //Coordenadas Vértice 4 V4
	{ 0.5 ,0.5, -0.5 },    //Coordenadas Vértice 5 V5
	{ -0.5 ,0.5, -0.5 },    //Coordenadas Vértice 6 V6
	{ -0.5 ,0.5, 0.5 },    //Coordenadas Vértice 7 V7
	};

	glBegin(GL_POLYGON); //Enfrente
	glColor3fv(amarillo);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON); //Derecha
	glColor3fv(amarillo);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON); //Atrás
	glColor3fv(amarillo);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Izquierda
	glColor3fv(amarillo);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Abajo
	glColor3fv(amarillo);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Arriba
	glColor3fv(amarillo);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void contorno(void)
{

	glTranslatef(0, 10, 0);
	glPushMatrix();
	glColor3f(0, 0, 0);
	glScalef(4.0, 1.0, 1);
	prisma();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 0);
	glTranslatef(3, -1, 0);
	glScalef(2.0, 1.0, 1);
	prisma();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 0);
	glTranslatef(4.5, -2, 0);
	glScalef(1.0, 1.0, 1);
	prisma();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 0);
	glTranslatef(5.5, -3, 0);
	glScalef(1.0, 1.0, 1);
	prisma();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 0);
	glTranslatef(6.5, -4.5, 0);
	glScalef(1.0, 2.0, 1);
	prisma();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 0);
	glTranslatef(7.5, -8, 0);
	glScalef(1.0, 5.0, 1);
	prisma();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 0);
	glTranslatef(6.5, -11.5, 0);
	glScalef(1.0, 2.0, 1);
	prisma();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 0);
	glTranslatef(5, -13, 0);
	glScalef(2.0, 1.0, 1);
	prisma();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 0);
	glTranslatef(3.5, -14, 0);
	glScalef(1.0, 1.0, 1);
	prisma();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 0);
	glTranslatef(2.5, -15, 0);
	glScalef(1.0, 1.0, 1);
	prisma();
	glPopMatrix();

	//IZQUIERda
	glPushMatrix();
	glColor3f(0, 0, 0);
	glTranslatef(-3, -1, 0);
	glScalef(2.0, 1.0, 1);
	prisma();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 0);
	glTranslatef(-4.5, -2, 0);
	glScalef(1.0, 1.0, 1);
	prisma();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 0);
	glTranslatef(-5.5, -3, 0);
	glScalef(1.0, 1.0, 1);
	prisma();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 0);
	glTranslatef(-6.5, -4.5, 0);
	glScalef(1.0, 2.0, 1);
	prisma();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 0);
	glTranslatef(-7.5, -8, 0);
	glScalef(1.0, 5.0, 1);
	prisma();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 0);
	glTranslatef(-6.5, -11.5, 0);
	glScalef(1.0, 2.0, 1);
	prisma();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 0);
	glTranslatef(-5, -13, 0);
	glScalef(2.0, 1.0, 1);
	prisma();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 0);
	glTranslatef(-3.5, -14, 0);
	glScalef(1.0, 1.0, 1);
	prisma();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 0);
	glTranslatef(-2.5, -15, 0);
	glScalef(1.0, 1.0, 1);
	prisma();
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 0);
	glTranslatef(0, -16, 0);
	glScalef(4.0, 1.0, 1);
	prisma();
	glPopMatrix();
}

void boca(void)
{
	glTranslatef(0, 10, 0);
	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0, -13, 0);
	glScalef(2, 1.0, 1);
	prisma();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0, -12, 0);
	glScalef(4, 1.0, 1);
	prisma();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0, -11, 0);
	glScalef(6, 1.0, 1);
	prisma();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0, -10, 0);
	glScalef(8, 1.0, 1);
	prisma();
	glPopMatrix();
}
void cara(void)
{
	glPushMatrix();
	contorno();
	glPopMatrix();
	glPushMatrix();
	boca();
	glPopMatrix();
	glTranslatef(0, 10, 0);

	//relleno
	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0, -1, 0);
	glScalef(4, 1, 1);
	prismamarillo();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0, -2, 0);
	glScalef(8, 1, 1);
	prismamarillo();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0, -3, 0);
	glScalef(10, 1, 1);
	prismamarillo();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0, -15, 0);
	glScalef(4, 1, 1);
	prismamarillo();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0, -14, 0);
	glScalef(6, 1, 1);
	prismamarillo();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(-2.5, -13, 0);
	glScalef(3, 1, 1);
	prismamarillo();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(2.5, -13, 0);
	glScalef(3, 1, 1);
	prismamarillo();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(-4, -12, 0);
	glScalef(4, 1, 1);
	prismamarillo();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(4, -12, 0);
	glScalef(4, 1, 1);
	prismamarillo();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(-4.5, -11, 0);
	glScalef(3, 1, 1);
	prismamarillo();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(4.5, -11, 0);
	glScalef(3, 1, 1);
	prismamarillo();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(-5.5, -10, 0);
	glScalef(3, 1, 1);
	prismamarillo();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(5.5, -10, 0);
	glScalef(3, 1, 1);
	prismamarillo();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0, -9, 0);
	glScalef(14, 1, 1);
	prismamarillo();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0, -8, 0);
	glScalef(14, 1, 1);
	prismamarillo();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0, -7, 0);
	glScalef(4, 1, 1);
	prismamarillo();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(5, -7, 0);
	glScalef(4, 1, 1);
	prismamarillo();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(-5, -7, 0);
	glScalef(4, 1, 1);
	prismamarillo();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(2.5, -4, 0);
	glScalef(1, 1, 1);
	prismamarillo();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(-2.5, -4, 0);
	glScalef(1, 1, 1);
	prismamarillo();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(5, -4, 0);
	glScalef(2, 1, 1);
	prismamarillo();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(-5, -4, 0);
	glScalef(2, 1, 1);
	prismamarillo();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(5.2, -5, 0);
	glScalef(1.6, 1, 1);
	prismamarillo();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(-5.2, -5, 0);
	glScalef(1.6, 1, 1);
	prismamarillo();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(5.4, -6, 0);
	glScalef(3.2, 1, 1);
	prismamarillo();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(-5.4, -6, 0);
	glScalef(3.2, 1, 1);
	prismamarillo();
	glPopMatrix();
	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0, -4, 0);
	glScalef(2, 1, 1);
	prismamarillo();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0, -5, 0);
	glScalef(1, 1, 1);
	prismamarillo();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0, -6, 0);
	glScalef(2.4, 1, 1);
	prismamarillo();
	glPopMatrix();

	//OJOS
	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(1.5, -4, 0);
	glScalef(1, 1, 1);
	prismaR();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(-1.5, -4, 0);
	glScalef(1, 1, 1);
	prismaR();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(3.5, -4, 0);
	glScalef(1, 1, 1);
	prismaR();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(-3.5, -4, 0);
	glScalef(1, 1, 1);
	prismaR();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(2.5, -7, 0);
	glScalef(1, 1, 1);
	prismaR();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(-2.5, -7, 0);
	glScalef(1, 1, 1);
	prismaR();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(2.5, -6, 0);
	glScalef(2.6, 1, 1);
	prismaR();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(-2.5, -6, 0);
	glScalef(2.6, 1, 1);
	prismaR();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(2.5, -5, 0);
	glScalef(4, 1, 1);
	prismaR();
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(-2.5, -5, 0);
	glScalef(4, 1, 1);
	prismaR();
	glPopMatrix();

}

void dibujar(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);

	glLoadIdentity();

	glTranslatef(transX, transY, transZ);
	glRotatef(angleY, 0.0, 1.0, 0.0);
	glRotatef(angleX, 1.0, 0.0, 0.0);
	
	glRotatef(17, 0, -1, 0);
	cara();
	glFlush();
}

void remodelar(int width, int height)
{
	if (height == 0)
	{
		height = 1;
	}
	glViewport(0, 0, width, height);    //definir ventana (ancho, altura)
	glMatrixMode(GL_PROJECTION);        // guarda vista de como se ve la camara
	glLoadIdentity();

	// tipo de vista
	//glOrtho(-5,5,-5,5,0.1,20);
	glFrustum(-5, 5, -5, 5, 4.0, 20.0);
	glutPostRedisplay();
}

void teclado(unsigned char key, int x, int y)
{
	switch (key)
	{
	case'w':case'W':  //acerca al objeto con traslación en Z pos
		transZ += 0.2f;
		break;

	case's':case'S':  //aleja al objeto con traslación en Z neg
		transZ -= 0.2f;
		break;

	case'a':case'A':  //traslada al objeto hacia la derecha en X pos
		transX += 0.2f;
		break;

	case'd':case'D':  //traslada al objeto hacia la izquierda en X neg
		transX -= 0.2f;
		break;

	case'q':case'Q':  //traslada al objeto hacia arriba en Y pos
		transY -= 0.2f;
		break;

	case'e':case'E':  //traslada al objeto hacia abajo en Y neg
		transY += 0.2f;
		break;

	case 27:    //Si presiona la tecla ESC(ASCII 27) sale
		exit(0);
		break;

	default:    //Si es cualquier otra tecla no hace nada
		break;
	}
	glutPostRedisplay();
}

void teclasFlechas(int tecla, int x, int y)
{
	switch (tecla) {
	case GLUT_KEY_UP:
		angleX += 2.0f;
		break;
	case GLUT_KEY_DOWN:
		angleX -= 2.0f;
		break;
	case GLUT_KEY_LEFT:
		angleY += 2.0f;
		break;
	case GLUT_KEY_RIGHT:
		angleY -= 2.0f;
		break;
	default:
		break;
	}
	glutPostRedisplay();
}


int main(int argc, char *argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE | GLUT_DEPTH);  // banderas
	glutInitWindowSize(650, 650);
	glutInitWindowPosition(550, 50);

	glutCreateWindow("Carita ^_^");

	inicializar();
	//Llamada a la función a ser dibujada
	glutDisplayFunc(dibujar);
	glutReshapeFunc(remodelar);

	//Llamada a función que maneja eventos del teclado
	glutKeyboardFunc(teclado);
	glutSpecialFunc(teclasFlechas);

	//LLamada a función que cede el control a GLUT y procesa eventos de
	glutMainLoop();

	//Termina la ejecucion devolviendo cero
	return 0;
}
