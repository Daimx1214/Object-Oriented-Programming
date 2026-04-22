//Create a Student class with name, rollNo, and marks as data members.
//  Implement:
//Parameterized Constructor to initialize values.
//Copy Constructor to create a copy of an object
//  display() function to show details
#include<iostream>
using namespace std;

class Student{
	private:
    	string name;
    	int roll;
        int marks;
	
	public:
		Student(string n ,int rol ,int m  ){
			name = n;
			roll = rol;
			marks = m;
		}
		
		void display(){
			cout<<"Enter the Name of Student    "<<name<<endl;	
			cout<<"Enter the ID of Student      "<<roll<<endl;	
			cout<<"Enter the Marks of Student   "<<marks<<endl;
		}
		Student(const Student &obj) {
		name = obj.name;
        roll = obj.roll;
        marks = obj.marks;
    }
};

int main(){
	
	Student obj("Ali",10,100);
	obj.display();
	cout<<"\n";
	 Student obj1=obj;
	  cout << "Copy Constructor" << endl;
	obj1.display();
	return 0;
}
