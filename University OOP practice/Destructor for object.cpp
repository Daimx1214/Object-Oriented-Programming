#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;     
    int age;    

public:   
    Student(string n, int a) {
        name = n;
        age = a;
    }

    ~Student() {
        cout << "Destructor is called " << name << endl;
    }

    string Name1() const {
        return name;
    }
    
    int age1() const {
        return age;
    }
};

int main() {
    Student obj(" Daim Ali ", 19);

    cout << "Name: " << obj.Name1() << endl;
    cout << "Age: " << obj.age1() << endl;

    return 0;
}
