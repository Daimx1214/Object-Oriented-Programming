//2.Assign and print the roll number, phone number and address of two students having names "Sam" and "John" respectively
// by creating two objects of the class 'Student'.

#include<iostream>
using namespace std;
class Student{
	private:
		string name;
		int roll_no;
		int phone_number;
		string address;
	public:
		void stud(string n,int r,int p,string a){
		name = n;
		roll_no = r;
		phone_number = p;
		address = a;
			
		}
		void display(){
			cout<<"The name of student is  "<<name<<endl;
			cout<<"The roll no of student is  "<<roll_no<<endl;
			cout<<"The phone number of student is  "<<phone_number<<endl;
			cout<<"The address of student is  "<<address<<endl;
			
		}
		
};

int main(){
	
	Student obj;
	obj.stud("Sam" ,10 ,03123,"new multan");
	obj.display();
	cout<<"\n";
	Student obj2;
	obj2.stud("John" ,15 ,03173,"new town");
	obj2.display();
	
	return 0;
}