//
//#include<stdio.h>
//#include<iostream>
//#include<math.h>
//#include<glut.h>
//#include<vector>// important for using vectors and it is built in...
//using namespace std;
//
//
////functions signature
////void main(int,char);
//void display(void);
//void draw(void);
//void print_vector(void);
////variables
//int x = 10;
//int size;
//float dy=0.001;
////making a class of points to save x and y 
////class of point
//class point{
//public:
//	int x;
//	int y;
//	point(int xx, int yy){
//	x = xx;
//	y = yy;
//	}
//};
//
////Now making a class of vectors in which we will enter and display to elements of the 
////vector
////class of vector
//class vectors{
//public:
//	vector<point> myvector;
//	void enter(point);
//	void show();
//	int get_size();
//	vector<point> get_vector();
//};
//
////member method of class vectors
//void vectors:: enter(point p){
//			myvector.push_back(p);
//		}
//void vectors:: show(){
//			for(int i = 0;i<myvector.size();i++){
//		cout<<"X = "<< myvector[i].x <<", Y = "<< myvector[i].y<<endl;
//	}
//}
//int vectors::get_size(){
//			return myvector.size();
//			}
//
//vector<point> vectors::get_vector(){
//		return myvector;
//}
//vectors v1;
//int width = 680;
//int height = 640;
////main function
//void main(int arg, char **argv){
//	//point p1(2,4);//adding x and y to point class for object
//	//point p2(10,10);
//	//making a object of type vectors
//	//cout<<"enter size of vector"<<endl;
//	//cout<< p1.x<<endl;
//	//cout<<p2.x<<endl;
//	//v1.enter(p1);//entering a object of point in the object of vectors
//	//v1.enter(p2);
//	//v1.show();//showing the element of vector in the object of vectors
//	//cin>>x;
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
//		
//	glutMainLoop();//main loop 
//}
//void display(){
//	gluOrtho2D(-100,100,-100,100);
//	glClearColor(0,0,0,0);//setting the color for the background (Red,Green,Blue,Alpha)
//	//glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(1.0,1.0,1.0);
//	draw();
//	glutPostRedisplay();
//}
//void draw(){
//	int x,y=0;
//	int radius = 100;
//		float theta = 1.0;
//		for(int j = 1;j<5;j++){
//	for(int i = 0; i<100;i++){
//		theta += 0.0001;
//		x = radius*cos(theta+i);
//		y = radius*sin(theta+j+i+1);
//		point p(x,y);
//		v1.enter(p);
//		print_vector();
//	glFlush();
//	}
//	}
//}
//
//void print_vector(){
//	vector<point> new_vector = v1.get_vector();
//	for(int i =0;i<new_vector.size();i++){
//	glBegin(GL_POINTS);
//	glVertex2f(new_vector[i].x,new_vector[i].y);
//	glEnd();
//	}
//
//}
////Thank you
////By Syed Faraz