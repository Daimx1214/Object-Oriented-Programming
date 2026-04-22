#include<iostream>
using namespace std;
class student{
	public:
		double marks1;
		double marks2;
		double marks3;
		
		void marks();
		double sum()const;
		double avg()const;
	};
	void student :: marks(){
		cout<<"Enter the marks 1\n";
		cin>>marks1;
		cout<<"Enter the marks 2\n";
		cin>>marks2;
		cout<<"Enter the marks 3\n";
		cin>>marks3;
	}
	
	double student :: sum()const{
		int result = marks1+marks2+marks3;
		return result;
	}
	
	double student :: avg()const{
    float avg = sum() / 3;
		return avg;
	}
	

	int main(){
		student obj;
		obj.marks();
		cout<<"The sum is "<<  "result is "<< obj.sum() <<endl;
		cout<<"The avg is "<< "avg" <<obj.avg() <<endl;
		return 0;
		
	}
	
	
	
	
	
	
		