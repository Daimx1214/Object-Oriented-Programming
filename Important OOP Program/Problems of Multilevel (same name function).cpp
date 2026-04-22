//if base classes have member variables/functions with the same name

#include<iostream>
using namespace std;

class Person{
protected:
	int ID;
	string name;
public:
Person(int id , string n){
	ID = id;
	name = n;
    }
    void display(){
    	cout<<"ID: "<<ID<<endl;
		cout<<"Name: "<<name<<endl;
	}
};

class Human{
protected:
	int age;
public:
    Human(int ag){
        age = ag;
    }
    void display(){
    	cout<<"Age: "<<age<<endl;
    }
};

class Student : public Person , public Human{
    string RegNo;
    
public:
    Student( int id , string n , int ag , string r) : Person( id ,  n)  , Human( ag) {
        RegNo = r;
    }
    
    void show() {
        
    }
    // aisa b kr do , ya nicha display k fun na banao or obj.show kr do wo b sahi ha
    void display(){
    	Person::display();
        Human::display();
        cout << "RegNo: " << RegNo << endl;
	}
};

int main(){
	
	Student obj( 69 , "Panda Panda" , 20 , "2024-UAM-1829" );
	obj.display(); // ab sirf Student k display chala ga.
	
	return 0;
}
