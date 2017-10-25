

#include<stdio.h>
#include<iostream>
#include<math.h>
#include<glut.h>
#include<vector>// important for using vectors and it is built in...
using namespace std;



class point{
public: point(int xx, int yy){x=xx;y=yy;}
		int x,y;
};

vector<point> viki;
vector<point> viki2;

int width = 680;
int height = 640;



void display(void);
void set_triangle(void);
void mouse(int,int,int,int);
void keyboard(unsigned char,int,int);




void mouse(int button,int state,int x, int y){
	float x1 = x ;
	float y1 = height-y;
	if(button ==GLUT_LEFT_BUTTON && state==GLUT_DOWN){
		
		glBegin(GL_POINTS);
			glVertex2f(x1,y1);
		glEnd();
		glFlush();
		point p(x1,y1);
		viki.push_back(p);
		glutPostRedisplay();
	}
	if(button==GLUT_RIGHT_BUTTON && state== GLUT_DOWN){
		
		cout<<x<< " , " <<y<<endl;
		glBegin(GL_POINTS);
		glVertex2f(x1,y1);
		glEnd();
		glFlush();
		point p(x1,y1);
		viki2.push_back(p);
		glutPostRedisplay();
	}


}


float position=0;
float interval = 0.01;
void keyboard(unsigned char key,int x,int y){

	switch(key){
	
	case 'f':
		glBegin(GL_POLYGON);
			for(int i =0; i<viki.size();i++){
				glVertex2f(viki[i].x,viki[i].y);
			}
		glEnd();
		/*if(position>=1){
			position = intervals;
		}
		position=position+ intervals;*/
		glFlush();
		break;
	case 's':
		glBegin(GL_POLYGON);
			for(int i =0; i<viki.size();i++){
				glVertex2f(viki2[i].x,viki2[i].y);
			}
		glEnd();
		/*if(position>=1){
			position = intervals;
		}
		position=position+ intervals;*/
		glFlush();
		break;
	case 'c':
		glClearColor(0,0,0,0);
		glClear(GL_COLOR_BUFFER_BIT);
		glLoadIdentity();
		glutPostRedisplay();
		position = 0;
		break;
	case 'w':
		
		if(viki.size()>viki2.size()){
			viki2.push_back(viki2[viki2.size()-1]);
		}
		if(viki.size()<viki2.size()){
			viki.push_back(viki[viki.size()-1]);
		}

	case 't':
		glBegin(GL_POLYGON);
			//for(float i=0;i<=1;i=i+0.4){
				for(float j=0;j<viki.size();j++){
					float x = viki[j].x+(viki2[j].x-viki[j].x)*position;
					float y = viki[j].y+(viki2[j].y-viki[j].y)*position;
					glVertex2f(x,y);
					cout<<"X= "<<x<<" Y= "<<y<< "position= "<<position<<endl;
				}
			//}
		glEnd();
		if(position>=1){
			position = interval;
		}
		position=position+ interval;
		glFlush();
		break;

	}

	

	
	//glutPostRedisplay();

}









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
	glutMouseFunc(mouse);
	//glutSpecialFunc(keyboard);
	glutKeyboardFunc(keyboard);
	//Now calling for the display function through call backs
	glutDisplayFunc(display);
	glutMainLoop();//main loop 
}

void display(){
	glViewport( 0,0, 700, 700 );
glMatrixMode( GL_PROJECTION );
glLoadIdentity();
glOrtho( 0.0, 700.0, 0.0, 700.0, 1.0, -1.0 );
	//gluOrtho2D(-100,100,-100,100);
	glClearColor(0,0,0,0);//setting the color for the background (Red,Green,Blue,Alpha)
	//glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POINTS);
	glVertex2f(0,0);
	glEnd();
	//set_triangle();
	
	//glutPostRedisplay();
	glFlush();
}

