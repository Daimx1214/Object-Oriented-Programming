                  //Abstract class
// at least aik pure virtual function ho ga. Base k obj nhi bana ga.

#include<iostream>
using namespace std;
class Teacher{
protected:
	int ID;
	string name;
public:
	Teacher(int ID , string name){
		this->ID = ID;
		this->name = name;
	}	
	virtual void display(){
		
	}
	virtual void show() = 0;
};

class Student :  public Teacher{
protected:
	string RegNo;
public:
	Student(int ID , string name , string RegNo) : Teacher(ID ,  name){
        this->RegNo = RegNo;
    }
};

class Employee : public Student{
public:
	int age;
	Employee(int ID , string name , string RegNo , int a) : Student(ID ,  name , RegNo){
	    this->age = age;
	}
    void display() override{
    	cout<<"ID: "<<ID<<endl;
    	cout<<"Name: "<<name<<endl;
	}
    
    void show() override{
    	cout<<"RegNo: "<<RegNo<<endl;
    	cout<<"Age: "<<age<<endl;	
    }
};

int main(){
	Employee obj(21 , "Daim ALi" , "2024-UAM-1809" , 23);
	obj.display();
	obj.show();
	
	return 0;
}


                             //PURE VIRTUAL FUNCTION
//jitna b function hoo ga wo sab k sab virtual ho ga =0; k sath declare ho ga or derived ma override ho ga in base class

/*

#include<iostream>
using namespace std;
class Teacher{
protected:
	int ID;
	string name;
public:
	Teacher(int ID , string name){
		this->ID = ID;
		this->name = name;
	}
	
	virtual void display() = 0;
	virtual void show() = 0;
};
class Student :  public Teacher{
protected:
	string RegNo;
public:
	Student(int ID , string name , string RegNo) : Teacher(ID ,  name){
    this->RegNo = RegNo;
    }
    void display() override{
    	cout<<"ID: "<<ID<<endl;
	}
    
    void show() override{
    	cout<<"Name: "<<name<<endl;
    	cout<<"RegNo: "<<RegNo<<endl;
	} 
};

int main(){
	Student obj(21 , "Daim ALi" , "2024-UAM-1809" );
	obj.display();
	obj.show();
	
	return 0;
}
*/