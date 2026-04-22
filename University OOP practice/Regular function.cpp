//inline exit failure
/*#include<iostream>
using namespace std;

class Book{
	double length;
	double width;

	public:
		Book(double ,double);
		void len(double);
		void wid(double);
		double lz(){
			return length;
		}
		double wz(){
			return width;
		}
		double area();
		void display();
    };  
    Book :: Book(double w  , double l){	
    	length = l;
    	width = w;
    }
    void Book :: len(double l){
    	if (l>=0){
    		length=  l;
		}
		else{
			cout<<"Invalid Input";
			exit(EXIT_FAILURE);
		}
	}
	void Book :: wid(double w){
    	if (w>=0){
    		width = w;
		}
		else{
			cout<<"Invalid input";
			exit(EXIT_FAILURE);
		}
	}
    double Book ::  area(){
    	return length * width;
	}
    
    void Book :: display(){
    	cout<<"The length of Book is "<<length<<endl;
    	cout<<"The width of Book is "<<width<<endl;
    	cout<<"The Area of Book is "<<area()<<endl;
	}
    
    int main (){
    	Book obj(2,8);
        obj.display();
    	return 0;
    	
	}*/
    
      // NEXT WALA MA AREA BSS PUBLIC MA RETURN KIA HA 
    
    //inline exit failure
#include<iostream>
using namespace std;

class Book{
	double length;
	double width;

	public:
		Book(double ,double);
		void len(double);
		void wid(double);
		double lz(){
			return length;
		}
		double wz(){
			return width;
		}
		double area(){
		    return length* width;
		}
		void display();
    };  
    Book :: Book(double w  , double l){	
    	length = l;
    	width = w;
    }
    void Book :: len(double l){
    	if (l>=0){
    		length=  l;
		}
		else{
			cout<<"Invalid Input";
			exit(EXIT_FAILURE);
		}
	}
	void Book :: wid(double w){
    	if (w>=0){
    		width = w;
		}
		else{
			cout<<"Invalid input";
			exit(EXIT_FAILURE);
		}
	}
	
    void Book :: display(){
    	cout<<"The length of Book is "<<length<<endl;
    	cout<<"The width of Book is "<<width<<endl;
    	cout<<"The Area of Book is "<<area()<<endl;
	}
    
    int main (){
    	Book obj(2,8);
        obj.display();
    	
	}
    
	
	