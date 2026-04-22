//1.Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'.
// Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.
#include<iostream>
using namespace std;

class Student{
	private:
		string name;
		int roll_no;
	public:
		Student(string n ,int r){
			name = n;
			roll_no = r;
			
		}
		void display(){
			cout<<"The name of student is    "<<name<<endl;
			cout<<"The roll no of student is  "<<roll_no<<endl;
		}
			
};

int main(){
	Student obj("John",2);
	obj.display();
	return 0;
}