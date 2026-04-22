//7.Write a program to print the area of a rectangle by creating a class named 'Area' 
//taking the values of its length and breadth as parameters of its constructor 
//and having a function named 'returnArea' which returns the area of the rectangle
//Length and breadth of the rectangle are entered through keyboard.
#include<iostream>
using namespace std;

class Area{
	private:
		double width;
		double breath;
	public:
		Area(double w, double b){
			width = w;
			breath  = b;
		}
		double returnArea(){
			return breath * width;
		}	
		
		void display(){
			cout<<"The width of rectangle "<<width<<endl;
			cout<<"The breath of rectangle "<<breath<<endl;
			cout<<"The Area of rectangle "<<returnArea()<<endl;
		}
};

int main(){
	
	int x,y;
	cout <<"Enter the first value"<<endl;
	cin>>x;
	cout<<"Enter the Second value"<<endl;
	cin>>y;
	Area obj(x,y);
	obj.returnArea();
	obj.display();
	return 0;
}
