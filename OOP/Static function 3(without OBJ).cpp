//Create a class MathOperations with a static function called square(int x) that returns the square of a number.
//Use main() to call this function without creating an object.
#include<iostream>
using namespace std;

class MathOperations{
	public:
	    static int square(int x){
	    	return x * x;
		}
    };
int main(){
	int num;
	cout<<"Enter the number: ";
	cin>>num;
	int result = MathOperations::square(num);
    
    cout<<"Square of "<<num << " is "<< result <<endl;
	
}
