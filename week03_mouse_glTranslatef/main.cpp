#include <GL/glut.h> ///�ϥ�GLUT�~��
#include <stdio.h> ///for printf
float teapotX=0, teapotY=0;///�s�[���{���A�Ψө�������y��
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///�M�I��
    glPushMatrix();///�ƥ��x�}
        glTranslatef(teapotX, teapotY, 0);///��y�в���
        glutSolidTeapot(0.3);
    glPopMatrix();///�٭�x�}
    glutSwapBuffers();
}

void mouse(int button, int state, int x, int y)//state: 0�U�h�A1�W��
{
    teapotX=(x-150)/150.0;
    teapotY=(y-150)/150.0;
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03 mouse glTranslatef");

    glutDisplayFunc(display);
    glutMouseFunc(mouse); ///�]�wmouse�禡

    glutMainLoop(); ///�D�n�j��

}