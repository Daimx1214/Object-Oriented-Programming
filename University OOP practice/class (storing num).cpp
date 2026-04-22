#include<iostream>
using namespace std;
class number{
	private:
	int num;
	public:
		void in(){
			cout<<"Enter the Number"<<endl;
			cin >>num;
		}
		void out(){
			cout<<"The Entered Number is "<<num<<endl;
		}
	};
	
	int main (){
		number obj;
		obj . in();
		obj . out();
		return 0;
	}