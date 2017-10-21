//#include<stdio.h>
//#include<iostream>
//#include<math.h>
//#include<glut.h>
//#include <cstdlib>
//
//#include<vector>// important for using vectors and it is built in...
//using namespace std;
//
//
////class of shape
//class class1{
//public:void method1(int);
//public:void method2(int);
//	   int method3(void);
//	   int variable1,variable2;
//};
//
//void class1::method1(int width){
//	this->variable2 = width;
//}
//void class1::method2(int height){
//	this->variable1 = height;
//}
//int class1::method3(){
//	return(variable1*variable2);
//}
//
////class of rectangle inheriting methods of class shape
//class class2:public class1{
//public: int method3(int);
//	
//};
////making a method in class2 same name as in class1 this means that I am overriding the behaviour of this method(changing it working properties).
//int class2::method3(int variable){
//	return(variable);
//}
//
//int  main(){
//
//	class2 shapes;
//	shapes.method1 (5);
//	shapes.method2(4);
//	int area = shapes.method3(22);
//	cout<<"Height = "<< shapes.variable1<< endl;
//	cout<<"Width = "<< shapes.variable2<< endl;
//	cout<< "Area = "<< area<< endl;
//
//
//	cin>>area;
//
//	return 0;
//}