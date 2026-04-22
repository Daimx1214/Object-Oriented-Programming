#include<iostream>
#include<stdlib.h>
using namespace std;

class DegreeResult{
	private:
		string name;
		int roll_no;
	public:
	    void data();
    	void Display();
};
class Calculator{
	private:
		int No_of_sub;
		int marks[10];
		double credithour[10];
	public:		
		void per(int);
		double result();
		void grade(double);
};

	
	
void DegreeResult::data(){
	cout<<"Write your name : ";
	cin>>name;
	cout<<"Write your Roll : ";
    cin>>roll_no;
}

void DegreeResult::Display(){
	cout<<"Name : "<<name<<endl;
	cout<<"Roll number : "<<roll_no<<endl;
}

void  Calculator::per(int semNO){
		cout<<"Enter the number of subjects = " ;
		cin>>No_of_sub;
	for (int i = 0; i < No_of_sub ; i++) {
		cout<<"\nCredit hour : ";
		cin>>credithour[i]; 
		cout<<"Enter the marks : ";
		cin>>marks[i];       
	}
}
	                     
double Calculator::result(){
   	double gpa = 0.0;
    double total0 = 0 ,total1  = 0 ;
    	
   	for(int i = 0;i < No_of_sub;i++){
		double makk;		            
		                                                 	
		if(credithour[i]==2){                                                              
		makk = 40;                                                             
	}
		else if(credithour[i]==3){
		makk = 60;                            
	}               
	    else
	    makk = 80;
		
		double grade = (double)marks[i] / makk * 4.0;
        total0 =  grade * credithour[i];
        total1 = total1 + credithour[i];
    }

    gpa = total0 /total1; 
    cout <<" GPA  is = " << gpa << endl;
    return gpa;
            
} 
		
	void Calculator :: grade(double x){
	if(x <= 4.0 && x >= 3.67)
	    cout<<"Grade is A";
	else if(x < 3.66 && x >= 3.34)
	    cout<<"Grade is A-";
	else if(x <= 3.33 && x >= 3.01)
	    cout<<"Grade is B+";
	else if(x <= 3.0 && x >= 2.67)
	    cout<<"Grade is B";
	else if(x<= 2.66 && x >= 2.34)
	    cout<<"Grade is B-";
	else if(x <= 2.33 && x >= 2.01)
	    cout<<"Grade is C+";
	else if(x <= 2.0 && x >= 1.67)
	    cout<<"Grade is C";
	else if(x <= 1.66 && x >= 1.31)
	    cout<<"Grade is C-";
	else if(x <= 1.30 && x >= 1.01)
	    cout<<"Grade is D+";
	else if(x <= 1.00  && x >= 0.10)
	    cout<<"Grade is D";
	else 
		cout<<"Grade is F";
	
}
    
            
int main(){
	DegreeResult obj;
	Calculator obj2[8];
	Calculator obj3;
	double cgpa = 0;
	double ccgpa = 0;
			
	obj.data();
			
	for(int i = 0; i < 8;i++){
		cout<<"Enter the Data of semester " << i + 1  <<" : " <<endl;
		obj2[i].per(i +1);
		cgpa = cgpa + obj2[i].result();
		system("pause");
       	system("cls");
	}       
	
    ccgpa = cgpa / 8 ;
	        
    system("cls");
	obj.Display();
			
    cout <<"\n Final CGPA after 8 semesters : " << ccgpa << "\n"<< endl;
    obj3.grade(ccgpa);
    return 0;
}
			