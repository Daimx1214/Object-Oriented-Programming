//Write a class Result that contains roll no, name, marks of three subjects. The marks are stored in an array of integers.
//  The class also contains the following member functions:
//The input() function is used to input the values in data members.
//The show() function is used to display the values of data members.
//The  total() function returns the total marks of a student.
//The avg() function returns the average marks of a student.
//The program should create an objects of the class and class the member functions.
#include <iostream>
using namespace std;

class Result {
private:
    int roll;
    string name;
    int marks[3];

public:
    void input() {
        cout << "Enter the roll number: ";
        cin >> roll;

        cout << "Enter the name: ";
        cin>>name;
       
        cout << "Enter marks for 3 subjects:\n";
        for (int i = 0; i < 3; i++) {
            cout << "Subject " << (i + 1) << ": ";
            cin >> marks[i];
        }
    }

    void show() {
        cout << "\nStudent Details:\n";
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks:\n";
        for (int i = 0; i < 3; i++) {
            cout << "Subject " << (i + 1) << ": " << marks[i] << endl;
        }
    }

    int total() {
        int sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += marks[i];
        }
        return sum;
    }

    float average() {
        return total() / 3.0;
    }
};

int main() {
    Result obj;
    obj.input();
    obj.show();
    cout << "Total Marks: " << obj.total() << endl;
    cout << "Average Marks: " << obj.average() << endl;

    return 0;
}
