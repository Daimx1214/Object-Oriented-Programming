/*
                            //Simple Multi-Level(inside)
#include<iostream>
using namespace std;

class Drink{
protected:
	int ID;
	string name;
public:
	Drink(int id , string n){
		ID = id;
		name = n;
	}
	void display(){
		cout<<"ID: "<<ID<<endl;
		cout<<"Name: "<<name<<endl;
	}  
};

class Bottle{
protected:
	string flavour;
public:
	Bottle(string f){
		flavour = f;
	}
	void display1(){
		cout<<"Flavour: "<<flavour<<endl;
	}
};

//class Bot1{
//protected:
//	string flavour1;
//public:
//	Bot1(string ff){
//		flavour1 = ff;
//	}
//	void display12(){
//		cout<<"Flavour1: "<<flavour1<<endl;
//	}
//};

class Coke : public Drink , public Bottle{
public:
	int ML;
	Coke ( int ID , string n , string f , int x ) : Drink (ID , n) , Bottle (f){
		ML = x;
	}
	void displayy(){
		cout<<"Mili Liter: "<< ML <<endl;
	}
};

int main(){
	Coke obj( 69, "7UP" , "Mint" , 500 );
	obj.display();
	obj.display1();
	obj.displayy();
	
}
*/




                          // Passing Argument and doing (outside)

#include<iostream>
using namespace std;

class Drink{
protected:
	int ID;
	string name;
public:
	Drink(int id , string n){
		ID = id;
		name = n;
	}
	void display(){
		cout<<"ID: "<<ID<<endl;
		cout<<"Name: "<<name<<endl;
	}  
};

class Bottle{
protected:
	string flavour;
public:
	Bottle(string f){
		flavour = f;
	}
	void display1(){
		cout<<"Flavour: "<<flavour<<endl;
	}
};

class Coke : public Drink , public Bottle{
//jo class phala ha whi phala aiya ga lazmii e.g first drink then Bottle agar ulta b kr do frq nhi ha 
//lakin sidha likho to behter ha.
public:
	int ML;	
	Coke (int x , int ID , string n , string f );
	void displayy();
	
};// next line ma Bottle or Drink ki gaja change b kr lo ya
 // same rkho lakin whii phala chala ga jo class phala bani hogi
	Coke :: Coke(int x , int ID , string n , string f ) : Bottle (f),  Drink (ID , n){
		ML = x;
	}
	void Coke :: displayy(){
		cout<<"Mili Liter: "<< ML <<endl;
	}
	
int main(){
	Coke obj(500 , 69, "7UP" , "Mint");
	obj.display();
	obj.display1();
	obj.displayy();
	
}
