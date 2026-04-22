//Create a class Box that has:
//?A private data member length
//?A friend function displayLength(Box b) that prints the length
//In main(), create a Box object, assign a value to length, and use the friend function to display it.
#include<iostream>
using namespace std;

class Box{
	private:
		double length;
	public:
		friend void DisplayLength(Box& b , double l);
		
    };
        void DisplayLength(Box& b , double l){
			b.length=l;
			cout<<"Display Length: "<<b.length<<endl;
		}
	int main(){
		Box obj1;
		DisplayLength(obj1 , 45);
		return 0;
		
	}