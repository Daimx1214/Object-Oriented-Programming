/*

                          POLYMORPHISM`
                   
#include<iostream>
using namespace std;

class Father{
protected:
	int age;
	string name;
public:
	Father(int age , string name){
		this->age = age;
		this->name = name;	
	}
	virtual void display(){
		
	}
};
class Child : public Father{
private:
	string Fname;
public:
	Child (int age , string name ,string Fname) : Father(age , name){
		this->Fname = Fname;
	}
	void display() override{
		cout<<"Age: "<<age<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Fname: "<<Fname<<endl;
	}
};

int main(){
	Father* obj;
	Child obj2(23 , "Daim Ali " , "Asif Ali ");
	obj = &obj2;
	
	obj->display();
	
	
	
}
                               
                              
                               //STATIC BINDING 

#include<iostream>
using namespace std;

class Grade {
public:
    char getGrade() {
	return 'C'; 
	}
};

class Exam : public Grade{
public:
    char getGrade()  {
	return 'P'; 
	}
};

int main() {
    Grade* ptr;
	Exam obj;
	ptr = &obj;
    cout << "Grade: "<<ptr->getGrade(); //virtual  ho to P print hoga
    return 0;
}


*/ 

                             //Reference and pointer


#include<iostream>
using namespace std;

class Grade {
public:
    virtual char getGrade() {
	return 'C'; 
	}
};

class Exam : public Grade{
public:
    char getGrade() override {
	return 'P'; 
	}
	
void show(Grade& obj) {  //reference  agaar & ya laga ho to base k chala ga
    cout << "Grade: "<<obj.getGrade()<<endl;
}

};

int main() {
	Grade* ptr;
	Exam obj2;
	ptr  = &obj2;
   
    obj2.show(*ptr);
    
    return 0;
}

