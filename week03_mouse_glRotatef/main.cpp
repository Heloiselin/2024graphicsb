#include <GL/glut.h> ///使用GLUT外掛
#include <stdio.h> ///for printf
float teapotX=0, teapotY=0;///新加的程式，用來放茶壺的座標
float angle=0;///旋轉的角度
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///清背景
    glPushMatrix();///備份矩陣
        glRotatef(angle, 0, 0, 1);///最難的Z軸
        glutSolidTeapot(0.3);
    glPopMatrix();///還原矩陣
    glutSwapBuffers();
}

void mouse(int button, int state, int x, int y)//state: 0下去，1上來
{
    teapotX=(x-150)/150.0;
    teapotY=(y-150)/150.0;
}

void motion(int x, int y)
{
    angle = x;
    display();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03 mouse glRotatef");

    glutDisplayFunc(display);
    glutMouseFunc(mouse); ///設定mouse函式
    glutMotionFunc(motion);///這行設定mouse的motion動作
    glutMainLoop(); ///主要迴圈

}
