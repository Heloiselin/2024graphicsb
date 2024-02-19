#include <GL/glut.h> ///使用GLUT外掛
void display() ///自己寫
{
    glutSolidTeapot(0.3); ///自己寫
    glutSwapBuffers(); ///自己寫

}

int main(int argc, char *argv[]) ///我們的main函式
{
    glutInit(&argc, argv); ///初始化 GLUT
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("自己打的程式!!!"); ///建立視窗
    glutDisplayFunc(display); ///設定要畫圖的display函式
    glutMainLoop(); ///主要迴圈

}
