// ConsoleApplication2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <GL/glut.h>

void ValoresIniciales(void) {
    glClearColor(0, 0, 255, 0.1);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);

}
void Pintar() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(220.0, 0.0, 0.0);
    glPointSize(3);
    glBegin(GL_POINTS);
    glVertex2i(200, 200);
    glEnd();
    glFlush();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv); //Inicializa GLUT
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Si se pudo rey");
    ValoresIniciales();
    glutDisplayFunc(Pintar);
    glutMainLoop();

    return 0;
}

