//STAND ALONE FUNCTION

/*
#include<iostream>
using namespace std;

class Student{
	private:
		int id;
		string name;
	public:	
	    friend void display(Student& obj , int x ,  string n);
};
    
    void display(Student& obj , int x ,  string n){
    	obj.id = x;
    	obj.name = n;
    	
    	cout<<"ID: "<<obj.id <<endl;
    	cout<<"Name: "<<obj.name<<endl;
	}
	
	int main(){
		Student obj2;		
		display(obj2 , 69, "Daim ALi");
	}
	
	
//MEMBER FUNCTION WITH ANOTHER CLASS    (1st METHODE)	
	
#include<iostream>
using namespace std;

class Friend;

class Other{
	public:
	 void Display(Friend& obj , string s , int id);
	
};

class Friend{
	private:
		string name;
	public:
		friend void Other :: Display(Friend& obj , string s , int id);
};

void Other :: Display(Friend& obj , string s , int id){
	obj.name = s;
	cout<<"Name: "<<obj.name<<endl;
	cout<<"ID: "<<id<<endl;
}

int main(){
	
	Friend obj2;
	Other obj1;
	obj1.Display(obj2,"Ali" , 69);
	
}
*/

//MEMBER FUNCTION WITH ANOTHER CLASS    (2nd METHODE)	


	
#include<iostream>
using namespace std;

class Friend;

class Other{
	public:
	 void Display(Friend& obj , string s , int id);
	
};

class Friend{
	private:
		string name;
	public:	
		friend class Other;
};

void Other :: Display(Friend& obj , string s , int id){
	obj.name = s;
	cout<<"Name: "<<obj.name<<endl;
	cout<<"ID: "<<id<<endl;
}

int main(){
	
	Friend obj2;
	Other obj1;
	obj1.Display(obj2 , "Ali" , 69);
	
}