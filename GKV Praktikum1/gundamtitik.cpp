///*
//Nama	: Adri Audifirst
//NIM		: 24060121140152
//*/
//
//
//
//#include <GL/glut.h>
//#include <stdlib.h>
//
//void point(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glPointSize(15.0f);
//	glBegin(GL_POINTS);
//			// FILLER
//	glColor3f(1.0f, 0.0f, 0.0f);
//	glVertex3f(0.0, -0.35, 0.0);
//	
//	glColor3f(1.0f, 0.0f, 0.0f);
//	glVertex3f(0.0, -0.41, 0.0);
//	
//	glColor3f(1.0f, 0.0f, 0.0f);
//	glVertex3f(0.0, -0.47, 0.0);
//	
//	glColor3f(1.0f, 0.0f, 0.0f);
//	glVertex3f(0.0, -0.53, 0.0);
//	
//	glColor3f(1.0f, 0.0f, 0.0f);
//	glVertex3f(0.04, -0.53, 0.0);
//	
//	glColor3f(1.0f, 0.0f, 0.0f);
//	glVertex3f(-0.04, -0.53, 0.0);
//	
//	glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
//	glVertex3f(-0.17, -0.30, 0.0);
//	
//	glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
//	glVertex3f(-0.17, -0.30, 0.0);
//	
//	glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
//	glVertex3f(-0.13, -0.35, 0.0);
//	
//	glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
//	glVertex3f(-0.08, -0.41, 0.0);
//	
//	glColor3f(0.5f,0.5f,0.5f);
//	glVertex3f(-0.08, -0.47, 0.0);
//	
//	glColor3f(0.5f,0.5f,0.5f);
//	glVertex3f(-0.13, -0.41, 0.0);
//	
//	glColor3f(0.5f,0.5f,0.5f);
//	glVertex3f(-0.17, -0.37, 0.0);
//	
//	glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
//	glVertex3f(0.0, 0.07, 0.0);
//	
//	glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
//	glVertex3f(0.0, 0.13, 0.0);
//	
//	glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
//	glVertex3f(0.0, 0.17, 0.0);
//	
//	glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
//	glVertex3f(0.0, 0.21, 0.0);
//	
//	glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
//	glVertex3f(0.0, 0.28, 0.0);
//	
//	glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
//	glVertex3f(0.05, 0.13, 0.0);
//	
//	glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
//	glVertex3f(0.05, 0.17, 0.0);
//	
//	glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
//	glVertex3f(0.05, 0.23, 0.0);
//	
//	glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.05, 0.13, 0.0);
//	
//	glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.05, 0.17, 0.0);
//	
//	glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.05, 0.23, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(0.0, -0.06, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(0.0, -0.12, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(0.0, -0.18, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(0.0, -0.22, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(0.05, 0.0, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(0.05, -0.06, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(0.05, -0.12, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(0.05, -0.18, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(0.05, -0.22, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(0.05, -0.28, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(-0.05, 0.0, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(-0.05, -0.06, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(-0.05, -0.12, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(-0.05, -0.18, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(-0.05, -0.22, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(-0.05, -0.28, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(-0.1, -0.06, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(-0.1, -0.12, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(-0.1, -0.18, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(-0.1, -0.22, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(-0.1, -0.28, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(0.1, -0.06, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(0.1, -0.12, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(0.1, -0.18, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(0.1, -0.22, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(0.1, -0.28, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(0.15, -0.07, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(0.15, -0.07, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(0.15, -0.13, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(0.15, -0.18, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(0.15, -0.23, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(-0.15, -0.07, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(-0.15, -0.13, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(-0.15, -0.18, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(-0.15, -0.23, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(0.2, -0.07, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(0.22, -0.07, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(0.22, -0.01, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(0.18, -0.13, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(0.18, -0.17, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(-0.2, -0.07, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(-0.22, -0.07, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(-0.22, -0.01, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(-0.18, -0.13, 0.0);
//	
//	glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
//	glVertex3f(-0.18, -0.17, 0.0);
//	
//	glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
//	glVertex3f(0.10, 0.07, 0.0);
//
//	glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
//	glVertex3f(0.14, 0.07, 0.0);
//	
//	glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
//	glVertex3f(0.18, 0.07, 0.0);
//	
//	glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
//	glVertex3f(0.19, 0.13, 0.0);
//	
//	glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
//	glVertex3f(0.23, 0.13, 0.0);
//	
//	glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
//	glVertex3f(-0.22, 0.12, 0.0);
//	
//	glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
//	glVertex3f(-0.19, 0.12, 0.0);
//	
//	glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
//	glVertex3f(-0.17, 0.07, 0.0);
//	
//	glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
//	glVertex3f(-0.14, 0.07, 0.0);
//	
//	glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
//	glVertex3f(-0.1, 0.07, 0.0);
//	
//	glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
//	glVertex3f(0.17, -0.29, 0.0);
//	
//	glColor3f(0.5f,0.5f,0.5f);
//	glVertex3f(0.18, -0.35, 0.0);
//	
//	glColor3f(0.5f,0.5f,0.5f);
//	glVertex3f(0.13, -0.41, 0.0);
//	
//	glColor3f(0.5f,0.5f,0.5f);
//	glVertex3f(0.09, -0.47, 0.0);
//	
//	glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
//	glVertex3f(0.13, -0.35, 0.0);
//	
//	glColor4f(1.0f, 1.0f, 1.0f, 0.0f);
//	glVertex3f(0.08, -0.41, 0.0);
//	
//	//OUTLINE
//			//CENTER POINT
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.0, 0.0, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.05, 0.07, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.1, 0.13, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.14, 0.13, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.19, 0.19, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.23, 0.19, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.27, 0.19, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.27, 0.13, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.27, 0.07, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.27, 0.01, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.27, -0.05, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.23, 0.06, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.18, -0.001, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.14, -0.001, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.1, -0.001, 0.0);
//		
//	 //WAJAH KANAN
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.22, -0.11, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.22, -0.17, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.22, -0.23, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.18, -0.23, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.26, -0.23, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.30, -0.23, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.30, -0.17, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.30, -0.29, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.26, -0.29, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.30, -0.35, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.26, -0.35, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.22, -0.35, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.22, -0.29, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.22, -0.41, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.26, -0.41, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.18, -0.41, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.22, -0.47, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.18, -0.47, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.14, -0.47, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.09, -0.53, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.04, -0.47, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.04, -0.41, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.04, -0.35, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.08, -0.35, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.13, -0.29, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.04, -0.59, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.0, -0.59, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.04, -0.59, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.08, -0.53, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.03, -0.47, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.03, -0.41, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.03, -0.35, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.0, -0.29, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.08, -0.35, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.13, -0.29, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.18, -0.23, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.22, -0.23, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.26, -0.23, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.26, -0.29, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.22, -0.29, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.22, -0.35, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.26, -0.35, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.22, -0.41, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.18, -0.41, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.18, -0.47, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.13, -0.47, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.05, 0.06, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.05, 0.06, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.1, 0.12, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.14, 0.12, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.18, 0.18, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.22, 0.18, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.26, 0.18, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.26, 0.12, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.26, 0.06, 0.0);	
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.26, 0.0, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.26, -0.06, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.22, -0.12, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.22, -0.18, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.30, -0.18, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.30, -0.24, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.22, -0.47, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.26, -0.41, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.3, -0.3, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.3, -0.36, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.1, 0.0, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.14, 0.0, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.18, 0.0, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.18, 0.0, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.22, 0.06, 0.0);			
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.0, 0.35, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.05, 0.29, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.1, 0.23, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(-0.1, 0.17, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.05, 0.29, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.1, 0.23, 0.0);
//	
//	glColor3f(0.0f, 0.0f, 0.0f);
//	glVertex3f(0.1, 0.18, 0.0);
//	
//
//	glEnd();
//	glFlush();
//}
//
//int main(int argc, char* argv[])
//{
//	glutInit(&argc, argv);
//	glutInitWindowSize(603,437);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//	glutCreateWindow("gundam");
//	glutDisplayFunc(point);
//	glClearColor(1.0f, 1.0f, 0.0f, 0.0f);
//	glutMainLoop();
//	return 0;
//}
