//6.Write a program to print the area of a rectangle by creating a class named 'Area' having two functions
//First function named as 'setDim' takes the length and breadth of the rectangle 
//as parameters and the second function named as 'getArea' returns the area of the rectangle.
//Length and breadth of the rectangle are entered through keyboard.

#include<iostream>
using namespace std;

class Area{
	private:
		double width;
		double breath;
	public:
		void setDim(double w, double b){
			width = w;
			breath  = b;
		}
		double getArea(){
			return breath * width;
		}	
		
		void display(){
			cout<<"The width of rectangle "<<width<<endl;
			cout<<"The breath of rectangle "<<breath<<endl;
			cout<<"The Area of rectangle "<<getArea()<<endl;
		}
};

int main(){
	
	int x,y;
	cout <<"Enter the first value"<<endl;
	cin>>x;
	cout<<"Enter the Second value"<<endl;
	cin>>y;
	Area obj;
	obj.setDim(x,y);
	obj.getArea();
	obj.display();
	return 0;
}