//  copy constructor 
#include<iostream>
using namespace std;
class book{
	private :
	 double length , width ;
	 
	public :
		book( double l , double w){        
			length = l;
			width = w;
		}
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
		book b(20.6 , 45.9);
		book b2 = b;
		
		cout<<"The length of Book is = "<< b.len()<<endl;
		cout<<"The  width of Book is = "<< b.wid() <<endl;
		cout<<"The  area of Book is = "<< b.area() <<endl;
		cout<<"\n";
		cout<<"The length of Book is = "<< b2.len()<<endl;
		cout<<"The  width of Book is = "<< b2.wid()<<endl;
		cout<<"The  area of Book is = "<< b2.area() <<endl;
		
				return 0;
			}