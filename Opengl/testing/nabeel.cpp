//#include<stdio.h>
//#include<iostream>
//#include<math.h>
//#include<glut.h>
//#include<vector>// important for using vectors and it is built in...
//using namespace std;
//int width = 680;
//int height = 640;
//void main(int arg, char **argv){
//
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
//	glutMainLoop();//main loop 
//}
//void display(){
//	gluOrtho2D(-100,100,-100,100);
//	glClearColor(0,0,0,0);//setting the color for the background (Red,Green,Blue,Alpha)
//	//glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(1.0,1.0,1.0);
//	drawCircle(10);
//	glutPostRedisplay();
//}
//
//const float deg2rad= 3.14159/180;
//
//void drawCircle(float radius)
//{
//	glBegin(GL_POINTS);
//
//	for (float i=0; i < 40; i++)
//	{
//
//		float degInRad = i*  deg2rad;
//		glVertex2f(cos(degInRad)*radius, sin(degInRad)*radius);
//	}
//	glEnd();
//	glutPostRedisplay();
//	glFlush();
//}