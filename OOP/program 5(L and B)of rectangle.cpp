//5.Write a program to print the area of two rectangles having sides (4,5) and (5,8) 
//respectively by creating a class named 'Rectangle' with a function named 'Area' which returns the area.
// Length and breadth are passed as parameters to its constructor.
#include<iostream>
using namespace std;

class Rectangle{
	private:
		double width;
		double breath;
	public:
		Rectangle(double w,double b){
			width = w;
			breath  = b;
		}
		
		double Area(){
			return width * breath;
		}
		
		void display(){
			cout<<"The width of rectangle "<<width<<endl;
			cout<<"The breath of rectangle "<<breath<<endl;
			cout<<"The Area of rectangle "<<Area()<<endl;
		}
};
    int main(){
    	Rectangle obj(4,5);
    	Rectangle obj1(5,8);
    
    	obj.display();
    	cout<<"\n";
    	obj1.display();
    	
    	return 0;
	}
