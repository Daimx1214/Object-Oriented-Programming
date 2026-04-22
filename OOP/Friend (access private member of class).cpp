//Create two classes ClassA and ClassB.
//Make a friend function that can access private members of both classes and print their values.
                 
#include<iostream>
using namespace std;

class ClassA; 

class ClassB {
private:
    int ID;
public:
    ClassB(int id) {
        ID = id;
    }
    friend void display(ClassA a, ClassB b);  
};

class ClassA {
private:
    string name;
public:
    ClassA(string name) {
        this->name = name;
    }
    friend void display(ClassA a, ClassB b); 
};


void display(ClassA a, ClassB b) {
    cout << "ClassA Name: " << a.name << endl;
    cout << "ClassB ID: " << b.ID << endl;
}

int main() {
    ClassA obj1("ALI");
    ClassB obj2(10);

    display(obj1, obj2);  
    return 0;
}
