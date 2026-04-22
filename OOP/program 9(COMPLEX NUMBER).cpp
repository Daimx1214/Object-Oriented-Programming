//9.Print the sum, difference and product of two complex numbers by creating a 
//class named 'Complex' with separate functions for each operation whose real and imaginary parts are entered by the user.
#include<iostream>
using namespace std;

class Complex{
	public:
		double a;
		double b;
		double c;
		double d;
	
	public:
		void sum(double a, double b,double c,double d);
		void sub(double a, double b,double c,double d);
		void multi(double a, double b,double c,double d);
};
    void Complex :: sum(double a, double b,double c,double d){
    	double real = a + c;
    	double imag = b + d;
    	cout<<"The sum of two complex number is"<<'('<<a <<","<<b<<"i"<<')'<<'+'<<'('<<c<<","<<d<<"i"<<')'<<" = "<<real <<","<< imag<<"i"<<endl;
	}
	  void Complex :: sub(double a, double b,double c,double d){
    	double real = a - c;
    	double imag = b - d;
    	cout<<"The diff of two complex number is"<<'('<<a <<","<<b<<"i"<<')'<<'-'<<'('<<c <<","<<d<<"i"<<')'<<" = "<<real<<"," << imag<<"i"<<endl;
	}
	void Complex :: multi(double a, double b,double c,double d){
    	double real =( a * c)-(b * d);
    	double imag = (a * d) +(b * c);
    	cout<<"The multiply of two complex number is"<<'('<<a <<","<<b<<"i"<<')'<<'*'<<'('<<c <<","<<d<<"i"<<')'<<" = "<<real <<","<< imag<<"i"<<endl;
	}
	
	
	int main(){
		double w,x,y,z;
		cout<<"Enter the First number"<<endl;
		cin>>w;
		cout<<","<<endl;
		cin>>x;
		
		cout<<"Enter the second number"<<endl;
		cin>>y;
		cout<<","<<endl;
		cin>>z;
		
		Complex obj;
		obj.sum(w,x,y,z);
		obj.sub(w,x,y,z);
		obj.multi(w,x,y,z);
		
		
		return 0;
	}
		
		
		
	