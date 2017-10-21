//
//#include <fstream>
//#include <iostream>
//#include <stdlib.h>
//#include <glut.h>
//#include <vector>
////first of all we have to add these above files...
//using namespace std;
//
//
//
////Dimentions of the screen...
//int width = 680;
//int height = 640;
//GLfloat x = 0.0;
//GLfloat dy = 0.0001;
//
//
//
//void draw(){
//
//	glBegin(GL_POINTS);
//	glVertex2f(x*cos(dy+1),x*sin(dy+1));
//	//glVertex2f(1.0-x,0.75);
//	glEnd();
//	glFlush();
//	glutPostRedisplay();
//}
//
//
//
//void display(){
//	
//	glClearColor(0,0,0,0);//setting the color for the background (Red,Green,Blue,Alpha)
//	//glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(1.0,1.0,1.0);
//	draw();
//	
//	
//	
//}
//
//
////Now we will create our most essential function of our program that is the main function...
//
//int main(int arg, char **argv){
//
//	//initializing the glut library
//	//gluOrtho2D(-1000,1000,-1000,1000);
//	glutInit(&arg, argv);
//	
//	//setting our display mode and the frame buffer and color settings
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // single buffer and rgb color settings
//	//setting the with and height of the window
//	glutInitWindowSize(width, height);
//	//Now setting our position of the window which will be opened..
//	glutInitWindowPosition(30, 30);
//	//Now giving the title name to the window..
//	glutCreateWindow("farazfirst");
//	
//
//	
//	//Now calling for the display function through call backs
//	glutDisplayFunc(display);
//		
//	glutMainLoop();//main loop which runs again and again...
//	return 0;
//}
