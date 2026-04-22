//Create a class Car with data members brand, model, and price.
//Implement the following constructors:
// Default Constructor: Initializes default values.
//Parameterized Constructor: Takes brand, model, and price as input.
//Copy Constructor: Copies values from another object.
//Also, include a display() function to show details.

#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string model;
    double price;

public:
    Car() {
        brand = "Mercedes";
        model = "G wagon";
        price = 90000;
    }

    Car(string b, string m, double p) {
        brand = b;
        model = m;
        price = p;
    }

    Car(Car &obj) {
        brand = obj.brand;
        model = obj.model;
        price = obj.price;
    }

    void display() {
        cout << "Brand " << brand << endl;
        cout << "Model " << model << endl;
        cout << "Price " << price << endl;
    }
};

int main() {
    
    Car car1;
    cout <<"Default Constructor" << endl;
    car1.display();

    cout << "\n";

    Car car2("Toyota", "Corolla", 20000);
    cout << "Parameterized Constructor " << endl;
    car2.display();

    cout << "\n";

    Car car3 = car2;
    cout << "Copy Constructor" << endl;
    car3.display();

    return 0;
}
