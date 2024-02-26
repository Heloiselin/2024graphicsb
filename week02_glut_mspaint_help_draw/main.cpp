 #include <GL/glut.h> ///使用GLUT外掛
void display()
{
    glBegin(GL_POLYGON);
        glColor3f(1, 1, 1); ///隨便的白色
        glVertex2f((30-200)/200.0, -(45-200)/200.0);
        glVertex2f((46-200)/200.0, -(102-200)/200.0);
        glVertex2f((84-200)/200.0, -(23-200)/200.0);
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

