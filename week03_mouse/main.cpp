#include <GL/glut.h> ///�ϥ�GLUT�~��
#include <stdio.h> ///for printf
void display()
{
    glutSolidTeapot(0.3);
    glutSwapBuffers();

}

void mouse(int button, int state, int x, int y)//state: 0�U�h�A1�W��
{///�w�qmouse�禡 button:0����A1:����A2:�k��
    //printf("Hello World\n");
    //printf("%d %d %d\n", button, state, x, y);
    if(state==GLUT_DOWN)
    {
        printf("glVertex2x((%d-150)/150.0, -(%d-150)/150.0);\n", x, y);
    }
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03 mouse");

    glutDisplayFunc(display); ///�]�w�n�e�Ϫ�display�禡
    glutMouseFunc(mouse); ///�]�wmouse�禡

    glutMainLoop(); ///�D�n�j��

}
