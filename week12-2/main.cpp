#include <GL/glut.h>
float angle=0;
void display()
{
    glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f(1, 1, 1);///�զ�
    glutSolidTeapot( 0.3 );///0.3�j�p��ߤj����
    glPushMatrix();
        glTranslatef(0.3, 0, 0 );///����त���F��"���b"�Y�B
        glRotatef( angle, 0, 0, 1);///����
        glTranslatef(0.2, 0, 0);///�N�������त�ߡA����Ŷ�������(�������Ⲿ�줤��)
        glColor3f(1, 0, 0);///����
        glutSolidTeapot( 0.2 );///0.2�j�p��ߤp����
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
