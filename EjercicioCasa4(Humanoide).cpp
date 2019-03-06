/*
Flores Molina Miguel de Jesús
Version 2017
PRACTICA #04
INTRUCCIONES:
Q --->La camara se mueve hacia arriba
E --->La camara se mueve hacia abajo
W --->La camara se mueve hacia enfrente
S --->La camara se mueve hacia atras
A --->La camara se mueve hacia la izquierda
D --->La camara se mueve hacia la derecha
Flecha arriba ------> Rotacion hacia arriba
Flecha abajo ------> Rotacion hacia abaj
Flecha derecha  ------> Rotacion hacia la derecha
Flecha izquierda ------> Rotacion hacia la izquierda
*/
#include "Main.h"

float transZ = -5.0f;
float transY = 0.0f;
float transX = 0.0f;
int screenW = 0.0;
int screenH = 0.0;
float angY = 0.0; //declaracion de variable del angulo que se utiliza en el la rotacion
float angX = 0.0;
float blanco[3] = {1.0,1.0,1.0 };
float rojo[3] = { 1.0,0.0,0.0 };
float verde[3] = {0.0,1.0,0.0 };
float amarillo [3] = {1.0, 1.0 ,0.0};
float rosa[3] = { 1.0, 0.0 ,1.0 };
float azul[3] = {0.0, 0.0, 1.0};
float cafe[3] = {0.4, 0.23, 0.176 };

void InitGL(void)     // Inicializamos parametros
{

	//glShadeModel(GL_SMOOTH);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glEnable(GL_LIGHTING);
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	//glEnable ( GL_COLOR_MATERIAL );
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void prisma(void)
{
	GLfloat vertice[8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas Vértice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas Vértice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas Vértice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas Vértice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas Vértice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas Vértice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas Vértice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas Vértice 7 V7
	};

	glBegin(GL_POLYGON);	//Front
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer
	//glMatrixMode(GL_MODELVIEW);

	//Poner Código Aquí.
	glLoadIdentity();
	glTranslatef(transX, transY, transZ);
	glRotatef(angY, 0, 1, 0);
	glRotatef(angX, 1, 0, 0);
								//Cabeza
	glTranslatef(0, 2.0079, 0);
	glColor3fv(blanco);
	glScalef(1, 1, 1);//aumento el tamaño del cubo
	prisma();
	
	glLoadIdentity();
	glTranslatef(transX, transY, transZ);
	glRotatef(angY, 0, 1.2, 0);
	glRotatef(angX, 1, 0, 0);
								//Cuello
	glTranslatef(0, 1.255, 0);
	glColor3fv(rosa);
	glScalef(0.8, 0.5, 0.8);//aumento el tamaño del cubo
	prisma();

	glLoadIdentity();
	glTranslatef(transX, transY, transZ);
	glRotatef(angY, 0, 1, 0);
	glRotatef(angX, 1, 0, 0);
								//Cuerpo
	glTranslatef(0, 0, 0);
	glColor3fv(azul);
	glScalef(2, 2, 2);//aumento el tamaño del cubo
	prisma();

	glLoadIdentity();
	glTranslatef(transX, transY, transZ);
	glRotatef(angY, 0, 1, 0);
	glRotatef(angX, 1, 0, 0);
	//Hombro verde derecho
	glTranslatef(1.4, .6, 0);
	glColor3fv(verde);
	glScalef(.8, .8, .8);//aumento el tamaño del cubo
	prisma();

	glLoadIdentity();
	glTranslatef(transX, transY, transZ);
	glRotatef(angY, 0, 1, 0);
	glRotatef(angX, 1, 0, 0);
	//Brazo parte amarilla derecho
	glTranslatef(2.4, .6, 0);
	glColor3fv(amarillo);
	glScalef(1.2, .8, .8);//aumento el tamaño del cubo
	prisma();

	glLoadIdentity();
	glTranslatef(transX, transY, transZ);
	glRotatef(angY, 0, 1, 0);
	glRotatef(angX, 1, 0, 0);
	//Brazo parte rojo derecho
	glTranslatef(3.6, .6, 0);
	glColor3fv(rojo);
	glScalef(1.2, .8, .8);//aumento el tamaño del cubo
	prisma();

	glLoadIdentity();
	glTranslatef(transX, transY, transZ);
	glRotatef(angY, 0, 1, 0);
	glRotatef(angX, 1, 0, 0);
	//Mano derecha 
	glTranslatef(4.5, .6, 0);
	glColor3fv(blanco);
	glScalef(.6, .8, .8);//aumento el tamaño del cubo
	prisma();
	//-----------------------------Pie Derecho
	glLoadIdentity();
	glTranslatef(transX, transY, transZ);
	glRotatef(angY, 0, 1, 0);
	glRotatef(angX, 1, 0, 0);
	//Pie derecho 
	glTranslatef(0.6, -1.6, 0);
	glColor3fv(rojo);
	glScalef(.8, 1.2, .8);//aumento el tamaño del cubo
	prisma();

	glLoadIdentity();
	glTranslatef(transX, transY, transZ);
	glRotatef(angY, 0, 1, 0);
	glRotatef(angX, 1, 0, 0);
	//Pie derecho 
	glTranslatef(0.6, -2.45, 0);
	glColor3fv(verde);
	glScalef(.8, .5, .8);//aumento el tamaño del cubo
	prisma();

	glLoadIdentity();
	glTranslatef(transX, transY, transZ);
	glRotatef(angY, 0, 1, 0);
	glRotatef(angX, 1, 0, 0);
	//Pie derecho 
	glTranslatef(0.6, -3.3, 0);
	glColor3fv(azul);
	glScalef(.8, 1.2, .8);//aumento el tamaño del cubo
	prisma();

	glLoadIdentity();
	glTranslatef(transX, transY, transZ);
	glRotatef(angY, 0, 1, 0);
	glRotatef(angX, 1, 0, 0);
	//Pie derecho 
	glTranslatef(.9, -4.15, 0);
	glColor3fv(cafe);
	glScalef(1.4, .5, .8);//aumento el tamaño del cubo
	prisma();
	//////////////////////////////// Parte Izquierda
	//--------------------------Mano Izquierda
	glLoadIdentity();
	glTranslatef(transX, transY, transZ);
	glRotatef(angY, 0, 1, 0);
	glRotatef(angX, 1, 0, 0);
	//Hombro verde izquierdo
	glTranslatef(-1.4, .6, 0);
	glColor3fv(verde);
	glScalef(.8, .8, .8);//aumento el tamaño del cubo
	prisma();

	glLoadIdentity();
	glTranslatef(transX, transY, transZ);
	glRotatef(angY, 0, 1, 0);
	glRotatef(angX, 1, 0, 0);
	//Brazo parte amarilla izquierda
	glTranslatef(-2.4, .6, 0);
	glColor3fv(amarillo);
	glScalef(1.2, .8, .8);//aumento el tamaño del cubo
	prisma();

	glLoadIdentity();
	glTranslatef(transX, transY, transZ);
	glRotatef(angY, 0, 1, 0);
	glRotatef(angX, 1, 0, 0);
	//Brazo parte rojo izquierda
	glTranslatef(-3.6, .6, 0);
	glColor3fv(rojo);
	glScalef(1.2, .8, .8);//aumento el tamaño del cubo
	prisma();

	glLoadIdentity();
	glTranslatef(transX, transY, transZ);
	glRotatef(angY, 0, 1, 0);
	glRotatef(angX, 1, 0, 0);
	//Mano izquierdo 
	glTranslatef(-4.5, .6, 0);
	glColor3fv(blanco);
	glScalef(.6, .8, .8);//aumento el tamaño del cubo
	prisma();
	//-------------------Pie Izquierdo
	glLoadIdentity();
	glTranslatef(transX, transY, transZ);
	glRotatef(angY, 0, 1, 0);
	glRotatef(angX, 1, 0, 0);
	//Pie izquierdo 
	glTranslatef(-0.6, -1.6, 0);
	glColor3fv(rojo);
	glScalef(.8, 1.2, .8);//aumento el tamaño del cubo
	prisma();

	glLoadIdentity();
	glTranslatef(transX, transY, transZ);
	glRotatef(angY, 0, 1, 0);
	glRotatef(angX, 1, 0, 0);
	//Pie izquierdo 
	glTranslatef(-0.6, -2.45, 0);
	glColor3fv(verde);
	glScalef(.8, .5, .8);//aumento el tamaño del cubo
	prisma();

	glLoadIdentity();
	glTranslatef(transX, transY, transZ);
	glRotatef(angY, 0, 1, 0);
	glRotatef(angX, 1, 0, 0);
	//Pie izquierdo 
	glTranslatef(-0.6, -3.3, 0);
	glColor3fv(azul);
	glScalef(.8, 1.2, .8);//aumento el tamaño del cubo
	prisma();

	glLoadIdentity();
	glTranslatef(transX, transY, transZ);
	glRotatef(angY, 0, 1, 0);
	glRotatef(angX, 1, 0, 0);
	//Pie izquierdo 
	glTranslatef(-.9, -4.15, 0);
	glColor3fv(cafe);
	glScalef(1.4, .5, .8);//aumento el tamaño del cubo
	prisma();

	glutSwapBuffers();
	// Swap The Buffers
}

void reshape(int width, int height)   // Creamos funcion Reshape
{
	if (height == 0)										// Prevenir division entre cero
	{
		height = 1;
	}

	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	// Tipo de Vista
	//glOrtho(-5,5,-5,5,0.2,20);	
	glFrustum(-0.1, 0.1, -0.1, 0.1, 0.1, 50.0);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
}

void keyboard(unsigned char key, int x, int y)  // Create Keyboard Function
{
	switch (key) {
	case 'w':
	case 'W':
		transZ += 0.3f;
		break;
	case 's':
	case 'S':
		transZ -= 0.3f;
		break;
	case 'a':
	case 'A':
		transX += 0.3f;
		break;
	case 'd':
	case 'D':
		transX -= 0.3f;
		break;
	case 'q':
	case 'Q':
		transY -= 0.3f;
		break;
	case 'e':
	case 'E':
		transY += 0.3f;
		break;
	case 27:        // Cuando Esc es presionado...
		exit(0);   // Salimos del programa
		break;
	default:        // Cualquier otra
		break;
	}
	glutPostRedisplay();
}

void arrow_keys(int a_keys, int x, int y)  // Funcion para manejo de teclas especiales (arrow keys)
{
	switch (a_keys) {
	case GLUT_KEY_UP:		// Presionamos tecla ARRIBA...
		angX += 3.0f;
		break;
	case GLUT_KEY_DOWN:		// Presionamos tecla ABAJO...
		angX -= 3.0f;
		break;
	case GLUT_KEY_LEFT:
		angY += 3.0f;//el numkero es la velocidad con la cual rotara la figura en tre mayor sea el numero mas rapido rotara la figura
		break;
	case GLUT_KEY_RIGHT:
		angY -= 3.0f;//rotacion haca la derecha
		break;
	default:
		break;
	}
	glutPostRedisplay();
}


int main(int argc, char** argv)   // Main Function
{
	glutInit(&argc, argv); // Inicializamos OpenGL
	//glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
	screenW = glutGet(GLUT_SCREEN_WIDTH);
	screenH = glutGet(GLUT_SCREEN_HEIGHT);
	glutInitWindowSize(1200, 1200);	// Tamaño de la Ventana
	glutInitWindowPosition(0, 0);	//Posicion de la Ventana
	glutCreateWindow("Practica 4"); // Nombre de la Ventana
	printf("Resolution H: %i \n", screenW);
	printf("Resolution V: %i \n", screenH);
	InitGL();						// Parametros iniciales de la aplicacion
	glutDisplayFunc(display);  //Indicamos a Glut función de dibujo
	glutReshapeFunc(reshape);	//Indicamos a Glut función en caso de cambio de tamano
	glutKeyboardFunc(keyboard);	//Indicamos a Glut función de manejo de teclado
	glutSpecialFunc(arrow_keys);	//Otras
	glutMainLoop();          // 

	return 0;
}
