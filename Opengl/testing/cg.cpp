//
//#include <fstream>
//#include <iostream>
//#include <stdlib.h>
//#include <glut.h>
////including header files
//
//using namespace std;
//void introscreen(); //giving a prototype
////init function
//void init()
//{
//		glClearColor(0.0, 0.0, 0.0, 0.0);
//		glMatrixMode(GLUT_SINGLE | GLUT_RGB);
//		glLoadIdentity();
//		glOrtho(-90.0, 100.0, -15.0, 100.0, 0.0, 1.0);
//
//	
//}
//
//
////display function 
//
//void display(){
//	
//	introscreen();
//	glFlush();
//		glutPostRedisplay();
//		
//}
//
//
////Now we make renderbitmap function used to convert character into rasterize 
//void renderbitmap(float x,float y, void *font, char *string){
//char *c;
//glRasterPos2f(x,y);
//for(c=string; *c != '\0';c++){
//glutBitmapCharacter(font,*c);
//}
//}
//
////setting up our introscreen function from which we will pass string
//void introscreen(){
//glColor3f(1.f,1.f,1.f);
//char buf[100] = {0};
//sprintf_s(buf,":::::::::Faraz::::::::::");
//renderbitmap(-80,40,GLUT_BITMAP_TIMES_ROMAN_24,buf);
//sprintf_s(buf,"::::::::::::::::::::::::");
//renderbitmap(-80,35,GLUT_BITMAP_TIMES_ROMAN_24,buf);
//
//}
//
//
//
//
//
//
//
//
//int width = 480;
//int height = 640;
//
////Now our main function
//
//int main(int arg, char **argv){
//	glutInit(&arg,argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//	glutInitWindowSize(width, height);
//	glutInitWindowPosition(30, 30);
//	glutCreateWindow("farazfirst");
//	
//	init();
//	
//	glutDisplayFunc(display);
//		
//	glutMainLoop();
//	return 0;
//}
//
//
