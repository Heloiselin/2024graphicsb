#include <GL/glut.h>

void myBody(){

    glColor3f(1,0,0);

    glutWireCube(0.6);

}

void myArm(){

    glPushMatrix();
        glColor3f(0,1,0);

        glScalef(1.5,0.5,0.5);///寬變1.5倍，長變0.5倍

        glutWireCube(0.3);
    glPopMatrix();
}

float angle=0;

void display()

{

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        ///glTranslatef(-0.6,+0.3,0);
        myBody();///程式碼移上去
    glPopMatrix();

    glPushMatrix();
        glTranslatef(+0.3,+0.3,0);
        glRotatef(angle++,0,0,1);
        glTranslatef(0.225,0,0);
        myArm();///右手臂

        glPushMatrix();
            glTranslatef(0.225,0,0);
            glRotatef(angle++,0,0,1);
            glTranslatef(0.225,0,0);
            myArm();///右手肘
        glPopMatrix();

    glPopMatrix();
    glutSwapBuffers();

}

int main(int argc, char *argv[])

{

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("week10-3_TRT_glRotatef_glTranslatef");

    glutDisplayFunc(display);

    glutIdleFunc(display);

    glutMainLoop();

}

