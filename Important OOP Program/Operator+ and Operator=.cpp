
						    //Operator+
                           
#include<iostream>
using namespace std;

class Add{
	private:
		int num ;
		string name;
	public:
        Add(int  n = 0 , string nam = " "){
        	num = n;
        	name = nam;
		}
		
		Add operator+ ( const Add& obj){
			return Add(num + obj.num , name + obj.name);
	}
		void display(){
			cout<<"Number: "<<num << endl<<"Name: "<<name<<endl;
		} 
};

int main(){
	Add obj2(2 , "Ali") , obj3 (3 , " Ahmad") , obj4;
	obj4 = obj2 + obj3;
	obj4.display();
	
}

/*
                            // operator =

#include<iostream>
using namespace std;

class Friend{
	private:
		int age ;
		string name;
	public:
        Friend(int a = 0 , string n = ""){
        	age = a;
        	name = n;
		}
		
		void operator= ( Friend& obj){
			age = obj.age;
			name = obj.name;
		}
		
		void display(){
			cout<<"Age: "<<age<<endl<<"Name: "<<name;
		}
};
	int main(){
		Friend obj2(69 , "Panda ") , obj3;
		obj3 = obj2;
		obj3.display();
		
	}

	
	                                //USE OF THIS POINTER

#include<iostream>
using namespace std;

class Student{
	private:
		int age;
		string name;
	public:
        Student(int age , string name){
        	this->age = age;
        	this->name = name;
		}
		void display(){
			cout<<"Age: "<<age<<endl<<"Name: "<<name;
		}
};
	int main(){
		Student obj2(69 , "Panda ");
		Student obj3 = obj2;
		obj3.display();
		
	}	
*/