//3.Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units
// by creating a class named 'Triangle' with a function to print the area and perimeter.
#include<iostream>
using namespace std;
class Triangle{
	private:
		double a;
		double b;
		double c;
	
	public:
        void set(double x, double y  , double z){
            a = x;
            b = y;
            c = z;
        }
		double area(){
		    int final;
		    final =  0.5*a* b;
			return final;
		}
		double perimeter(){
			return a+b+c;
		}
	};
		
		int main (){
			Triangle obj;
			obj.set(3,4,5);
		
			cout<<"Area is  = "<<obj.area()<<endl;
			cout<<"Perimeter is =  "<<obj.perimeter()<<endl;
			
			return 0;
		}