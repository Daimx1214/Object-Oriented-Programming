#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    int roll_no;

public:
    void area();                      
    void area(string n);              
    void area(string n, int a, int r); 

    void display();
};


void Student::area() {
    name = "ALI";
    age = 12;
    roll_no = 32;
}

void Student::area(string n) {
    name = n;
    age = 15;
    roll_no = 21;
}

void Student::area(string n, int a, int r) {
    name = n;
    age = a;
    roll_no = r;
}

void Student::display() {
    cout << "The name of student is " << name << endl;
    cout << "The age of student is " << age << endl;
    cout << "The roll no of student is " << roll_no << endl;
}

int main() {
     Student obj;
     Student obj2;                
     Student obj3;   
     obj.area();
     obj2.area("Daim");
     obj3.area("Daim Ali" ,18 ,32);

    cout << "Student 1 detail \n" << endl;
    obj.display();

    cout << "\nStudent 2 detail\n" << endl;
    obj2.display();

    cout << "\nStudent 3 detail\n" << endl;
    obj3.display();

    return 0;
}
