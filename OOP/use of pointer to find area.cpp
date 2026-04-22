//using ptr to fing area of rect
#include<iostream>
using namespace std;
class Book{
	public :
		double length;
		double width;
		
	void bok(double l,double w){
		length = l;
		width =w;
	}
	double area(){
		return length * width;
	}
	
	void display(){
		
	cout<<"The length is = "<<length<<endl;
	cout<<"The width is = "<<width<<endl;
	cout<<"The area is = "<<area()<<endl;
	
	}
	
};
int main(){
	
	Book obj;
	Book *ptr;
	ptr = &obj;
	
	ptr->bok(4.1, 7.4);          // -> mean pointer k zariya object k members ko access krta hn
	
	ptr->display();
}