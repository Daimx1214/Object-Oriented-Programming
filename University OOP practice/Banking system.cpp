//Write a C++ program that simulates a simple banking system using a BankAccount class.
//The class should have private attributes for account number, account holder name, and balance.
//The program should allow the user to perform banking operations 
//such as opening an account, depositing money, withdrawing money, and displaying account details.
#include<iostream>
using namespace std;
  
class BankAccount {
  	private:
  		
  		int number;
  		string name;
  		float balance;
  		
  	public:
  	    void account_open();
  	    void deposit_money();
  	    void withdraw_money();
     	void account_detail();
  };
  	
   	void BankAccount :: account_open(){
  		cout<<"Your account number is "<<endl;
  		cin>>number;
  		cout<<"The name of holder is "<<endl;
  		cin>>name;
  		cout<<"Your balance is "<<endl;
  		cin>>balance;
	  }
  	void BankAccount :: deposit_money(){
  		int amount;
  		cout<<"Enter your amount you want to add "<<endl;
  		cin>>amount;
  		
  		if(amount>0){
  			balance = balance + amount;
  			cout<<"Your amount is added sucessfully "<<endl;
  			cout<<"Now your balance is "<< balance<<"\n"<<endl;
		  }
		  else
		  {
		  	cout<<"Your amount is Invalid  ";
		  	cout<<endl;
	    	  }
        	}
	
	void BankAccount :: withdraw_money(){
		int amount;
  		cout<<"Enter your amount you wanna withdraw \n"<<endl;
  		cin>>amount;
			if(amount<=balance&&amount>0){
				balance = balance - amount;
			cout<<"Your amount has been withdrawn from you bank account \n";
			
			cout <<"After Withdrawn money your balance is  "<<balance<<endl;
           }    
	    else{
		cout<<"Your amount is Invalid\n ";
		        }
		  
		}
	void BankAccount :: account_detail(){
			cout<<endl;
			cout<<"Your account number is "<< number<<endl;
			cout<<"Your Name  is "<<name<<endl;
			cout<<"Your account balance is "<<balance<<endl;
			cout<<"\n";
			
		}
  		
  	int main(){
  			BankAccount obj;
  			cout<<"Welcome to bank managment System   \n";
  			obj.account_open();
  			
  			code:
  			cout<<"Enter any one option "<<endl;
  			
  			cout<<"1. Deposit money"<<endl;
  			cout<<"2. Withdraw money "<<endl;
  			cout<<"3. Accounts Detail "<<endl;
  			cout<<"4. EXIT "<<endl;
  			int a;
  			cout <<"Enter the number  ";
  			cin>>a;
  			
  			switch(a){
  			case 1:
  	    	obj.deposit_money();
  			break;
  			case 2:
  			obj.withdraw_money();
  			break;
  			case 3:
  	    	obj.account_detail();
  			break;
  			case 4:
  			cout<<" _._._.Thank You _._._.";
  			return 0;
  			break;
  			default :
  				cout<<"Invalid number ";
  				return 0;
  				
  			}
  			
  			goto code;
  			
  			return 0;
  		}
  		
  		
  		
