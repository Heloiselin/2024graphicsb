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
    glColor3f(0, 0, 0); myCircle(0, 0, 2);//底色大白圓
    glColor3f(1, 1, 1); myCircle(-0.3, +0.1, 0.2);//眼鏡//(x, y, 大小)
    glColor3f(1, 1, 1); myCircle(+0.3, +0.1, 0.2);//眼鏡

    glBegin(GL_POLYGON);

        glColor3f(1, 1, 1); //白色
        glVertex2f((63-200)/400.0, -(195-199)/400.0);
        glVertex2f((82-200)/400.0, -(195-199)/400.0);


    glEnd();
    glutSwapBuffers();

}

///glVertex2f((X-200)/400.0, -(Y-199)/400.0);

int main(int argc, char *argv[]) //我們的main函式
{
    glutInit(&argc, argv); ///初始化 GLUT
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("11160313"); ///建立視窗
    glutDisplayFunc(display); ///設定要畫圖的display函式
    glutMainLoop(); ///主要迴圈

}
