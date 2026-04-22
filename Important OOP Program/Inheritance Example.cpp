#include<iostream>
using namespace std;

class Person{
	
public:
	int ID;
	string name;
	string number;

Person(int id){
	ID = id;
	name = "Daim Ali ";
	number = "123456 ";
    }
};

 class Student : public Person{
    string RegNo;
    
public:
    Student() : Person(1) {
        RegNo = "2024-UAM-1809";
    }
    
    void show() {
        cout << "ID: " << ID << endl;
        cout << "Name: " << name << endl;
        cout << "Number: " << number << endl;
        cout << "RegNo: " << RegNo << endl;
    }
};

int main(){
	
	Student obj;
	obj.show();
	
	return 0;
}