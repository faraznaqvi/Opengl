//#include<stdio.h>
//#include<iostream>
//#include<math.h>
//#include<glut.h>
//#include<vector>// important for using vectors and it is built in...
//using namespace std;
//
//
//class point{
//public: point(int xx, int yy){x=xx;y=yy;}
//		int x,y;
//};
//
//class triangle{
//	
//public: triangle(point p1,point p2,point p3){
//			tri.push_back(p1);
//			tri.push_back(p2);
//			tri.push_back(p3);
//		}
//		vector<point> tri;
//		int get_triangle_size(void);
//};
//
//int triangle::get_triangle_size(){
//return tri.size();
//}
//
//
//
//int width = 680;
//int height = 640;
//
//
//
//void display(void);
//void set_triangle(void);
//void tween(triangle, triangle);
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
//
//void display(){
//	gluOrtho2D(-100,100,-100,100);
//	glClearColor(0,0,0,0);//setting the color for the background (Red,Green,Blue,Alpha)
//	//glClear(GL_COLOR_BUFFER_BIT);
//
//	set_triangle();
//	glColor3f(1.0,1.0,1.0);
//	glutPostRedisplay();
//}
//
//
//void set_triangle(){
//point p1(-50,-90);
//point p2(-40,-20);
//point p3(-19,-90);
//
//triangle t1(p1,p2,p3);
//
//point p4(20,20);
//point p5(10,-10);
//point p6(30,20);
//
//triangle t2(p4,p5,p6);
//glBegin(GL_TRIANGLES);
//for(int i=0;i<t1.get_triangle_size();i++){
//	glVertex2f(t1.tri[i].x,t1.tri[i].y);
//}
//glEnd();
//glBegin(GL_TRIANGLES);
//for(int i=0;i<t1.get_triangle_size();i++){
//	glVertex2f(t2.tri[i].x,t2.tri[i].y);
//}
//glEnd();
//
//tween(t1,t2);
//
//glFlush();
//
//}
//
//
//void tween(triangle t1, triangle t2){
//
//	glBegin(GL_TRIANGLES);
//for(float i=0;i<=1;i=i+0.4){
//	for(float j=0;j<t1.get_triangle_size();j++){
//			float x = t1.tri[j].x+(t2.tri[j].x-t1.tri[j].x)*i;
//			float y = t1.tri[j].y+(t2.tri[j].y-t1.tri[j].y)*i;
//			glVertex2f(x,y);
//		}
//	}
//glEnd();

//}