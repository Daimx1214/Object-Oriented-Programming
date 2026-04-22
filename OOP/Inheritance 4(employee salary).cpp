//4.Implement a class hierarchy for representing different types of employees in a company.
//Create a base class called Employee with data members name, employeeID, and salary
//and a virtual function calculatePay() to calculate the monthly pay. 
//Derive classes HourlyEmployee and SalariedEmployee from Employee and implement 
//specific pay calculation methods for each type of employee.

#include<iostream>
using namespace std;

class Employee{
protected:
	string name;
	int employeeID;
	double salary;
public:
    Employee(string n , int id , double salary ){
    	name = n;
    	employeeID = id;
    	this->salary = salary;
	}
	virtual void calculatePay() = 0;
};

class HourlyEmployee : public Employee{
public:
    int hour;
	double work;
	HourlyEmployee(string name , int id  , int hour , double work) : Employee( name , id , salary){
	this->hour = hour;
	this->work = work;
	}
	void calculatePay() override{
	    salary = hour * work;	
	}
	void display(){
		cout<<"NAME: "<<name<<endl;
		cout<<"ID: "<<employeeID<<endl;
		cout<<"SALARY: "<<salary<<endl;
	}
};

class SalariedEmployee : public Employee{
public:
	double monthly;
	SalariedEmployee(string name , int id , double mon) : Employee( name , id , salary){
    monthly = mon;
	}
	void calculatePay() override{
	    salary = monthly + 500;	
	}
	void displayy(){
		cout<<"NAME: "<<name<<endl;
		cout<<"ID: "<<employeeID<<endl;
		cout<<"SALARY: "<<salary<<endl;
	}
};

int main(){
	HourlyEmployee obj("DAIM" , 1214 , 37 , 32.32 );
	obj.calculatePay();
	obj.display();
	cout<<"\n";
	SalariedEmployee obj2("ALI" , 69  ,4353);
	obj2.calculatePay();
	obj2.displayy();
	
	return 0;
}




