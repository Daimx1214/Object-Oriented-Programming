#include<iostream>
using namespace std;

class Program{
	public:
		Program(){
	    	cout<<"Parent class constructor "<<endl;
	}
};
class Miniprogram : Program { 
	public:
		Miniprogram() : Program() {
			cout<<"Child class constructor ";
	}
};

int main(){
	Miniprogram obj;
	
	return 0;
}
