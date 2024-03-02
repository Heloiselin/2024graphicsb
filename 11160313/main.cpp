#include <GL/glut.h> //使用GLUT外掛
#include <math.h> //為了cos()&sin()
void myCircle(float cx, float cy, float r){
    glBegin(GL_POLYGON);
    for(float a=0; a<=3.14*2; a+=0.1){//很多不同角度
        glVertex2f(r*cos(a)+cx, r*sin(a)+cy );
    }///三角函數超好用，x=cos(a), y=sin(a)
    glEnd();
}

void display()
{

    glBegin(GL_POLYGON);
        glColor3f(1, 1, 1); myCircle(0, 0, 0.7);//face
        glColor3f(0, 0, 0); myCircle(-0.3, 0.25, 0.1);//eye1(x, y, 大小)
        glColor3f(0, 0, 0); myCircle(0.3, 0.25, 0.1);//eye2

        glColor3f(0, 0, 0); myCircle(0, -0.35, 0.45);//nose底色
        glColor3f(1, 1, 1); myCircle(-0.19, -0.35, 0.1);//nose
        glColor3f(1, 1, 1); myCircle(0.19, -0.35, 0.1);

        glColor3f(1, 1, 1);//left ear
        glVertex2f((91-200)/200.0, -(62-200)/200.0);
        glVertex2f((147-200)/200.0, -(62-200)/200.0);
        glVertex2f((91-200)/200.0, -(100-200)/200.0);

        glColor3f(1, 1, 1);//right ear
        glVertex2f((246-200)/200.0, -(62-200)/200.0);
        glVertex2f((308-200)/200.0, -(62-200)/200.0);
        glVertex2f((308-200)/200.0, -(106-200)/200.0);

    glEnd();
    glutSwapBuffers();

}
 //glVertex2f((58-200)/200.0, -(183-199)/200.0);
///glVertex2f((X-200)/200.0, -(Y-200)/200.0);

int main(int argc, char *argv[]) //我們的main函式
{
    glutInit(&argc, argv); ///初始化 GLUT
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("11160313"); ///建立視窗
    glutDisplayFunc(display); ///設定要畫圖的display函式
    glutMainLoop(); ///主要迴圈

}
