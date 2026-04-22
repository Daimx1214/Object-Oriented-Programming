  // implict destructor
#include<iostream>
using namespace std;

class Item{
	private:
		string itemname;
		int price;
		int unit;
		
	public :
		Item(  const string &item , int p ,int u){
			itemname = item;
			price = p;
			unit = u;
		}
	 ~Item(){     //Destructor
		
	 	cout<<"The destructor item is " <<itemname <<"\n";
	 
	 }
	 string itemname1()const{
	 	return itemname;
	 }
	
	int price1()const{
		return price;
	}
	
	int unit1()const{
		return unit;
	}
	
	void display(){
		cout <<"The name of item is " <<itemname<<endl;
		cout <<"The price of item is " <<price<<endl;
		cout <<"The unit of item are " <<unit<<endl;
		
	}
};

int main(){
	
	Item obj("Ali", 23 , 4);
	Item obj2 = obj;
	
	cout<<"Original items"<<endl;
	obj.display();
	
	cout<<"\n";
	
	cout<<"Copied items"<<endl;
	obj2.display();
	
	cout<<"\n";
	
	return 0;
}
