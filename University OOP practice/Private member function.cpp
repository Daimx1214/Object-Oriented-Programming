#include<iostream>
using namespace std;

class Student{
	private:
		string name;
		int age;
		void std(string n ,int a) {
			name = n;
			age = a;
		}
	public:
		void atr(){
			
		std("Daim",12);
		}
		void display(){
			cout<<"The name is  "<<name<<endl;
			cout<<"The age is  "<<age<<endl;
		}
		
	};
	int main(){
		Student obj;
		obj.atr();
		obj.display();
		return 0;
	}
		
		
		
		
	