/*
               //Teacher or student same aiya ga 
    
#include<iostream>
using namespace std;

class Teacher{
protected:
	int ID;
	string name;
public:
	Teacher(int id , string n){
		ID =id;
		name = n;
	}
	void display(){
		cout<<"ID: "<< ID <<endl <<"Name: "<<name<<endl;
	}
};
class Student : public Teacher{
private:
	int age;
public:
	Student(int id ,string name , int age) :  Teacher(id , name){
		this->age = age;
	}
	void displayy(){
		cout<<"Age: "<<age;
	}
};

int main(){
	Student obj(10005 , " Ali " , 23);
	obj.display();
	obj.displayy();
}





                             //Teacher k alag answer or student k alag


#include<iostream>
using namespace std;

class Teacher{
protected:
	int ID;
	string name;
public:
	Teacher(int id , string n){
		ID =id;
		name = n;
	}
	void display(){
		cout<<"ID: "<< ID <<endl <<"Name: "<<name<<endl;
	}
};
class Student : public Teacher{
private:
	int IID;
	string namee;
	int age;
public:
	Student(int id ,string name , int age) :  Teacher(5 , "DAIM"){
		IID =id;
		namee = name;
		this->age = age;
	}
	void displayy(){
		cout<<"ID: "<< IID <<endl <<"Name: "<<namee<<endl;
		cout<<"Age: "<<age;
	}
};

int main(){
	Student obj(10005 , " Ali " , 23);
	obj.display();
	cout<<"\n";
	obj.displayy();
}
*/




                 //outide class ha bss baqi same ha

#include<iostream>
using namespace std;

class Teacher{
protected:
	int ID;
	string name;
public:
	Teacher(int id , string n){
		ID =id;
		name = n;
	}
	void display(){
		cout<<"ID: "<< ID <<endl <<"Name: "<<name<<endl;
	}
};
class Student : public Teacher{
private:
	int IID;
	string namee;
	int age;
public:
	Student(int id ,string name , int age);
	void displayy();
	
};
    Student :: Student(int id ,string name , int age) :  Teacher(5 , "DAIM"){
		IID =id;
		namee = name;
		this->age = age;
	}
	void Student :: displayy(){
		cout<<"ID: "<< IID <<endl <<"Name: "<<namee<<endl;
		cout<<"Age: "<<age;
	}
	
int main(){
	Student obj(10005 , " Ali " , 23);
	obj.display();
	cout<<"\n";
	obj.displayy();
}
