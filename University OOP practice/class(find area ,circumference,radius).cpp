#include<iostream>
using namespace std;
class circle {
	private:
		double radius;
	public:
	void get_radius(double r );
	double circumference()const;
	double area()const;
};

	void  circle::get_radius(double r){
		radius = r; 
	}
	
    double circle ::circumference()const{
	return 2 * 3.14 * radius;
	}
		
	double circle ::area()const{
			return 3.14 * radius * radius;
	}

 int main(){
 	circle obj;
 	double r;
 	cout << "Enter the radius of the circle: ";
    cin >> r;
    obj.get_radius(r);
 	cout<<"The circumference of circle is "<<obj.circumference()<<endl;
 	cout<<"The area of circle is "<<obj.area();
 	return 0;
 }



