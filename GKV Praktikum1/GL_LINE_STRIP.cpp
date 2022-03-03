///*
//Nama		: Adri Audifirst
//NIM			: 24060121140152
//Nama File	: GL_LINE_STRIP.cpp
//Deskripsi	: membuat garis-garis dengan menghubungkan ujung garis sebagai titik pertama untuk garis selanjutnya.
//*/
//
//#include <GL/glut.h>
//#include <stdlib.h>
//
//void STRIP(void)
//{
//glClear(GL_COLOR_BUFFER_BIT);
//	glBegin(GL_LINE_STRIP);
//		//Ribbon
//			//KIRI
//		glColor3f(0.0f, 1.0f, 0.0f); glVertex3f(-0.35, 0.2, 0.00);
//		glColor3f(0.0f, 0.0f, 1.0f); glVertex3f(-0.35, -0.2, 0.00);
//		glColor3f(1.0f, 0.0f, 1.0f); glVertex3f(0.0, 0.0, 0.00);
//			//KANAN
//		glColor3f(0.0f, 1.0f, 0.0f); glVertex3f(0.35, 0.2, 0.00);
//		glColor3f(0.0f, 0.0f, 1.0f); glVertex3f(0.35, -0.2, 0.00);
//		glColor3f(1.0f, 0.0f, 1.0f); glVertex3f(0.0, 0.0, 0.00);
//		
//		glColor3f(0.0f, 1.0f, 0.0f); glVertex3f(-0.35, 0.2, 0.00);
//		
//
//		
//	glEnd(); glFlush();
//}
//
//int main(int argc, char* argv[])
//{
//	glutInit(&argc, argv);
//	glutInitWindowSize(400,400);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//	glutCreateWindow("STRIP");
//	glutDisplayFunc(STRIP);
//	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
//	glutMainLoop();
//	return 0;
//}
