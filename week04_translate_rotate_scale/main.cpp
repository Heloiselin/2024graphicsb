#include <GL/glut.h> ///使用GLUT外掛
float teapotX = 0.5, teapotY = 0;
float angle = 0;
float s = 0.3;///一開始是原本1倍的大小
void display()
{///設定清背景的顏色

    glClearColor(1, 1, 0.9, 1);/// R, G, B, A
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(0, 1, 0);
    glPushMatrix();///備份矩陣
        glTranslatef(teapotX, teapotY, 0);
        glRotatef(angle++, 0, 0, 1);
        glScalef(s, s, s);///縮放s倍
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}

void motion(int x, int y)
{
    s = 1+(x-150)/150.0;///會變大變小的變數 0~1 1~2
    display();///重畫畫面
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week04_translate_rotate_scale");
    glutIdleFunc(display);
    glutDisplayFunc(display);
    glutMotionFunc(motion);///拖動motion的時候
    glutMainLoop();

}
