
                            //AGGREGATION
#include<iostream>
using namespace std;

class Teacher {
private:
    string firstname;
    string lastname;
    string address, city, state;

public:
    Teacher(string f, string l, string a, string c, string s) {
        firstname = f;
        lastname = l;
        address = a;
        city = c;
        state = s;
    }

    void display() {
        cout << "First Name: " << firstname << endl;
        cout << "Last Name: " << lastname << endl;
        cout << address << " , " << city << " , " << state << endl;
    }
};

class Student {
private:
    Teacher* data; //obj ko pointer baniya.
    string name;

public:
    Student(Teacher* d , string n) {
    	data =d;
    	name = n;
	}

    void displays() {
        cout << "Name: " << name << endl;
        data->display();
    }
};

int main() {
    Teacher obj("Ali", "Ahmad", "New Town", "Multan", "Pakistan");
    Student std(&obj, "Hadi");
    std.displays();

    return 0;
}
