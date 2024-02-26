 #include <GL/glut.h> ///使用GLUT外掛
void display()
{
    glColor3f(247/255.0, 180/255.0, 171/255.0);
    glutSolidTeapot(0.3);
    glColor3f(251/255.0, 233/255.0, 219/255.0);
    glutSolidTeapot(0.2);

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

