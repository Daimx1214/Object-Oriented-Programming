#include<iostream>
using namespace std;

class Student{
	private:
		string name;
		int age;
	public:
		Student(string n,int a){
			name = n;
			age = a;
		}
		void display(){
			cout<<"\nThe name of student is "<<name<<endl;
			cout<<"The age of student is "<<age<<endl;
		}
};
  int main(){
    Student obj[5]=
   {
   
  		Student("Daim",10),
     	Student("Usman",15),
  		Student("Humais",28),
    	Student("Taha",18),
    	Student("Haider",24)
    };
  	for(int i = 0;i<5; i++){

  		obj[i].display();
  		cout<<"\n";
  		
	  }
  }