#include<iostream>
using namespace std;
 
class Tree{
private:
 	static int a;
 		
public:
 	Tree(){
 		a++;
	}
		
    int fun(){
		return a;
	}

};

int Tree :: a = 0;
 
int main(){ 
    Tree obj;      
 	Tree obj1;
 	Tree obj2;
	Tree obj3;
	
	cout<<"We have "<<obj.fun()<<" tree in our program ";
	
	return 0;
	
}
	
	
	