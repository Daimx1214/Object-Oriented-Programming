//Create a class Rectangle with private members length and width.
//Define a friend function calculateArea(Rectangle r) that calculates and returns the area.
//Demonstrate it in main().
#include<iostream>
using namespace std;

class Rectangle{
	private:
		double length;
		double width;
	public:
		friend double CalculateArea(Rectangle& r , double l , double w);
};
    double CalculateArea(Rectangle& r , double l , double w){
    	r.length= l;
    	r.width = w;
    	    cout<<"Length: "<<r.length<<endl;
    	    cout<<"Width: "<<r.width<<endl;
    	    double Area = r.length * r.width;
    	    cout<<"Area: "<<Area<<endl;
    	return  Area ; 	   
	}
		
	int main(){
		Rectangle obj2;
		double a , b;
		cout<<"Enter the Length: ";
		cin>>a;
		cout<<"Enter the Width: ";
		cin>>b;
		
		CalculateArea(obj2 , a , b);
	}