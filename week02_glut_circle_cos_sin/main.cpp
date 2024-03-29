#include <GL/glut.h> ///使用GLUT外掛
#include <math.h> ///為了cos()&sin()
void myCircle(float cx, float cy, float r){
    glBegin(GL_POLYGON);
    for(float a=0; a<=3.14*2; a+=0.1){///很多不同角度
        glVertex2f(r*cos(a)+cx, r*sin(a)+cy );
    }///三角函數超好用，x=cos(a), y=sin(a)
    glEnd();
}

void display()
{
    glColor3f(1, 1, 1); myCircle(0, 0, 1);
    glColor3f(0, 0, 0); myCircle(-0.5, +0.5, 0.3);
    glColor3f(0, 0, 0); myCircle(+0.5, +0.5, 0.3);
    glColor3f(0, 0, 0); myCircle(0, -0.3, 0.7);

    glutSwapBuffers();

}

int main(int argc, char *argv[]) ///我們的main函式
{
    glutInit(&argc, argv); ///初始化 GLUT
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week02_glut_color_teapot"); ///建立視窗
    glutDisplayFunc(display); ///設定要畫圖的display函式
    glutMainLoop(); ///主要迴圈

}

