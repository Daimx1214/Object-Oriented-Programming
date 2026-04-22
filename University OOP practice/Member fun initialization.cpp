//Write a class that contains two integer data members which are initialized to 100 when an object is created.
// It has a member function show that displays the data members.
#include<iostream>
using namespace std;

class Member{
	int a;
	int b;
	public:
		Member(){
			a=100;
			b=100;
		}
		void display(){
			cout<<"The entered number  a is "<<a<<endl;
			cout<<"The entered number  b is "<<b<<endl;
		}
};
int main(){
	Member obj;
	obj.display();
}