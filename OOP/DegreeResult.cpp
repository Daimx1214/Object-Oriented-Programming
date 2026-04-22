#include<iostream>
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
		int marks[5];
	public:		
		void per();
		double result();
		double lastsem();
		void grade(double);
};

void DegreeResult::data(){
	string name1 , roll;
	cout<<"Enter the name of student ";
	cin>>name;
	cout<<"Enter the Roll num of student ";
    cin>>roll_no;
}

void DegreeResult::Display(){
	cout<<"Name is "<<name<<endl;
	cout<<"Roll number is "<<roll_no<<endl;
}

void  Calculator::per(){
	for (int i = 0; i < 3; i++) {
		cout <<"Enter the marks of subject " << (i+1) << " having credit hour 3 ";
		cin >> marks[i];
	}
	cout<<"Enter the Marks of subject 4 having credit hour 4 ";
     	cin >> marks[3];
    cout<<"Enter the Marks of subject 5 having credit hour 2 ";
     	cin >> marks[4];
}
   double Calculator::result(){
    	double gpa;
    	double total0 = 0 ,total1  = 0, total2 = 0;
    	double mak[5];
    	
    	for(int i = 0;i < 3;i++){
    		mak[i] = (double) marks[i]/ 60 * 4;
    	    total0 = total0 + mak[i] * 3;
    	
    	}
    		mak[3] = (double) marks[3]/ 80 * 4;
    	    total1 = mak[3] * 4;
    	    
    		mak[4] = (double) marks[4]/ 40 * 4;
    	    total2 = mak[4] * 2;
    	    
        	double	total = total0 + total1 + total2;	
    		gpa = total /15; 
            cout <<" GPA  is = " << gpa << endl;
            return gpa;
		} 
		
		double Calculator :: lastsem(){
			
		double mak[2] ,total = 0 ,total4 = 0, total5 =0 , gpa;
		cout<<"Enter the Marks of subject 1 having credit hour 4 ";
     	cin >> marks[0];
        cout<<"Enter the Marks of subject 2 having credit hour 2 ";
     	cin >> marks[1];
     	
     		mak[0] = (double) marks[0]/ 80 * 4;
    	    total5 = mak[0] * 4;
    	    
    		mak[1] = (double) marks[1]/ 40 * 4;
    	    total4 = mak[1] * 2;
	
		total = total5 + total4;
		gpa = total / 6;
		cout <<"GPA for 8th Semester = " << gpa  << endl;
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
			obj.data();
			for(int i = 0; i<7;i++){
			cout<<"Enter the Detail of " <<i + 1 <<" semester"<<endl;
			obj2[i].per();
			cgpa = cgpa + obj2[i].result();
	}
			cout <<"\nEnter details for 8th Semester\n";
            cgpa += obj2[7].lastsem(); 
		
			obj.Display();
			
            cout <<"\n Final CGPA after 8 semesters " << cgpa / 8 << endl;
           	obj3.grade(cgpa / 8);
    return 0;
}
			
		
				
				