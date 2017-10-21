//#include<stdio.h>
//#include<iostream>
//#include<math.h>
//#include<glut.h>
//#include<vector>// important for using vectors and it is built in...
//using namespace std;
//
//int width = 680;
//int height = 640;
//
//class point{
//public: point(int xx, int yy){x=xx;y=yy;}
//		point();
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
//void display(void);
//void draw_shape(triangle);
//void bounding_box(triangle);
//
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
//
//void display(){
//	gluOrtho2D(-100,100,-100,100);
//	glClearColor(0,0,0,0);//setting the color for the background (Red,Green,Blue,Alpha)
//	//glClear(GL_COLOR_BUFFER_BIT);
//	point p1(-10,10);
//	point p2(30,10);
//	point p3(0,-50);
//	triangle t1(p1,p2,p3);
//	//draw_shape(t1);
//	bounding_box(t1);
//	glColor3f(1.0,1.0,1.0);
//	glutPostRedisplay();
//}
//
//
//void draw_shape(triangle t1){
//
//	glBegin(GL_TRIANGLES);
//	for(int i =0;i<t1.get_triangle_size();i++){
//		glVertex2f(t1.tri[i].x,t1.tri[i].y);
//	}
//	glEnd();
//	glFlush();
//}
//
//void bounding_box(triangle t1){
//
//	int max_x = t1.tri[0].x;
//	int max_y = t1.tri[0].y;
//	
//	vector<point> corners;
//	for(int i =0;i<t1.get_triangle_size();i++){
//	
//		for(int j=i+1;j<t1.tri.size();j++){
//		
//			if(t1.tri[i].x<t1.tri[j].x){
//			point max_point(t1.tri[j].x+5,t1.tri[j].y+5);
//			corners.push_back(max_point);
//			}
//		/*	if(t1.tri[i].y<t1.tri[j].y){
//			point max_point(t1.tri[j].x+5,t1.tri[j].y+5);
//			corners.push_back(max_point);
//			}
//			if(t1.tri[i].x>t1.tri[j].x){
//			point max_point(t1.tri[j].x+5,t1.tri[j].y +5);
//			corners.push_back(max_point);
//			}
//			if(t1.tri[i].y>t1.tri[j].y){
//			point max_point(t1.tri[j].x+5,t1.tri[j].y+5);
//			corners.push_back(max_point);
//			}*/
//		
//		}
//	
//	}
//
//	glColor3b(23,45,12);
//	
//	for	(int i =0 ;i<corners.size();i++){
//		glBegin(GL_POINTS);
//		glVertex2f(corners[i].x,corners[i].y);
//	glEnd();
//	cout<< "X = "<< corners[i].x << "Y = " << corners[i].y<< endl ;
//	}
//	
//	glFlush();
//
//}
