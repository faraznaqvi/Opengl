#include<stdio.h>
#include<iostream>
#include<math.h>
#include<glut.h>
#include<vector>// important for using vectors and it is built in...
using namespace std;


int width = 680;
int height = 640;

class point{
public: point(int xx, int yy){x=xx;y=yy;}
		point();
		int x,y;
};


class turtle{

public:
	turtle(point initial){
		x= initial.x;
		y = initial.y;
	}
	void line_to(int,float);
	void move_to(int,float);
	int x,y,x1,y1;
};

void turtle::line_to(int distance, float angle){


	x1 = distance*cos(angle);
	y1 = distance*sin(angle);


	glBegin(GL_LINES);
		glVertex2f(x,y);
		glVertex2f(x1,y1);
	glEnd();
	glFlush();
		x = x1;
		y = y1;
}

void turtle::move_to(int distance, float angle){
	x1 = distance*cos(angle);
	y1 = distance*sin(angle);
	x = x1;
	y = y1;
}


void display(void);

void main(int arg, char **argv){

	glutInit(&arg, argv);
	
	//setting our display mode and the frame buffer and color settings
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // single buffer and rgb color settings
	//setting the with and height of the window
	glutInitWindowSize(width, height);
	//Now setting our position of the window which will be opened..
	glutInitWindowPosition(30, 30);
	//Now giving the title name to the window..
	glutCreateWindow("farazfirst");
	

	
	//Now calling for the display function through call backs
	glutDisplayFunc(display);
	glutMainLoop();//main loop 
}

void display(){
	gluOrtho2D(-100,100,-100,100);
	glClearColor(0,0,0,0);//setting the color for the background (Red,Green,Blue,Alpha)
	//glClear(GL_COLOR_BUFFER_BIT);
	float distance = 20;
	glBegin(GL_POINTS);
		glVertex2f(0,0);
		glEnd();
	point p1(0,0);
	point p2(10,10);
	point p3(0,-50);
	point p4(20,-5);
	turtle t1(p1);
	t1.line_to(distance,90);
	t1.line_to(distance,45);
	t1.move_to(distance,35);
	t1.line_to(2*distance,25);
	glColor3f(1.0,1.0,1.0);
	//glutPostRedisplay();
	glFlush();
}

