#include<windows.h>
#include <gl/glut.h>

void init(void);
void tampil(void);
void mouse(int button, int state, int x, int y);
void mouseMotion(int x, int y);
void keyboard(unsigned char,int,int);
void ukuran(int, int);

float xrot=0.0f;
float yrot=0.0f;
float xdiff=0.0f;
float ydiff=0.0f;
bool mouseDown=false;
int is_depth;

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(250, 80);
    glutCreateWindow("MARGARETHA INTAN PRATIWI-672018126");
    init();
    glutDisplayFunc(tampil);
    glutKeyboardFunc(keyboard);
    glutReshapeFunc(ukuran);
    glutMouseFunc(mouse);
	glutMotionFunc(mouseMotion);

	glutIdleFunc(tampil);
    glutMainLoop();
    return 0;
}

void lantai()
{
    glBegin(GL_QUADS);
    glColor3f(0.9,0.8,0.8);
    glVertex3f(4.0, -10.0, 30.0);
    glVertex3f(32.0, -10.0, 30.0);
    glVertex3f(32.0, -10.0, -40.0);
    glVertex3f(4.0, -10.0, -40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.9,0.8,0.8);
    glVertex3f(4.0, -10.0, 10.0);
    glVertex3f(-20.0, -10.0, 10.0);
    glVertex3f(-20.0, -10.0, -40.0);
    glVertex3f(4.0, -10.0, -40.0);
    glEnd();



    //pigura
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-20.0, 30, -5.0);
    glVertex3f(-20.0, 15, -5.0);
    glVertex3f(-20.0, 15, -15.0);
    glVertex3f(-20.0, 30, -15.0);
    glEnd();

    //pigura 2
    glBegin(GL_QUADS);
    glColor3f(1,0,0.5);
    glVertex3f(-20.0, 28.5, -6.7);
    glVertex3f(-20.0, 17, -6.7);
    glVertex3f(-20.0, 17, -13.5);
    glVertex3f(-20.0, 28.5, -13.5);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.9,0.8,0.8);
    glVertex3f(4.0, -9.0, 30.0);
    glVertex3f(32.0, -9.0, 30.0);
    glVertex3f(32.0, -9.0, -40.0);
    glVertex3f(4.0, -9.0, -40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.09,0.09,0.09);
    glVertex3f(4.0, -9.0, 30.0);
    glVertex3f(32.0, -9.0, 30.0);
    glVertex3f(32.0, -10.0, 30.0);
    glVertex3f(4.0, -10.0, 30.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.09,0.09,0.09);
    glVertex3f(4.0, -9.0, 30.0);
    glVertex3f(4.0, -9.0, 10.0);
    glVertex3f(4.0, -10.0, 10.0);
    glVertex3f(4.0, -10.0, 30.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(4.0, -9.0, 29.9);
    glVertex3f(6.0, -9.0, 29.9);
    glVertex3f(6.0, 30.0, 29.9);
    glVertex3f(4.0, 30.0, 29.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(4.0, -9.0, 27.9);
    glVertex3f(6.0, -9.0, 27.9);
    glVertex3f(6.0, 30.0, 27.9);
    glVertex3f(4.0, 30.0, 27.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(4.0, -9.0, 27.9);
    glVertex3f(4.0, -9.0, 29.9);
    glVertex3f(4.0, 30.0, 29.9);
    glVertex3f(4.0, 30.0, 27.9);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(6.0, -9.0, 27.9);
    glVertex3f(6.0, -9.0, 29.9);
    glVertex3f(6.0, 30.0, 29.9);
    glVertex3f(6.0, 30.0, 27.9);
    glEnd();
}

void pintu()
{
    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.2);
    glVertex3f(10.0, -10.0, 10.1);
    glVertex3f(10.0, 20.0, 10.1);
    glVertex3f(20.0, 20.0, 10.1);
    glVertex3f(20.0, -10.0, 10.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(19.0, 5.0, 10.15);
    glVertex3f(19.0, 6.0, 10.15);
    glVertex3f(20.0, 6.0, 10.15);
    glVertex3f(20.0, 5.0, 10.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(20.0, 0.0, 10.1);
    glVertex3f(20.0, 20.0, 10.1);
    glVertex3f(28.0, 20.0, 10.1);
    glVertex3f(28.0, 0.0, 10.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.2);
    glVertex3f(20.0, 0.0, 10.15);
    glVertex3f(20.0, 20.0, 10.15);
    glVertex3f(21.0, 20.0, 10.15);
    glVertex3f(21.0, 0.0, 10.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.2);
    glVertex3f(27.0, 0.0, 10.15);
    glVertex3f(27.0, 20.0, 10.15);
    glVertex3f(28.0, 20.0, 10.15);
    glVertex3f(28.0, 0.0, 10.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.2);
    glVertex3f(20.0, 19.0, 10.15);
    glVertex3f(20.0, 20.0, 10.15);
    glVertex3f(28.0, 20.0, 10.15);
    glVertex3f(28.0, 19.0, 10.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.2);
    glVertex3f(20.0, 0.0, 10.15);
    glVertex3f(20.0, 1.0, 10.15);
    glVertex3f(28.0, 1.0, 10.15);
    glVertex3f(28.0, 0.0, 10.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.2);
    glVertex3f(23.5, 0.0, 10.15);
    glVertex3f(23.5, 20.0, 10.15);
    glVertex3f(25.0, 20.0, 10.15);
    glVertex3f(25.0, 0.0, 10.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(24.5, 23.5, 10.15);
    glVertex3f(24.5, 21.0, 10.15);
    glVertex3f(28.0, 21.0, 10.15);
    glVertex3f(28.0, 23.5, 10.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(20.0, 23.5, 10.15);
    glVertex3f(20.0, 21.0, 10.15);
    glVertex3f(24.0, 21.0, 10.15);
    glVertex3f(24.0, 23.5, 10.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(15.0, 23.5, 10.15);
    glVertex3f(15.0, 21.0, 10.15);
    glVertex3f(19.0, 21.0, 10.15);
    glVertex3f(19.0, 23.5, 10.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(10.0, 23.5, 10.15);
    glVertex3f(10.0, 21.0, 10.15);
    glVertex3f(14.5, 21.0, 10.15);
    glVertex3f(14.5, 23.5, 10.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-5.0, 23.5, 10.15);
    glVertex3f(-5.0, 21.0, 10.15);
    glVertex3f(-1.0, 21.0, 10.15);
    glVertex3f(-1.0, 23.5, 10.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-5.0, 0.0, 10.11);
    glVertex3f(-5.0, 20.0, 10.11);
    glVertex3f(-1.0, 20.0, 10.11);
    glVertex3f(-1.0, 0.0, 10.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.2);
    glVertex3f(-5.0, 0.0, 10.15);
    glVertex3f(-5.0, 20.0, 10.15);
    glVertex3f(-4.0, 20.0, 10.15);
    glVertex3f(-4.0, 0.0, 10.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.2);
    glVertex3f(-1.0, 0.0, 10.15);
    glVertex3f(-1.0, 20.0, 10.15);
    glVertex3f(-2.0, 20.0, 10.15);
    glVertex3f(-2.0, 0.0, 10.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.2);
    glVertex3f(-1.0, 20.0, 10.15);
    glVertex3f(-1.0, 19.0, 10.15);
    glVertex3f(-4.0, 19.0, 10.15);
    glVertex3f(-4.0, 20.0, 10.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.2);
    glVertex3f(-1.0, 0.0, 10.15);
    glVertex3f(-1.0, 1.0, 10.15);
    glVertex3f(-4.0, 1.0, 10.15);
    glVertex3f(-4.0, 0.0, 10.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-14.0, 23.5, 10.15);
    glVertex3f(-14.0, 21.0, 10.15);
    glVertex3f(-10.0, 21.0, 10.15);
    glVertex3f(-10.0, 23.5, 10.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(-14.0, 0.0, 10.11);
    glVertex3f(-14.0, 20.0, 10.11);
    glVertex3f(-10.0, 20.0, 10.11);
    glVertex3f(-10.0, 0.0, 10.11);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.2);
    glVertex3f(-14.0, 0.0, 10.15);
    glVertex3f(-14.0, 20.0, 10.15);
    glVertex3f(-13.0, 20.0, 10.15);
    glVertex3f(-13.0, 0.0, 10.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.2);
    glVertex3f(-10.0, 0.0, 10.15);
    glVertex3f(-10.0, 20.0, 10.15);
    glVertex3f(-11.0, 20.0, 10.15);
    glVertex3f(-11.0, 0.0, 10.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.2);
    glVertex3f(-10.0, 0.0, 10.15);
    glVertex3f(-10.0, 1.0, 10.15);
    glVertex3f(-14.0, 1.0, 10.15);
    glVertex3f(-14.0, 0.0, 10.15);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.2);
    glVertex3f(-10.0, 20.0, 10.15);
    glVertex3f(-10.0, 19.0, 10.15);
    glVertex3f(-14.0, 19.0, 10.15);
    glVertex3f(-14.0, 20.0, 10.15);
    glEnd();





    //lemari atas
    glBegin(GL_QUADS);
    glColor3f(0,0,0.5);
    glVertex3f(8.0, -10.0, -33.0); //kiri bawah
    glVertex3f(29.0, -10.0, -33.0); //kanan bawah
    glVertex3f(29.0, -10.0, -39.0); //kanan atas
    glVertex3f(8.0, -10.0, -39.0); //kiri atas
    glEnd();

    //lemari bawah
    glBegin(GL_QUADS);
    glColor3f(0,0,0.5);
    glVertex3f(8.0, -10.0, -33.0); //kiri bawah
    glVertex3f(29.0, 25.0, -33.0); //kanan bawah
    glVertex3f(29.0, 25.0, -39.0); //kanan atas
    glVertex3f(8.0, 25.0, -39.0); //kiri atas
    glEnd();



    //lemari depan
    glBegin(GL_QUADS);
    glColor3f(0,0,0.5);
    glVertex3f(8.0, 25.0, -33.0); //kiri bawah
    glVertex3f(8.0, -10.0, -33.0); //kanan bawah
    glVertex3f(29.0, -10.0, -33.0); //kanan atas
    glVertex3f(29.0, 25.0, -33.0); //kiri atas
    glEnd();

    //lemari samping kanan
    glBegin(GL_QUADS);
    glColor3f(0,0,0.5);
    glVertex3f(8.0, 25.0, -33.0); //kiri bawah
    glVertex3f(8.0, -10.0, -33.0); //kanan bawah
    glVertex3f(8.0, -10.0, -39.0); //kanan atas
    glVertex3f(8.0, 25.0, -39.0); //kiri atas
    glEnd();

     //lemari samping kiri
    glBegin(GL_QUADS);
    glColor3f(0,0,0.5);
    glVertex3f(29.0, 25.0, -33.0); //kiri bawah
    glVertex3f(29.0, -10.0, -33.0); //kanan bawah
    glVertex3f(29.0, -10.0, -39.0); //kanan atas
    glVertex3f(29.0, 25.0, -39.0); //kiri atas
    glEnd();

    //lemari blkng
    glBegin(GL_QUADS);
    glColor3f(0,0,0.5);
    glVertex3f(8.0, 25.0, -39.0); //kiri bawah
    glVertex3f(8.0, -10.0, -39.0); //kanan bawah
    glVertex3f(29.0, -10.0, -39.0); //kanan atas
    glVertex3f(29.0, 25.0, -39.0); //kiri atas
    glEnd();

    //lemari atas
    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.2);
    glVertex3f(10.0, -4.0, -33.0); //kiri bawah
    glVertex3f(18.0, -4.0, -33.0); //kanan bawah
    glVertex3f(18.0, -4.0, -39.0); //kanan atas
    glVertex3f(10.0, -4.0, -39.0); //kiri atas
    glEnd();

    //lemari bawah
    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.2);
    glVertex3f(10.0, -4.0, -33.0); //kiri bawah
    glVertex3f(18.0, 19.0, -33.0); //kanan bawah
    glVertex3f(18.0, 19.0, -39.0); //kanan atas
    glVertex3f(10.0, 19.0, -39.0); //kiri atas
    glEnd();



    //lemari depan
    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.2);
    glVertex3f(10.0, 19.0, -33.0); //kiri bawah
    glVertex3f(10.0, -4.0, -33.0); //kanan bawah
    glVertex3f(18.0, -4.0, -33.0); //kanan atas
    glVertex3f(18.0, 19.0, -33.0); //kiri atas
    glEnd();

    //lemari samping kanan
    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.2);
    glVertex3f(10.0, 19.0, -33.0); //kiri bawah
    glVertex3f(10.0, -4.0, -33.0); //kanan bawah
    glVertex3f(10.0, -4.0, -39.0); //kanan atas
    glVertex3f(10.0, 19.0, -39.0); //kiri atas
    glEnd();

     //lemari samping kiri
    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.2);
    glVertex3f(18.0, 19.0, -33.0); //kiri bawah
    glVertex3f(18.0, -4.0, -33.0); //kanan bawah
    glVertex3f(18.0, -4.0, -39.0); //kanan atas
    glVertex3f(18.0, 19.0, -39.0); //kiri atas
    glEnd();

    //lemari blkng
    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.2);
    glVertex3f(10.0, 19.0, -39.0); //kiri bawah
    glVertex3f(10.0, -4.0, -39.0); //kanan bawah
    glVertex3f(18.0, -4.0, -39.0); //kanan atas
    glVertex3f(18.0, 19.0, -39.0); //kiri atas
    glEnd();


    //lemari atas
    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.2);
    glVertex3f(20.0, -4.0, -33.0); //kiri bawah
    glVertex3f(28.0, -4.0, -33.0); //kanan bawah
    glVertex3f(28.0, -4.0, -39.0); //kanan atas
    glVertex3f(20.0, -4.0, -39.0); //kiri atas
    glEnd();

    //lemari bawah
    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.2);
    glVertex3f(20.0, -4.0, -33.0); //kiri bawah
    glVertex3f(28.0, 19.0, -33.0); //kanan bawah
    glVertex3f(28.0, 19.0, -39.0); //kanan atas
    glVertex3f(20.0, 19.0, -39.0); //kiri atas
    glEnd();



    //lemari depan
    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.2);
    glVertex3f(20.0, 19.0, -33.0); //kiri bawah
    glVertex3f(20.0, -4.0, -33.0); //kanan bawah
    glVertex3f(28.0, -4.0, -33.0); //kanan atas
    glVertex3f(28.0, 19.0, -33.0); //kiri atas
    glEnd();

    //lemari samping kanan
    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.2);
    glVertex3f(20.0, 19.0, -33.0); //kiri bawah
    glVertex3f(20.0, -4.0, -33.0); //kanan bawah
    glVertex3f(20.0, -4.0, -39.0); //kanan atas
    glVertex3f(20.0, 19.0, -39.0); //kiri atas
    glEnd();

     //lemari samping kiri
    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.2);
    glVertex3f(28.0, 19.0, -33.0); //kiri bawah
    glVertex3f(28.0, -4.0, -33.0); //kanan bawah
    glVertex3f(28.0, -4.0, -39.0); //kanan atas
    glVertex3f(28.0, 19.0, -39.0); //kiri atas
    glEnd();

    //lemari blkng
    glBegin(GL_QUADS);
    glColor3f(0.5,0.4,0.2);
    glVertex3f(20.0, 19.0, -39.0); //kiri bawah
    glVertex3f(20.0, -4.0, -39.0); //kanan bawah
    glVertex3f(28.0, -4.0, -39.0); //kanan atas
    glVertex3f(28.0, 19.0, -39.0); //kiri atas
    glEnd();



    //AC
    //ac atas
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-15.0, 20.0, -33.0); //kiri bawah
    glVertex3f(1.0, 20.0, -33.0); //kanan bawah
    glVertex3f(1.0, 20.0, -39.0); //kanan atas
    glVertex3f(-15.0, 20.0, -39.0); //kiri atas
    glEnd();

    //ac bawah
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-15.0, 20.0, -33.0); //kiri bawah
    glVertex3f(1.0, 30.0, -33.0); //kanan bawah
    glVertex3f(1.0, 30.0, -39.0); //kanan atas
    glVertex3f(-15.0, 30.0, -39.0); //kiri atas
    glEnd();


    //ac depan
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-15.0, 30.0, -33.0); //kiri bawah
    glVertex3f(-15.0, 20.0, -33.0); //kanan bawah
    glVertex3f(1.0, 20.0, -33.0); //kanan atas
    glVertex3f(1.0, 30.0, -33.0); //kiri atas
    glEnd();


    //ac samping kanan
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-15.0, 30.0, -33.0); //kiri bawah
    glVertex3f(-15.0, 20.0, -33.0); //kanan bawah
    glVertex3f(-15.0, 20.0, -39.0); //kanan atas
    glVertex3f(-15.0, 30.0, -39.0); //kiri atas
    glEnd();

     //ac samping kiri
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(1.0, 30.0, -33.0); //kiri bawah
    glVertex3f(1.0, 20.0, -33.0); //kanan bawah
    glVertex3f(1.0, 20.0, -39.0); //kanan atas
    glVertex3f(1.0, 30.0, -39.0); //kiri atas
    glEnd();

    //ac blkng
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-15.0, 30.0, -39.0); //kiri bawah
    glVertex3f(-15.0, 20.0, -39.0); //kanan bawah
    glVertex3f(1.0, 20.0, -39.0); //kanan atas
    glVertex3f(1.0, 30.0, -39.0); //kiri atas
    glEnd();

    //AC 2
    //ac atas
    glBegin(GL_QUADS);
    glColor3f(0.75, 0.75, 0.755);
    glVertex3f(-15.0, 22.0, -33.0); //kiri bawah
    glVertex3f(1.0, 22.0, -33.0); //kanan bawah
    glVertex3f(1.0, 22.0, -31.5); //kanan atas
    glVertex3f(-15.0, 22.0, -31.5); //kiri atas
    glEnd();

    //ac bawah
    glBegin(GL_QUADS);
    glColor3f(0.75, 0.75, 0.75);
    glVertex3f(-15.0, 22.0, -33.0); //kiri bawah
    glVertex3f(1.0, 30.0, -33.0); //kanan bawah
    glVertex3f(1.0, 30.0, -31.5); //kanan atas
    glVertex3f(-15.0, 30.0, -31.5); //kiri atas
    glEnd();


    //ac depan
    glBegin(GL_QUADS);
    glColor3f(0.75, 0.75, 0.75);
    glVertex3f(-15.0, 30.0, -33.0); //kiri bawah
    glVertex3f(-15.0, 22.0, -33.0); //kanan bawah
    glVertex3f(1.0, 22.0, -33.0); //kanan atas
    glVertex3f(1.0, 30.0, -33.0); //kiri atas
    glEnd();


    //ac samping kanan
    glBegin(GL_QUADS);
    glColor3f(0.75, 0.75, 0.75);
    glVertex3f(-15.0, 30.0, -33.0); //kiri bawah
    glVertex3f(-15.0, 22.0, -33.0); //kanan bawah
    glVertex3f(-15.0, 22.0, -31.5); //kanan atas
    glVertex3f(-15.0, 30.0, -31.5); //kiri atas
    glEnd();

     //ac samping kiri
    glBegin(GL_QUADS);
    glColor3f(0.75, 0.75, 0.75);
    glVertex3f(1.0, 30.0, -33.0); //kiri bawah
    glVertex3f(1.0, 22.0, -33.0); //kanan bawah
    glVertex3f(1.0, 22.0, -31.5); //kanan atas
    glVertex3f(1.0, 30.0, -31.5); //kiri atas
    glEnd();

    //ac blkng 2
    glBegin(GL_QUADS);
    glColor3f(0.75, 0.75, 0.75);
    glVertex3f(-15.0, 30.0, -31.5); //kiri bawah
    glVertex3f(-15.0, 22.0, -31.5); //kanan bawah
    glVertex3f(1.0, 22.0, -31.5); //kanan atas
    glVertex3f(1.0, 30.0, -31.5); //kiri atas
    glEnd();

    //papan tulis
    //papan tulis atas
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-15.0, 15.0, -33.0); //kiri bawah
    glVertex3f(1.0, 15.0, -33.0); //kanan bawah
    glVertex3f(1.0, 15.0, -36.0); //kanan atas
    glVertex3f(-15.0, 15.0, -36.0); //kiri atas
    glEnd();

    //papan tulis bawah
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-15.0, 15.0, -33.0); //kiri bawah
    glVertex3f(1.0, -5.0, -33.0); //kanan bawah
    glVertex3f(1.0, -5.0, -36.0); //kanan atas
    glVertex3f(-15.0, -5.0, -36.0); //kiri atas
    glEnd();


    //papan tulis depan
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-15.0, -5.0, -33.0); //kiri bawah
    glVertex3f(-15.0, 15.0, -33.0); //kanan bawah
    glVertex3f(1.0, 15.0, -33.0); //kanan atas
    glVertex3f(1.0, -5.0, -33.0); //kiri atas
    glEnd();


    //papan tulis samping kanan
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-15.0, -5.0, -33.0); //kiri bawah
    glVertex3f(-15.0, 15.0, -33.0); //kanan bawah
    glVertex3f(-15.0, 15.0, -36.0); //kanan atas
    glVertex3f(-15.0, -5.0, -36.0); //kiri atas
    glEnd();

     //papan tulis kiri
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(1.0, -5.0, -33.0); //kiri bawah
    glVertex3f(1.0, 15.0, -33.0); //kanan bawah
    glVertex3f(1.0, 15.0, -36.0); //kanan atas
    glVertex3f(1.0, -5.0, -36.0); //kiri atas
    glEnd();

    //papan tulis blkng
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-15.0, -5.0, -36.0); //kiri bawah
    glVertex3f(-15.0, 15.0, -36.0); //kanan bawah
    glVertex3f(1.0, 15.0, -36.0); //kanan atas
    glVertex3f(1.0, -5.0, -36.0); //kiri atas
    glEnd();

    //papan tulis 2
    //papan tulis atas
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-13.0, 13.0, -33.0); //kiri bawah
    glVertex3f(-1.0, 13.0, -33.0); //kanan bawah
    glVertex3f(-1.0, 13.0, -36); //kanan atas
    glVertex3f(-13.0, 13.0, -36); //kiri atas
    glEnd();

    //papan tulis bawah
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-13.0, 13.0, -33.0); //kiri bawah
    glVertex3f(-1.0, -3.0, -33.0); //kanan bawah
    glVertex3f(-1.0, -3.0, -36); //kanan atas
    glVertex3f(-13.0, -3.0, -36); //kiri atas
    glEnd();


    //papan tulis depan
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-13.0, -3.0, -33.0); //kiri bawah
    glVertex3f(-13.0, 13.0, -33.0); //kanan bawah
    glVertex3f(-1.0, 13.0, -33.0); //kanan atas
    glVertex3f(-1.0, -3.0, -33.0); //kiri atas
    glEnd();


    //papan tulis samping kanan
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-13.0, -3.0, -33.0); //kiri bawah
    glVertex3f(-13.0, 13.0, -33.0); //kanan bawah
    glVertex3f(-13.0, 13.0, -36); //kanan atas
    glVertex3f(-13.0, -3.0, -36); //kiri atas
    glEnd();

     //papan tulis kiri
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-1.0, -3.0, -33.0); //kiri bawah
    glVertex3f(-1.0, 13.0, -33.0); //kanan bawah
    glVertex3f(-1.0, 13.0, -36); //kanan atas
    glVertex3f(-1.0, -3.0, -36); //kiri atas
    glEnd();

    //papan tulis blkng
    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex3f(-13.0, -3.0, -36); //kiri bawah
    glVertex3f(-13.0, 13.0, -36); //kanan bawah
    glVertex3f(-1.0, 13.0, -36); //kanan atas
    glVertex3f(-1.0, 3.0, -36); //kiri atas
    glEnd();

    //kasur atas
    glBegin(GL_QUADS);
    glColor3f(0.5,0,0);
    glVertex3f(-13.0, -3.0, 1.0); //kiri bawah
    glVertex3f(30.0, -3.0, 1.0); //kanan bawah
    glVertex3f(30.0, -3.0, -29.0); //kanan atas
    glVertex3f(-13.0, -3.0, -29.0); //kiri atas
    glEnd();

    //kasur bawah
    glBegin(GL_QUADS);
    glColor3f(0.5,0,0);
    glVertex3f(-13.0, -10.0, 1.0); //kiri bawah
    glVertex3f(30.0, -10.0, 1.0); //kanan bawah
    glVertex3f(30.0, -10.0, -29.0); //kanan atas
    glVertex3f(-13.0, -10.0, -29.0); //kiri atas
    glEnd();

    //kasur depan
    glBegin(GL_QUADS);
    glColor3f(0.5,0,0);
    glVertex3f(-13.0, -10.0, 1.0); //kiri bawah
    glVertex3f(-13.0, -3.0, 1.0); //kanan bawah
    glVertex3f(30.0, -3.0, 1.0); //kanan atas
    glVertex3f(30.0, -10.0, 1.0); //kiri atas
    glEnd();

    //kasur samping kanan
    glBegin(GL_QUADS);
    glColor3f(0.5,0,0);
    glVertex3f(-13.0, -10.0, 1.0); //kiri bawah
    glVertex3f(-13.0, -3.0, 1.0); //kanan bawah
    glVertex3f(-13.0, -3.0, -29.0); //kanan atas
    glVertex3f(-13.0, -10.0, -29.0); //kiri atas
    glEnd();

     //kasur samping kiri
    glBegin(GL_QUADS);
    glColor3f(0.5,0,0);
    glVertex3f(30.0, -10.0, 1.0); //kiri bawah
    glVertex3f(30.0, -3.0, 1.0); //kanan bawah
    glVertex3f(30.0, -3.0, -29.0); //kanan atas
    glVertex3f(30.0, -10.0, -29.0); //kiri atas
    glEnd();

    //kasur blkng
    glBegin(GL_QUADS);
    glColor3f(0.5,0,0);
    glVertex3f(-13.0, -10.0, -29.0); //kiri bawah
    glVertex3f(-13.0, -3.0, -29.0); //kanan bawah
    glVertex3f(30.0, -3.0, -29.0); //kanan atas
    glVertex3f(30.0, -10.0, -29.0); //kiri atas
    glEnd();

    //bantal atas
    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex3f(-9.0, -3.0, -3.0); //kiri bawah
    glVertex3f(2.0, -3.0, -3.0); //kanan bawah
    glVertex3f(2.0, -3.0, -25.0); //kanan atas
    glVertex3f(-9.0, -3.0, -25.0); //kiri atas
    glEnd();

    //bantal bawah
    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex3f(-9.0, -3.0, -3.0); //kiri bawah
    glVertex3f(2.0, -1.0, -3.0); //kanan bawah
    glVertex3f(2.0, -1.0, -25.0); //kanan atas
    glVertex3f(-9.0, -1.0, -25.0); //kiri atas
    glEnd();

    //bantal depan
    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex3f(-9.0, -1.0, -3.0); //kiri bawah
    glVertex3f(-9.0, -3.0, -3.0); //kanan bawah
    glVertex3f(2.0, -3.0, -3.0); //kanan atas
    glVertex3f(2.0, -1.0, -3.0); //kiri atas
    glEnd();

    //bantal samping kanan
    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex3f(-9.0, -1.0, -3.0); //kiri bawah
    glVertex3f(-9.0, -3.0, -3.0); //kanan bawah
    glVertex3f(-9.0, -3.0, -25.0); //kanan atas
    glVertex3f(-9.0, -1.0, -25.0); //kiri atas
    glEnd();

     //bantal samping kiri
    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex3f(2.0, -1.0, -3.0); //kiri bawah
    glVertex3f(2.0, -3.0, -3.0); //kanan bawah
    glVertex3f(2.0, -3.0, -25.0); //kanan atas
    glVertex3f(2.0, -1.0, -25.0); //kiri atas
    glEnd();

    //bantal blkng
    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex3f(-9.0, -1.0, -25.0); //kiri bawah
    glVertex3f(-9.0, -3.0, -25.0); //kanan bawah
    glVertex3f(2.0, -3.0, -25.0); //kanan atas
    glVertex3f(2.0, -1.0, -25.0); //kiri atas
    glEnd();


    //selimut atas
    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex3f(8.0, -3.0, 1.0); //kiri bawah
    glVertex3f(29.0, -3.0, 1.0); //kanan bawah
    glVertex3f(29.0, -3.0, -29.0); //kanan atas
    glVertex3f(8.0, -3.0, -29.0); //kiri atas
    glEnd();

    //selimut bawah
    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex3f(8.0, -3.0, 1.0); //kiri bawah
    glVertex3f(29.0, -1.0, 1.0); //kanan bawah
    glVertex3f(29.0, -1.0, -29.0); //kanan atas
    glVertex3f(8.0, -1.0, -29.0); //kiri atas
    glEnd();

    //selimut depan
    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex3f(8.0, -1.0, 1.0); //kiri bawah
    glVertex3f(8.0, -3.0, 1.0); //kanan bawah
    glVertex3f(29.0, -3.0, 1.0); //kanan atas
    glVertex3f(29.0, -1.0, 1.0); //kiri atas
    glEnd();

    //selimut samping kanan
    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex3f(8.0, -1.0, 1.0); //kiri bawah
    glVertex3f(8.0, -3.0, 1.0); //kanan bawah
    glVertex3f(8.0, -3.0, -29.0); //kanan atas
    glVertex3f(8.0, -1.0, -29.0); //kiri atas
    glEnd();

     //selimut samping kiri
    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex3f(29.0, -1.0, 1.0); //kiri bawah
    glVertex3f(29.0, -3.0, 1.0); //kanan bawah
    glVertex3f(29.0, -3.0, -29.0); //kanan atas
    glVertex3f(29.0, -1.0, -29.0); //kiri atas
    glEnd();

    //selimut blkng
    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex3f(8.0, -1.0, -29.0); //kiri bawah
    glVertex3f(8.0, -3.0, -29.0); //kanan bawah
    glVertex3f(29.0, -3.0, -29.0); //kanan atas
    glVertex3f(29.0, -1.0, -29.0); //kiri atas
    glEnd();

    //ac






}



void init(void)
{
    glClearColor(0.5,1,1,0);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_DEPTH_TEST);
    is_depth=1;
    glMatrixMode(GL_MODELVIEW);
}

void dinding()
{
    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex3f(-20.0, -10.0, 10.0);  //kib
    glVertex3f(-20.0, 30.0, 10.0);  //kia
    glVertex3f(30.0, 30.0, 10.0);   //kaa
    glVertex3f(30.0, -10.0, 10.0);  //kab
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,0);
    glVertex3f(30.0, -10.0, 20.0);
    glVertex3f(30.0, 30.0, 20.0);
    glVertex3f(30.0, 30.0, -40.0);
    glVertex3f(30.0, -10.0, -40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,0);
    glVertex3f(32.0, -10.0, 20.0);
    glVertex3f(32.0, 30.0, 20.0);
    glVertex3f(32.0, 30.0, -40.0);
    glVertex3f(32.0, -10.0, -40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex3f(30.0, -10.0, 20.0);
    glVertex3f(30.0, 30.0, 20.0);
    glVertex3f(32.0, 30.0, 20.0);
    glVertex3f(32.0, -10.0, 20.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex3f(30.0, -10.0, 20.0);
    glVertex3f(30.0, 10.0, 20.0);
    glVertex3f(30.0, 10.0, 40.0);
    glVertex3f(30.0, -10.0, 40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,0);
    glVertex3f(32.0, -10.0, 20.0);
    glVertex3f(32.0, 10.0, 20.0);
    glVertex3f(32.0, 10.0, 40.0);
    glVertex3f(32.0, -10.0, 40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex3f(30.0, -10.0, 40.0);
    glVertex3f(30.0, 10.0, 40.0);
    glVertex3f(32.0, 10.0, 40.0);
    glVertex3f(32.0, -10.0, 40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex3f(32.0, -10.0, 20.0);
    glVertex3f(32.0, 10.0, 20.0);
    glVertex3f(32.0, 10.0, 40.0);
    glVertex3f(32.0, -10.0, 40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,0);
    glVertex3f(32.0, -10.0, -40.0);
    glVertex3f(32.0, 30.0, -40.0);
    glVertex3f(-22.0, 30.0, -40.0);
    glVertex3f(-22.0, -10.0, -40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,0);
    glVertex3f(-20.0, -10.0, -40.0);
    glVertex3f(-20.0, 30.0, -40.0);
    glVertex3f(-20.0, 30.0, 20.0);
    glVertex3f(-20.0, -10.0, 20.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,0);
    glVertex3f(-22.0, -10.0, -40.0);
    glVertex3f(-22.0, 30.0, -40.0);
    glVertex3f(-22.0, 30.0, 20.0);
    glVertex3f(-22.0, -10.0, 20.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex3f(-22.0, -10.0, 20.0);
    glVertex3f(-22.0, 30.0, 20.0);
    glVertex3f(-20.0, 30.0, 20.0);
    glVertex3f(-20.0, -10.0, 20.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex3f(-22.0, -10.0, 40.0);
    glVertex3f(-22.0, 10.0, 40.0);
    glVertex3f(-20.0, 10.0, 40.0);
    glVertex3f(-20.0, -10.0, 40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex3f(-22.0, -10.0, 20.0);
    glVertex3f(-22.0, 10.0, 20.0);
    glVertex3f(-22.0, 10.0, 40.0);
    glVertex3f(-22.0, -10.0, 40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,1,0.5);
    glVertex3f(-20.0, -10.0, 20.0);
    glVertex3f(-20.0, 10.0, 20.0);
    glVertex3f(-20.0, 10.0, 40.0);
    glVertex3f(-20.0, -10.0, 40.0);
    glEnd();






}

void atap()
{
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(4.0, 30.0, 30.0);
    glVertex3f(32.0, 30.0, 30.0);
    glVertex3f(32.0, 30.0, -40.0);
    glVertex3f(4.0, 30.0, -40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.09,0.09,0.09);
    glVertex3f(4.0, 31.5, 30.0);
    glVertex3f(32.0, 31.5, 30.0);
    glVertex3f(32.0, 31.5, -40.0);
    glVertex3f(4.0, 31.5, -40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.09,0.09,0.09);
    glVertex3f(4.0, 31.5, 30.0);
    glVertex3f(32.0, 31.5, 30.0);
    glVertex3f(32.0, 30.0, 30.0);
    glVertex3f(4.0, 30.0, 30.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.09,0.09,0.09);
    glVertex3f(-22, 31.5, -40.0);
    glVertex3f(32.0, 31.5, -40.0);
    glVertex3f(32.0, 30.0, -40.0);
    glVertex3f(-22.0, 30.0, -40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.09,0.09,0.09);
    glVertex3f(-22, 31.5, -40.0);
    glVertex3f(-22.0, 31.5, 25.0);
    glVertex3f(-22.0, 30.0, 25.0);
    glVertex3f(-22.0, 30.0, -40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.09,0.09,0.09);
    glVertex3f(4.0, 31.5, 25.0);
    glVertex3f(-22.0, 31.5, 25.0);
    glVertex3f(-22.0, 30.0, 25.0);
    glVertex3f(4.0, 30.0, 25.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.09,0.09,0.09);
    glVertex3f(4.0, 31.5, -40.0);
    glVertex3f(4.0, 31.5, 30.0);
    glVertex3f(4.0, 30.0, 30.0);
    glVertex3f(4.0, 30.0, -40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.09,0.09,0.09);
    glVertex3f(-22.0, 31.5, 25.0);
    glVertex3f(4.0, 31.5, 25.0);
    glVertex3f(4.0, 31.5, -40.0);
    glVertex3f(-22.0, 31.5, -40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-22.0, 30.0, 25.0);
    glVertex3f(4.0, 30.0, 25.0);
    glVertex3f(4.0, 30.0, -40.0);
    glVertex3f(-22.0, 30.0, -40.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.99,0.90,0.90);
    glVertex3f(28.0, 31.5, 30.0);
    glVertex3f(28.0, 58.0, -5.0);
    glVertex3f(28.0, 31.5, -40.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.99,0.90,0.90);
    glVertex3f(4.0, 31.5, 30.0);
    glVertex3f(4.0, 58.0, -5.0);
    glVertex3f(4.0, 31.5, -40.0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.99,0.90,0.90);
    glVertex3f(-22.0, 31.5, 25.0);
    glVertex3f(-22.0, 53.0, -5.0);
    glVertex3f(-22.0, 31.5, -40.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.09,0.09,0.09);
    glVertex3f(0.0, 58.0, -5.0);
    glVertex3f(0.0, 31.5, 30.0);
    glVertex3f(30.0, 31.5, 30.0);
    glVertex3f(30.0, 58.0, -5.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.09,0.09,0.09);
    glVertex3f(0.0, 58.0, -5.0);
    glVertex3f(0.0, 31.5, -40.0);
    glVertex3f(30.0, 31.5, -40.0);
    glVertex3f(30.0, 58.0, -5.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.09,0.09,0.09);
    glVertex3f(-22.0, 53.0, -5.0);
    glVertex3f(-22.0, 31.5, 25.0);
    glVertex3f(3.0, 31.5, 25.0);
    glVertex3f(3.0, 53.0, -5.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.09,0.09,0.09);
    glVertex3f(-22.0, 53.0, -5.0);
    glVertex3f(-22.0, 31.5, -40.0);
    glVertex3f(3.0, 31.5, -40.0);
    glVertex3f(3.0, 53.0, -5.0);
    glEnd();
}



void tampil(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(0,0,3,0,0,0,0,1,0);
    glRotatef(xrot, 1, 0, 0);
    glRotatef(yrot, 0, 1, 0);

    atap();
    dinding();
    lantai();
    pintu();

    glPushMatrix();
    glPopMatrix();

    glutSwapBuffers();
}
void idle(){
    if(!mouseDown){
        xrot += 0.3f;
        yrot += 0.4f;
    }
    glutPostRedisplay();
}

void mouse(int button, int state, int x, int y){
    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
        mouseDown = true;
        xdiff = x - yrot;
        ydiff = -y + xrot;
    }
    else
    mouseDown = false;
}

void mouseMotion(int x, int y){
    if(mouseDown){
        yrot = x - xdiff;
        xrot = y + ydiff;

        glutPostRedisplay();
    }
}

void keyboard(unsigned char key,int x, int y)
{
    switch(key)
    {

    case 'w':
    case 'W':
        glTranslatef(0.0, 0.0, 3.0);
        break;
    case 'd':
    case 'D':
        glTranslatef(3.0, 0.0, 0.0);
        break;
    case 's':
    case 'S':
        glTranslatef(0.0, 0.0, -3.0);
        break;
    case 'a':
    case 'A':
        glTranslatef(-3.0, 0.0, 3.0);
        break;
    case '7':
        glTranslatef(0.0, 3.0, 0.0);
        break;
    case '9':
        glTranslatef(0.0, -3.0, 0.0);
        break;
    case '2':
        glRotatef(2.0, 1.0, 0.0, 0.0);
        break;
    case '8':
        glRotatef(-2.0, 1.0, 0.0, 0.0);
        break;
    case '6':
        glRotatef(2.0, 0.0, 1.0, 0.0);
        break;
    case '4':
        glRotatef(-2.0, 0.0, 1.0, 0.0);
        break;
    case '1':
        glRotatef(2.0, 0.0, 0.0, 1.0);
        break;
    case '3':
        glRotatef(-2.0, 0.0, 0.0, 1.0);
        break;
    case '5':
        if (is_depth)
        {
            is_depth = 0;
            glDisable(GL_DEPTH_TEST);
        }
        else
        {
            is_depth = 1;
            glEnable(GL_DEPTH_TEST);
        }
    }
    tampil();

}

void ukuran(int lebar, int tinggi)
{
    if (tinggi == 0) tinggi = 1;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50.0, lebar / tinggi, 5.0, 500.0);
    glTranslatef(0.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
}
