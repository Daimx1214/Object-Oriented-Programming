#include <iostream>
using namespace std;

class Result {
private:
    int roll;
    string name;
    int marks[3];

public:

    void input() {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin.ignore();  
        getline(cin, name); 

        cout << "Enter marks of 3 subjects:\n";
        for (int i = 0; i < 3; i++) { 
            cout << "Enter marks for subject " << (i + 1) << ": ";
            cin >> marks[i];
        }
    }

    void show() {
        cout << "\nStudent Details:\n";
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: ";
        for (int i = 0; i < 3; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "Total Marks: " << total() << endl;
        cout << "Average Marks: " << average() << endl;
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
    return 0;
}
