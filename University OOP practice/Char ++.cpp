#include<iostream>
using namespace std;

class Num{
	private:
		char a;
	public:
		void fun(){
			cout<<"Enter the Character ";
			cin>>a;
			a = a+1;
				cout<<"The Given char will be "<<a<<endl;
		}
};
int main(){
	Num obj;
	obj.fun();
	return 0;
}