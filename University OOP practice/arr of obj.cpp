#include<iostream>
using namespace std;

class Student{
	private:
		string name;
		int age;
	public:
		void std(string n,int a){
			name = n;
			age = a;
		}
		void display(){
			cout<<"\nThe name of student is "<<name<<endl;
			cout<<"The age of student is "<<age<<endl;
		}
};
  int main(){
  
  	int x;
  	cout<<"Enter the size of array ";
  	cin>>x;
   Student obj[x];
  	for(int i = 0;i<x; i++){
  		obj[i].std("Daim",10);
  		
	  }
	  for(int i = 0;i<x; i++){
  		obj[i].display();
  		cout<<"\n";
  		
	  }
  }