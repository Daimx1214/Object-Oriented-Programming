//Write a C++ program to demonstrate a static variable inside a function.
//The function should be called 3 times and should display how the value of the static variable changes with each call.
//Hint: Use a static int counter variable and increment it each time the function is called.
#include<iostream>
using namespace std;

class Variable{
	public:
	    void fun(){
	    	static int counter = 0 ;
			counter++;
			cout<<"Counter: "<< counter<<endl;
		}
};
    
 int main(){
 	
	Variable obj;
	
	obj.fun();
	obj.fun();
	obj.fun();
}