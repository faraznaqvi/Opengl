#include<stdio.h>
#include<iostream>
#include<math.h>
#include<glut.h>
#include <cstdlib>

using namespace std;

//class having a virtual method which means it will only be having method signature but no method definition.... the definition of such methods 
//are always given in the classes where such kind of operation is needed....
class class1{
public:
	virtual void method1(int)= 0;
};


//the definition of the virtual method is given in the child class of class1....
class class2:public class1{
public:
	void method1(int x){
	cout<< "virtual method "<< " X-parameter "<< x<<endl;
	}

};


int  main(){
	int x;
	class2 shapes;
	shapes.method1(5);


	cin>>x;

	return 0;
}