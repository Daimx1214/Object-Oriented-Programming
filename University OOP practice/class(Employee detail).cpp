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
    	Employee obj ;
    	obj .input();
    	obj .show ();
    	return 0;
	}