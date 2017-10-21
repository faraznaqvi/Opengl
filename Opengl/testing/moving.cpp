//#include <stdlib.h>
//#include <glut.h>
//#include <iostream>
//#include "RGBPixMap.h"
//// including files
//
//using namespace std;
//RGBpixmap pix[1];
//float xr = 0, yr = 0; //to control the object's movement
//
//
//
////adding display function now 
//void display(){
//	yr = yr + 0.001;
//	xr = xr + 0.001;
//glClear(GL_COLOR_BUFFER_BIT);
//glColor3f(0,0,1);
//
//glBegin(GL_QUADS);//object made with the help of quads
//glVertex2f(200+xr,100+yr);
//glVertex2f(300+xr,100+yr);
//glVertex2f(300+xr,200+yr);
//glVertex2f(200+xr,200+yr);
//glEnd();
//
//glPixelZoom(1,1);
//glRasterPos2f(xr+30,yr+20);
//pix[0].draw();
//
//glFlush();
//glutPostRedisplay();
//glutSwapBuffers();
//}
//
//
//
//
////lets now setup our keyboard controlling function
//void specialkey(int key,int x, int y){
//	switch(key){
//	case GLUT_KEY_UP://when the up key is pressed
//		yr = -yr;
//		cout<<y<<endl;
//		glutPostRedisplay();
//		break;
//	case GLUT_KEY_DOWN://when the down arrow key is pressed
//		yr--;
//		cout<<y<<endl;
//		glutPostRedisplay();
//		break;
//	case GLUT_KEY_LEFT://when the left arrow key is pressed
//		xr--;
//		cout<<x<<endl;
//		glutPostRedisplay();
//		break;
//	case GLUT_KEY_RIGHT://when the right arrow  key is pressed
//		xr++;
//		cout<<x<<endl;
//		glutPostRedisplay();
//		break;
//	}
//}
//
////setting up our main function 
//int main(int argc, char** argv){
//	printf("use array key");
//
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
//	glutInitWindowSize(400,400);
//	glutInitWindowPosition(600,50);
//	glutCreateWindow("moving");
//	pix[0].readBMPFile("marioStanding.bmp");
//	glutDisplayFunc(display);//display call back function
//
//	glClearColor(0,1,0,0);
//	gluOrtho2D(0.0,400,0.0,400);
//	glutSpecialFunc(specialkey); // keyboard call back function
//
//	glutMainLoop();
//	return 0;
//}
//
