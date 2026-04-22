#include<iostream>
using namespace std;

class Door{
	private:
		int size;
		double width;
		void dor(int s, double w){
			size = s;
			width = w;
			
		}
    	double qwe(){
			int res = size * width;
			return res;
			
		}
	public:
		void std(){
			dor(2,12);
		}
		
		void atr(){
			qwe();
		}
		
	void dis(){
		cout<<"The door size "<<size<<endl;
		cout<<"The door width "<<width<<endl;
		cout<<"The door area "<<qwe()<<endl;
	}
};

 int main(){
 	Door a;
 	a.std();
 	a.atr();
 	a.dis();
 	
 	return 0;
 }