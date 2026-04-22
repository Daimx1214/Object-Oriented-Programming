// Write a C++ program that implements a simple calculator using a class named Calculator.
// The program should allow the user to input two integer numbers and
// perform arithmetic operations, including addition(+), subtraction(-), multiplication(*), division(/) and modulus(%). 
// The results of all operations should be displayed on the screen.
#include<iostream>
using namespace std;
class calculator{
	private :
		int add;
		int sub;
		int mul;
		int div;
		int mod;
		int a,b;
	public :
		void input(){
			cout <<"Enter the first number ";
			cin>>a;
			cout<<" Enter the  second number";
			cin>>b;
			add = a+b;
			sub = a-b;
			mul = a*b;
			div = a/b;
			mod = a%b;
			
		}
		void show (){
			cout <<"\nMake the Calculator\n";
			cout<<"Addition of A and B is "<<add<<"\n";
			cout<<"Subtraction of A and B is "<<sub<<"\n";
			cout<<"Multiplication of A and B is "<<mul<<"\n";
			cout<<"Division of A and B is "<<div<<"\n";
			cout<<"Modolus of A and B is "<<mod<<"\n";
			
		}
};
   int main(){
   	calculator obj;
   	obj.input();
   	obj.show();
   	return 0;
   }

