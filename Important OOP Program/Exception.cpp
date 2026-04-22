/*             // methode 1
#include<iostream>
using namespace std;

int main(){
	try{
		int age = 20;
		if(age >= 50){
			cout<<"WORK: ";
		}
		else{
			throw (age);
		}
	}
	catch (int num){
		cout<<"AGE: "<<num;
	}
}
                          // methode 2

#include<iostream>
using namespace std;

int main(){
	try{
		int age = 20;
		if(age >= 50){
			cout<<"WORK: ";
		}
		else{
			throw (60);
		}
	}
	catch (int num){
		cout<<"AGE: "<<num;
	}
}

                        // methode 3

#include<iostream>
using namespace std;

int main(){
	try{
		int age = 20;
		if(age >= 50){
			cout<<"WORK: ";
		}
		else{
			throw (60);
		}
	}
	catch (...){
		cout<<"Access Denied";
	}
}
*/



#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    try{
    if (a >= 15) {
        cout << "Good\n";
        throw (a);
        }
    }
    catch (const exception& e) {
        cout << "Error: " << a << '\n';
    }
    return 0;
}


