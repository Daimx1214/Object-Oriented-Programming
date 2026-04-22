#include <iostream>
using namespace std;

class Test {
public:
    Test() { cout << "Default Constructor\n"; }
    Test(int a) { cout << "Parameterized Constructor\n"; }
    Test(double b) { cout << "Double Constructor\n"; }
    Test(char c) { cout << "Char Constructor\n"; }
    Test(string s) { cout << "String Constructor\n"; }
    
    ~Test() { cout << "Destructor Called\n"; }
};

int main() {
    Test obj1;          // Default Constructor
    Test obj2(5);       // Parameterized Constructor
    Test obj3(3.14);    // Double Constructor
    Test obj4('A');     // Char Constructor
    Test obj5("Hello"); // String Constructor

    return 0;  // Destructor called 5 times (once per object)
}