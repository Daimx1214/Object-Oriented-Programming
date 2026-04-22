/*
#include<iostream>
using namespace std;

class Student{
	private:
		int id;
		string name;
	public:
		Student(int i){
			id =i;
			name = "Daim Ali";
		}
	
	friend void display(Student& obj);
};

    void display(Student& obj){
    	cout<<"ID: "<<obj.id<<endl;
    	cout<<"Name: "<<obj.name<<endl;
	}

int main(){
	Student obj2(69);
	display(obj2);
	
}*/





// multiple parameter 
#include<iostream>
using namespace std;

class Student{
	private:
		int id;
		string name;
	public:
		Student(int i){
			id =i;
			name = "Daim Ali";
		}
	
	friend void display(Student& obj , string Fname );
};

    void display(Student& obj ,  string Fname){
    	cout<<"ID: "<<obj.id<<endl;
    	cout<<"Name: "<<obj.name<<endl;
    	cout<<"Father name: "<<Fname<<endl;
	}

int main(){
	Student obj2(69);
	display(obj2 , "Asif Ali");
	
}