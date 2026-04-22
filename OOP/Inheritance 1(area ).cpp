//1.Create a base class called Shape with two data members:
// width and height, and a virtual function area() to calculate the area.
// Derive two classes Rectangle and Triangle from Shape and implement the area() function for each.
#include<iostream>
using namespace std;

class Shape{
protected:
	double length;
	double width;
public:
	Shape(double l , double w){
		length = l;
		width = w;
	}
	virtual double area(){	
	return 0;
	}		
	
	void display(){
		cout<<"Length: "<<length<<endl;
		cout<<"Width: "<<width<<endl;
	}
};

class Rectangle : public Shape{
public:
	Rectangle(double l , double w) : Shape(l , w){}
	
	double area() override{
		return length * width;
	}
};

class Triangle : public Shape{
public:
	Triangle(double l , double w) : Shape(l , w){}
	
	double area() override{
		return (0.5 * length * width);
	}
	void show(){
		Rectangle objj(length , width);
        cout << "Rectangle Area: " << objj.area() << endl;
        
	}
};

int main(){
	Triangle obj(5 , 17);
	obj.display();
	obj.show();
	cout<<"Triangle Area: "<<obj.area();
	
}