#include <GL/glut.h> ///使用GLUT外掛
#include <stdio.h> ///for printf
void display()
{
    glutSolidTeapot(0.3);
    glutSwapBuffers();

}

void mouse(int button, int state, int x, int y)//state: 0下去，1上來
{///定義mouse函式 button:0左鍵，1:中鍵，2:右鍵
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

    glutDisplayFunc(display); ///設定要畫圖的display函式
    glutMouseFunc(mouse); ///設定mouse函式

    glutMainLoop(); ///主要迴圈

}
