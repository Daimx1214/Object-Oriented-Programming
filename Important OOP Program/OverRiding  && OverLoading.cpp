/*
#include<iostream>
using namespace std;

class Rectangle {
protected:
    int width , height;

public:
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    void display() {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

class Square : public Rectangle {
        int wid;
        int hei;
public:

    Square (int w , int h): Rectangle(2, 3) {
        wid =w;
        hei = h;
    }
        void displayx() {
        cout<< "Width: " << wid << ", Height: " << hei << endl;
         
    }
};

int main() {
    int x ,y;
    cout<<" Enter the width: ";
    cin >> x;
    cout<<" Enter the height: ";
    cin >> y;
    
    Square s(x , y);
    cout<<"\n";
    s.display(); 
	cout<<"\n"; 
    s.displayx();
    return 0;
}

                    // Passing Argument from base constructor
                    
#include <iostream>
using namespace std;

class Base {
public:
    Base(int x) {
        cout << "Base constructor called: " << x << endl;
    }
};

class Derived : public Base {
public:
    Derived( int x , int y) : Base(x) {
        cout << "Derived constructor called: " << y << endl;
    }
};

int main() {
	Derived obj( 6 , 5);
    return 0;
}

*/


/* 


               //REDEFINING or OVERRIDING
                    
#include <iostream>
using namespace std;

class Base {
public:
    void fun(int x) {
        cout << "Base constructor called: " << x << endl;
    }
};
class Derived : public Base {
public:
    void funn(int y) {
        cout << "Derived constructor called: " << y << endl;
    }
};
int main(){
	Derived obj2;
	obj2.fun(2);
	obj2.funn(5);
    return 0;
}






                                //OVERLOADING
                  
#include <iostream>
using namespace std;

class Base {
public:
    void fun(int x) {
        cout << "Base constructor called: " << x << endl;
    }
};
class Derived : public Base {
public:
    void funn(int x , int y) {
        cout << "Derived constructor called: " << x << " value and " << y <<" value " << endl;
    }
};
int main(){
	Derived obj2;
	obj2.fun(2);
	obj2.funn(5  , 7);
    return 0;
}








                 //Problem of REDEFINIG   without virtual base chala ga 
                           
#include <iostream>
using namespace std;

class Base {
protected:
	int age;
	string name;
public:
void fun(){
	display();
    }
void display(){
	age = 10;
	name = "Ali";
	
	cout<<"Age: "<<age<<endl;
	cout<<"Name: "<<name<<endl;
    }
};
class Derived : public Base {
private:
	int age;
	string name;
public:
void display(){
	age = 69;
	name = "Panda ";
	
	cout<<"Age: "<<age<<endl;
	cout<<"Name: "<<name<<endl;
    }
};


int main(){
	Derived obj;
	obj.fun();
	
	return 0;
}
*/


                    //Problem of REDEFINIG   with virtual derived chala ga


#include <iostream>
using namespace std;

class Base {
protected:
	int age;
	string name;
public:
void fun(){
	display();
    }
 virtual void display(){
	age = 10;
	name = "Ali";
	
	cout<<"Age: "<<age<<endl;
	cout<<"Name: "<<name<<endl;
    }
};
class Derived : public Base {
private:
	int age;
	string name;
public:
  void display() override {
	age = 69;
	name = "Panda ";
	
	cout<<"Age: "<<age<<endl;
	cout<<"Name: "<<name<<endl;
    }
};


int main(){
	Derived obj;
	obj.fun();
	
	return 0;
}

