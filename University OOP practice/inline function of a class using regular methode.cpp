//in line function by regular methode
#include<iostream>
using namespace std;
class book{
	public :
		double length;
		double width;
		
		int  area(){
			return length * width;
		}
	};
	int main(){
		book b;
		b.length = 2;
		b.width  = 3;
		b.area();
		cout<<"The area of Book is = "<<b.area()<<endl;
		return 0;
		
	}