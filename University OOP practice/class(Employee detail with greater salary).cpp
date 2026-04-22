//Write a C++ program that defines an Employee lass with private attributes for employee ID, name, basic salary, and bonus.
// The program should allow input of details for two employees, calculate their total salaries (basic salary + bonus),
//  and determine which employee has the higher total salary.

 #include <iostream>
using namespace std;

class Employee {
    private:
	int employeeID;
	string name;
	int salary;
	int bonus;
	
    public:
  	void input(){
    		cout<<"Enter the employeeID ";
    		cin>>employeeID;
		cout <<"Enter  the name ";
        cin>>name;
        cout<<"Enter the salary ";
        cin>> salary;
          cout<<"Enter the bonus ";
        cin>> bonus;
   }
    int totalsalary() {
    	return salary + bonus;
	}
	 
	 void show(){
	 	cout<<"Enter the detail of Employee \n";
	 	cout<<"Enter  the employeeID "<<endl<<employeeID<<endl;
	 	cout<<"Enter the name "<<endl<<name<<endl;
		cout<<"Enter the salary "<<endl<<salary<<endl;
		cout<<"Enter the bonus "<<endl<<bonus<<endl;
		cout<<"Enter the totalsalary"<<endl<<totalsalary();
		
	}
            	};
    
    int main(){
    	Employee emp1 , emp2;
    	cout<<"Enter the   detail of employee1\n ";
    	emp1.input();
    	cout<<"Enter the   detail of employee2\n ";
    	emp2 .input();
    	
    	  if (emp1.totalsalary() > emp2.totalsalary()) {
        cout << "\nEmployee 1 has a higher total salary.\n";
    } else if (emp1.totalsalary() < emp2.totalsalary()) {
        cout << "\nEmployee 2 has a higher total salary.\n";
    } else {
        cout << "\nBoth employees have the same total salary.\n";
    }

    return 0;
}

    	
    	
    	
    	
    	
    	
    
	
            	
            	
	
	 	
	 	
	 	
	 	
	 	
	 	
	 
        
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		