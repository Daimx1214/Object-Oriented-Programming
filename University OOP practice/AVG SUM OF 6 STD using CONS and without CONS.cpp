#include<iostream>
#include<string.h>
using namespace std;
	class Student{
		private:
			string name;
			int roll_no;
			int marks[6];
		public:
			void total(int sum){
				double per;

		per = (double)sum/600*100;
	    cout<<"Total marks = "<<sum<<endl;
		cout<<"Percentage = "<<per<<endl;
		if(per<40){
			cout<<" Failed"<<endl;
		}
			}
			void Display(string nam,int rol){
					
	    cout<<"Name = "<<nam<<endl;
	    cout<<"Roll number = "<<rol<<endl;
			}
	};
	
int main(){
	int n;
	cout<<"How much students data you want to enter = ";
	cin>>n;
	
	Student obj[n];
	int total  = 0;
	string namm;
	int roll;
	int makk[6];
	for(int i=1; i<=n; i++){
		total = 0;
		cout<<"Enter the detail of the Student "<<i<<endl;
		cout<<"Write your name = ";
		cin>>namm;
		cout<<"Write your roll number = ";
		cin>>roll;
		for(int j=1; j<=6; j++){
			cout<<"Enter the marks of subject no "<<j<<" out of 100 = ";
			cin>>makk[j];
			total  = total + makk[j];
		}
		
		obj[i].Display(namm,roll);
		obj[i].total(total);
	}
	
	
	return 0;
}


/*#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll_no;
    int marks[6];

public:

    Student(string n, int r, int m[]) {
        name = n;
        roll_no = r;

        int total = 0;
        for (int i = 0; i < 6; i++) {
            marks[i] = m[i];
            total += m[i];
        }

        double percentage = (double)total / 600 * 100;

        cout << "\nName = " << name << endl;
        cout << "Roll number = " << roll_no << endl;
        cout << "Total marks = " << total << endl;
        cout << "Percentage = " << percentage << endl;

        if (percentage < 40) {
            cout << "Result   Failed" << endl;
        } 
        else{
        	cout<<"Passed"<<endl;
        	
		}
    }
};

int main() {
    int n;
    cout << "How many students data you want to enter ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        string name;
        int roll;
        int marks[6];

        cout << "\nEnter the details of Student " << i << endl;
        cout << "Write your name ";
        cin >> name;
        cout << "Write your roll number ";
        cin >> roll;

        for (int j = 1; j <= 6; j++) {
            cout << "Enter the marks of subject no " << j << " out of 100: ";
            cin >> marks[j];
        }
		for(int obj = 0; obj <= 10; obj++) {
			Student s(name, roll, marks);
		}
        
    }

    return 0;
}
*/