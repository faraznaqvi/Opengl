//
//#include <fstream>
//#include <iostream>
//#include <stdlib.h>
//#include <glut.h>
//#include <math.h>
////first of all we have to add these above files...
//
//int width = 480;
//#define size 10
//int state = 0;
//int height = 640;
//GLfloat x = 0.0;
//GLfloat dy = 0.0001;
//float i = 0.0;
//int r = 1;
//
//class points{
//	private:
//	float x;float y;GLfloat arrays[size][2];
//
//
//public:
//	points(float xx,float yy){x = xx;y = yy;}
//	
//public:
//	
//	void save_mouse_coordinate(float xx, float yy){
//		arrays[state][0] = xx;
//		arrays[state][1] = yy;
//		if(state < size){
//			state++;
//		}
//		else{
//			state = size-1;
//		}
//	}
//	void set_x(float xx){x = xx;}
//	void set_y(float yy){y = yy;}
//	float get_x(){return x;}
//	float get_y(){return y;}
//
//	void draw_points(){
//	for(int i = 0; i< size;i++){
//		glBegin(GL_POINTS);
//		glVertex2f(arrays[i][0],arrays[i][1]);
//		glEnd();
//	}
//	
//	}
//
//}
//
//
//
//
//
//int display(){
//	glClearColor(0,0,0,0);//setting the color for the background (Red,Green,Blue,Alpha)
//	glClear(GL_COLOR_BUFFER_BIT);
//	//its empty , now lets make a line and animate it....
//
//	glBegin(GL_POINTS);
//		glVertex2f(20,30);
//		glEnd();
//
//
//
//	glFlush();
//	return 0;
//}
//
//
//
//
//
//
////Now we will create our most essential function of our program that is the main function...
//
//int main(int arg, char **argv){
//
//	//initializing the glut library
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
//	glOrtho(-20,20,-20,20,1,-1);
//	//Now calling for the display function through call backs
//	glutDisplayFunc(display);
//		
//	glutMainLoop();//main loop which runs again and again...
//	return 0;
//}
