// to check book greater price using my file
#include<iostream>
using namespace std;
#include"book.h"
 void book :: get(){
   	 cout<<"Enter the ID of Book\n";
   	 cin>>id;
   	 cout<<"Enter the Pages of Book\n";
   	 cin>>page;
   	 cout<<"Enter the Price of Book\n";
   	 cin>>price;
   }
   void book :: show(){
   	cout <<"\nID of Book "<<id<<endl;
   	cout <<"Pages of Book "<<page<<endl;
   	cout <<"Price of Book "<<price<<endl;
   }
   double  book ::cost()const{
   	return price;
   }
   
   int main(){
   	book a;
   	book b;
   	
   	cout<<"Enter the detail of Book A\n";
   	a.get();
   	a.show();
   	cout<<"\nEnter the detail of Book B\n";
   	b.get();
   	b.show();
   	
   	if(a.cost()>b.cost()){
   		cout<<"Book A is more Costly";
	   }
   	else 
   	   cout<<"Book B is costly";
   	   return 0;
   	
   }
   
   