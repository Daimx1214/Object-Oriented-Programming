//using pointer in the class to calculate area outside the class
#include<iostream>
using namespace std;
class Rectangle{
	private:
		double length;
		double width;
	public:
		void rectangle1(double,double);
		double setlen()const;
		double setwid()const;
		double setarea()const;
	};
	 void Rectangle :: rectangle1(double l,double w){
	    	length =l;
			width = w;
	 }
	 
	  double Rectangle :: setlen()const{
	    return length;
	  }
	
	 double Rectangle :: setwid()const{
	    return width;
	  }
	  
	  double Rectangle :: setarea()const{
	    return length * width;
	  }
	  
	  int main(){
	    
	  	Rectangle *ptr;
	  	ptr = new Rectangle;
	  	ptr->rectangle1(10, 5);
	    ptr->setlen();
	    ptr->setwid();
	  	
	  	cout<< "The length is = "<< ptr->setlen()<<endl;
	  	cout<< "The width is = "<< ptr->setwid()<<endl;
	  	cout<< "The area is = "<< ptr->setarea() <<endl;
	  	delete ptr;
	  	ptr = 0;
        return 0;
	  }