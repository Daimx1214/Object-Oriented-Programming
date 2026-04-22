//Create a class Employee with data members ID, name, salary. Use a parameterized constructor to initialize the values
//. Implement display() to show employee details.
#include <iostream>
using namespace std;

class Employee{
	private:
    	int ID;
    	string name;
    	double salary;
	
	public:
		Employee(int id,string n,double s ){
			ID = id;
			name = n;
			salary= s;
		}
		
		void display(){
			cout<<"Enter the ID of Employee      "<<ID<<endl;
			cout<<"Enter the Name of Employee    "<<name<<endl;	
			cout<<"Enter the Salary of Employee  "<<salary<<endl;
		}
};

int main(){
	
	Employee obj(5,"Daim",5000);
	obj.display();
	return 0;
}