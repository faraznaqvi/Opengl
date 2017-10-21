//#include <fstream>
//#include <iostream>
//#include <stdlib.h>
//#include <glut.h>
//using namespace std;
//#include<Windows.h>
//#include<MMSystem.h>
//#include "RGBPixMap.h"
//
////including files 
//
////setting the height and the width 
//int width = 480;
//int height = 640;
//
//
////initializing pix array of type rgbpixmap-> global
//RGBpixmap pix[6];
//
////init function to initial setup for our environment
//void init()
//{
//		glClearColor(0.0, 0.0, 0.0, 0.0);
//		glMatrixMode(GLUT_SINGLE | GLUT_RGB);
//		glLoadIdentity();
//		glOrtho(-90.0, 100.0, -15.0, 100.0, 0.0, 1.0);
//}
//
//int i=0;
////display function which is going to display everything and its being called by call back function.
//void display(){
//	i = i + 0.01;
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	glOrtho(-20,20,-20,20,-1,1);
//	
//	glEnable(GL_ALPHA_TEST);
//	glAlphaFunc(GL_EQUAL,1.0);
//
//	glPixelZoom(1,1);
//	glRasterPos2i(-20+i,-20);//cursor will move to this position to draw the image
//	pix[0].draw();//drawing the image which was loaded
//	
//	glutSwapBuffers();
//	
//	glFlush();
//	glutPostRedisplay();
//}
//
//
////adding the main function
//int main(int arg, char **argv){
//	glutInit(&arg,argv);
//	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
//	glutInitWindowSize(width, height);
//	glutInitWindowPosition(30, 30);
//	glutCreateWindow("farazfirst");
//	pix[0].readBMPFile("MarioStanding.bmp");//error because we have not initialized the pix array
//	init();
//	
//	glutDisplayFunc(display);
//		
//	glutMainLoop();
//	return 0;
//}
//
