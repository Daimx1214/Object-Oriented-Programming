//Print the average of three numbers entered by the user by creating a class named 'Average' having a function to calculate 
//and print the average without creating any object of the Average class.
#include<iostream>
using namespace std;
class Average{
	public:
		static double set(int a, int b, int c){
			int result = a+b+c;
			return result / 3;
		}
};
int main(){
	int a,b,c;
	cout<<"Enter first value"<<endl;
	cin>>a;
	cout<<"Enter second value"<<endl;
	cin>>b;
	cout<<"Enter third value"<<endl;
	cin>>c;
	
	double avg = Average::set(a,b,c);
	cout<<"Average = "<<avg<<endl;
	
	return 0;
	
}