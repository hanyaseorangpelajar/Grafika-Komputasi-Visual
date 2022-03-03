///*
//Nama		: Adri Audifirst
//NIM			: 24060121140152
//Nama File	: GL_LINE_FAN.cpp
//Deskripsi	: membuat segitiga seperti kipas.
//*/
//
//#include <GL/glut.h>
//#include <stdlib.h>
//
//void FAN(void)
//{
//	 glClear(GL_COLOR_BUFFER_BIT);
// glBegin(GL_TRIANGLE_FAN);
// glColor3f(0,1,1);
//    	glVertex2f(0.0,0.0);
//   	glColor3f(1.0f, 0.0f, 0.0f); glVertex2f(0.3,0.5);
//   	glColor3f(0.0f, 1.0f, 1.0f); glVertex2f(0.5,0.3);
//   	glColor3f(0.0f, 0.0f, 0.0f); glVertex2f(0.35,0.2);
//		glVertex2f(0.4,0.0);
//	glColor3f(0.0f, 0.0f, 0.0f); glVertex2f(0.35,-0.2);	
// 	glColor3f(0.0f, 1.0f, 1.0f); glVertex2f(0.5,-0.3);
// 	glColor3f(1.0f, 0.0f, 0.0f); glVertex2f(0.3,-0.5);
// 	
// 	//iya kak, sebagian segitiga tidak tampak
// 	//karena saya pakai gradiasi warna nya,
// 	//soalnya keren.
// 
//    
// glEnd();
// glFlush();
//}
//
//int main(int argc, char* argv[])
//{
//	glutInit(&argc, argv);
//	glutInitWindowSize(400,400);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//	glutCreateWindow("GL_TRIANGLE_FAN");
//	glutDisplayFunc(FAN);
//	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
//	glutMainLoop();
//	return 0;
//}
