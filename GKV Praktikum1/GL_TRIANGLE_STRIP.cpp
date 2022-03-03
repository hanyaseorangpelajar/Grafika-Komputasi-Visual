///*
//Nama		: Adri Audifirst
//NIM			: 24060121140152
//Nama File	: GL_TRIANGLE_STRIP.cpp
//Deskripsi	: membuat segitiga vertex yang bebas.
//*/
//
//#include <GL/glut.h>
//#include <stdlib.h>
//
//void TRIANGLE_STRIP(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glBegin(GL_TRIANGLE_STRIP);
//	glVertex2f(-0.25, -0.25);
//	glVertex2f(0.0, 0.25);
//	glVertex2f(0.25, -0.25);
//	glVertex2f(0.5, 0.25);
//	glVertex2f(0.75, -0.25);
//	glVertex2f(1.0, 0.25);
//	glEnd(); glFlush();
//}
//
//int main(int argc, char* argv[])
//{
//	glutInit(&argc, argv);
//	glutInitWindowSize(1080,1080);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//	glutCreateWindow("GL_TRIANGLE_STRIP");
//	glutDisplayFunc(TRIANGLE_STRIP);
//	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
//	glutMainLoop();
//	return 0;
//}
