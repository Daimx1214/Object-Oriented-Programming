//Create a class Student with data members roll number, name, and grade. Use a parameterized constructor to initialize  values
//. Implement display() to show student details.

#include <iostream>
using namespace std;

class Student{
	private:
    	int roll;
    	string name;
    	char grade;
	
	public:
		Student(int rol = 5,string n = "Ali",char g = 'A'  ){
			roll = rol;
			name = n;
			grade = g;
		}
		
		void display(){
			cout<<"Enter the ID of Student      "<<roll<<endl;
			cout<<"Enter the Name of Student    "<<name<<endl;	
			cout<<"Enter the Salary of Student  "<<grade<<endl;
		}
};

int main(){
	
	Student obj;
	obj.display();
	return 0;
}