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

    glBegin(GL_POLYGON);
        glColor3f(1, 1, 1); myCircle(0, 0, 0.7);//face
        glColor3f(0, 0, 0); myCircle(-0.3, 0.25, 0.1);//eye1(x, y, �j�p)
        glColor3f(0, 0, 0); myCircle(0.3, 0.25, 0.1);//eye2

        glColor3f(0, 0, 0); myCircle(0, -0.35, 0.45);//nose����
        glColor3f(1, 1, 1); myCircle(-0.19, -0.35, 0.1);//nose
        glColor3f(1, 1, 1); myCircle(0.19, -0.35, 0.1);

        glColor3f(1, 1, 1);//leftear
        glVertex2f((91-200)/200.0, -(62-200)/200.0);
        glVertex2f((147-200)/200.0, -(62-200)/200.0);
        glVertex2f((91-200)/200.0, -(100-200)/200.0);

        glColor3f(1, 1, 1);//rightear
        glVertex2f((246-200)/200.0, -(62-200)/200.0);
        glVertex2f((308-200)/200.0, -(62-200)/200.0);
        glVertex2f((308-200)/200.0, -(106-200)/200.0);

    glEnd();
    glutSwapBuffers();

}
 //glVertex2f((58-200)/200.0, -(183-199)/200.0);
///glVertex2f((X-200)/200.0, -(Y-200)/200.0);

int main(int argc, char *argv[]) //�ڭ̪�main�禡
{
    glutInit(&argc, argv); ///��l�� GLUT
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("11160313"); ///�إߵ���
    glutDisplayFunc(display); ///�]�w�n�e�Ϫ�display�禡
    glutMainLoop(); ///�D�n�j��

}
