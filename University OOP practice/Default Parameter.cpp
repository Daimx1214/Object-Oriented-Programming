   // Constructor with default parameters
#include<iostream>
using namespace std;

class Student {
    string name;
    int age;
public:
 
    Student(string n = "Unknown", int a = 0) {
        name = n;
        age = a;
    }

    void show() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1("Ali", 20);    
    Student s2("Sara");       
    Student s3;               

    s1.show();
    s2.show();
    s3.show();

    return 0;
}
