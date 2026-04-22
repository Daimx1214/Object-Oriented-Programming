/*
#include <iostream>
using namespace std;

class Tree {
private:
    static int count; 

public:
    Tree() {
        count++; 
    }

    static void showCount() {
        cout << "Total Trees: " << count << endl;
    }
};

int Tree::count = 0;

int main() {
    Tree t1;
    Tree t2;
    Tree t3;

    Tree::showCount(); 

    return 0;
}

*/






 #include<iostream>
 using namespace std;
 
 class Employee{
 	private:
 		static int id;
 		static string Name;
 		
 	public:
 		static void fun(int i,string n){
 			id = i;
 			Name = n;
		 }
		
		static void Display(){
			cout<<"Employee Id: "<<id<<endl;
			cout<<"Employee Name: "<<Name<<endl;
		}
 };
    int Employee :: id = 0;
    string Employee :: Name = " ";
 	int main(){
 		
 		Employee obj1;
 		Employee obj2;
 		Employee obj3;
 		
 		Employee::fun( 69 ,"Daim Ali");
		Employee::Display();
 	
	 }
 		