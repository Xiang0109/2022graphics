#include <GL/glut.h>
float angle=0;
void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    glRotatef( angle, 0, 0, 1);///����
        glTranslatef(0.4, -0.07, 0);///�N�������त�ߡA����Ŷ�������(�������Ⲿ�줤��)
        glutSolidTeapot(0.3);///0.3 ��߯���
    glPopMatrix();
    glutSwapBuffers();///2�Q�洫��buffer
    angle+=0.1;
}

int main(int argc, char**argv)
{///�i����main�禡
    glutInit( &argc, argv);///��l��
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH);///�⭿�洫�קK�e���{�{+3D�`��
    glutCreateWindow("week12_TRT");///�ص���

    glutIdleFunc(display);///�q�����ŴN�e
    glutDisplayFunc( display );///�e�Ϩ禡

    glutMainLoop();///�D�n�j��
}
