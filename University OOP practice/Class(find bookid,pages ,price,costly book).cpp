#include<iostream>
using namespace std;
class book{
	private:
	int BOOKID;
	int Pages;
	float Price;
	public:
		void get(){
			cout<<"Enter the ID of first Book"<<endl;
			cin>>BOOKID;
			cout<<"Enter the Pages of first Book"<<endl;
			cin>>Pages;
			cout<<"Enter the Price of first Book"<<endl;
			cin>>Price;
		}
		
	void show(){
		cout<<"\nEnter the ID\n"<<BOOKID<<endl;
		cout<<"Enter the pages\n"<<Pages<<endl;
		cout<<"Enter the Price\n"<<Price<<endl;
	}
	
	void set(int id,int pages,int price){
		BOOKID = id;
		Pages = pages;
		Price = price;
	}
	
	float getprice(){
		return Price;
	}
};

  int main(){
    book  book1 , book2;
  	cout<<"Enter the detail of  first Book\n";
  	book1.get();
  	cout<<"Enter the detail of second Book\n";
  	book2.get();
  	if ( book1.getprice()>book2.getprice()){
  		cout<<"The most costly book is";
  		book1.show();
  	}	else{
	  cout<<"The most costly book is";
  		book2.show();
	  }
  	return 0;
  }










