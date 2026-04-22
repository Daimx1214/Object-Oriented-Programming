//in line function
#include<iostream>
using namespace std;
class book{
	public :
		double length=30;
		double width = 40;
		
		int  area(){
			return length * width;
		}
	};
	int main(){
		book b;
		b.length;
		b.width;
		b.area();
		cout<<"The area of Book is = "<<b.area()<<endl;
		return 0;
		
	}