#include <GL/glut.h> //�ϥ�GLUT�~��
#include <math.h> //���Fcos()&sin()
void myCircle(float cx, float cy, float r){
    glBegin(GL_POLYGON);
    for(float a=0; a<=3.14*2; a+=0.1){//�ܦh���P����
        glVertex2f(r*cos(a)+cx, r*sin(a)+cy );
    }///�T����ƶW�n�ΡAx=cos(a), y=sin(a)
    glEnd();
}

void display()
{
    glColor3f(0, 0, 0); myCircle(0, 0, 2);//����j�ն�
    glColor3f(1, 1, 1); myCircle(-0.3, +0.1, 0.2);//����//(x, y, �j�p)
    glColor3f(1, 1, 1); myCircle(+0.3, +0.1, 0.2);//����

    glBegin(GL_POLYGON);

        glColor3f(1, 1, 1); //�զ�
        glVertex2f((63-200)/400.0, -(195-199)/400.0);
        glVertex2f((82-200)/400.0, -(195-199)/400.0);


    glEnd();
    glutSwapBuffers();

}

///glVertex2f((X-200)/400.0, -(Y-199)/400.0);

int main(int argc, char *argv[]) //�ڭ̪�main�禡
{
    glutInit(&argc, argv); ///��l�� GLUT
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("11160313"); ///�إߵ���
    glutDisplayFunc(display); ///�]�w�n�e�Ϫ�display�禡
    glutMainLoop(); ///�D�n�j��

}
