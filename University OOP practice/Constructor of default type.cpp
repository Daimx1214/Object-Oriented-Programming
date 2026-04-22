// constructor 
#include<iostream>
using namespace std;
class book{
	
	public :
		
    double length , width ;
    
		double len(){
			return length;
		}
		double wid(){
			return width;
		}
		double area(){
			return length * width;
		}	
	};
	int main(){
		book b;
		b.length = 2;
		b.width=3;
		
		
		cout<<"The length of Book is = "<< b.len()<<endl;
		cout<<"The  width of Book is = "<< b.wid() <<endl;
		cout<<"The  area of Book is = "<< b.area() <<endl;
		
		return 0;
		
	}