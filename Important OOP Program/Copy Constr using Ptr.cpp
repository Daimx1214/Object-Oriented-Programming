/*
                                              //WITH POINTER 

#include<iostream>
using namespace std;

class Friend{
	private:
		string *name;
	public:
		Friend(string nam){
			name = new string;
			*name = nam;
	}
		
	void fun(string nam){
			name = new string;
			*name = nam;
	}
		
    string getfun(){
		return *name;
   	}
	
    	Friend(Friend& obj){
		name = new string;
		*name = *(obj.name);
	}
	
	void display(){
		cout<<"NAME: "<<*name<<endl;
	}
};

int main(){
	
	Friend obj2("Ali");
	Friend obj4 = obj2;
	
	obj4.fun("Ahmad");
	
	obj2.display();
	obj4.display();
}




//                                               WITHOUT POINTER

#include<iostream>
using namespace std;

class Friend{
	private:
		string name;
	public:
		Friend(string nam){
			name = nam;
	}
		
	void fun(string nam){
			name = nam;
	}
		
    string getfun(){
		return name;
   	}
	
	void display(){
		cout<<"NAME: "<<name<<endl;
	}
};

int main(){
	
	Friend obj2("Ali");
	Friend obj4 = obj2;
	
	obj4.fun("Ahmad");
	
	obj2.display();
	obj4.display();
}
*/




#include<iostream>
using namespace std;

class Friend {
private:
    int ID;
    string Name;

public:
    Friend(int id , string name ) {
        ID = id;
        Name = name;
    }

    void fung(int id, string name) {
        ID = id;
        Name = name;
    }

    void display() {
        cout << "ID: " << ID << endl;
        cout << "NAME: " << Name << endl;
    }

};

int main() {
    Friend obj(43, "Ali");                 
    
    Friend& obj2 = obj;          //Create a reference
    obj2.fung(69, "Usman");    

    obj2.display();
    cout << "\n";
    obj.display();

    return 0;
}
