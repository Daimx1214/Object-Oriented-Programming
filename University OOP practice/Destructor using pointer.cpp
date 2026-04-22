#include <iostream>
#include <cstring>  
using namespace std;

class Student {
private:
    char* name;   
    char* age; 

public:
   
    Student( char* n,  char* a) {
        name = new char[strlen(n) + 1];   
        age = new char[strlen(a) + 1];

        strcpy(name, n);     
        strcpy(age, a);    
    }

    ~Student() {
        delete[] name;       
        delete[] age;
    }

    char* name1()  {
        return name;
    }

    char* age1()  {
        return age;
    }
};

int main() {
    Student obj("Daim Ali", "10");

    cout << "Name: " << obj.name1() << endl;
    cout << "Age: " << obj.age1() << endl;

    return 0;
}
