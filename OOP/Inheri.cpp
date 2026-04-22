/*Design a class hierarchy for managing different types of vehicles.
Create a base class called Vehicle
with data members make, model, and year
and a virtual function displayInfo()
to print information about the vehicle. 
Derive classes Car, Truck, and Motorcycle from Vehicle
and implement the displayInfo() function for each subclass.*/

#include<iostream>
using namespace std;

class Vehicle{
protected:
string make;
string model;
string year;
public:
Vehicle(string mak , string mod , string year){
make = mak;
model =mod;
this->year =year;
}
virtual void displayInfo() =0;
};

 class Car : public Vehicle {
 public:
 Car(string mak, string mod, string year) : Vehicle(mak, mod, year) {}
 void displayInfo() override {
 cout << "MAKE: "<< make << endl;
 cout << "MODEL: "<< model<< endl;
 cout << "YEAR: "<< year << endl;
 }
};

class Truck : public Vehicle {
public:
Truck(string mak, string mod, string year) : Vehicle(mak, mod, year) {}
 void displayInfo() override {
 cout << "MAKE: "<< make << endl;
 cout << "MODEL: "<< model<< endl;
 cout << "YEAR: "<< year << endl;
 }
};

class Motorcycle : public Vehicle {
public:
Motorcycle(string mak, string mod, string year) : Vehicle(mak, mod, year) {}
 void displayInfo() override {
 cout << "MAKE: "<< make << endl;
 cout << "MODEL: "<< model<< endl;
 cout << "YEAR: "<< year << endl;
 }
};

int main(){

Car obj2("HONDA" , "CIVIC ZX" , "2016 MODEL");
Truck obj3("TOYOTA" , "SUPRA MK4" , "2023 MODEL");
Motorcycle obj4("MERCEDES" , "G WAGON" , "2024 MODEL");

obj2.displayInfo();
cout<<"\n";
obj3.displayInfo();
cout<<"\n";
obj4.displayInfo();

