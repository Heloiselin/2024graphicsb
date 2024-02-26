 #include <GL/glut.h> ///使用GLUT外掛
void display()
{
    glBegin(GL_POLYGON);
        glColor3f(1, 0, 0); glVertex2f(0, 1); ///3f代表3個浮點數，2f代表2個
        glColor3f(0, 1, 0); glVertex2f(1, -0.6);
        glColor3f(0, 0, 1); glVertex2f(-1, -0.6);
    glEnd();
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

