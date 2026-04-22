#include<iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    void std(string* n, int* a) {
        name = *n;
        age = *a;
    }

    void display() {
        cout << "\nThe name of student is " << name << endl;
        cout << "The age of student is " << age << endl;
    }
};

int main() {
    Student obj[5];

    string name[5] = {"Daim", "Usman", "Humais", "Taha", "Haider"};
    int age[5] = {10, 5, 20, 15, 30};

    for (int i = 0; i < 5; i++) {
        obj[i].std(&name[i], &age[i]);
        obj[i].display();
    }

    return 0;
}
