/*
 #include<iostream>
 using namespace std;
 
 class Tree{
 	private:
 		static int a;
 		
 	public:
 	
 		Tree(){
 			a++;
		}
				
    static int fun(){
		return a;
	}
 };

 int Tree :: a = 69;  // Global value
 
 int main(){ 
    
	cout<<"We have "<<Tree :: fun()<<"  objects in our program ";
	return 0;
	
}*/


#include<iostream>
using namespace std;
 
class Employee{
private:
 	static string Name;
public:
 	static void fun(string n){
 		Name = n;
	}
		
	static void Display(){
		cout<<"Employee Name: "<<Name<<endl;
	}
};
string Employee :: Name = "";
int main(){
    // static MF CANNOT BE CALL BY OBJECT 
	Employee::fun("Daim Ali");
	Employee::Display();
 	
	}	