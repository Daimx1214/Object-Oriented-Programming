#include<iostream>
using namespace std;

class Door{
	private:
		int size;
		double width;
		void dor(int s, double w);
    	double qwe();
	public:
		void std();
		void atr();
    	void dis();
};
    void Door :: dor(int s, double w){
			size = s;
			width = w;
			
		}
    double Door  :: qwe()	{
			int res = size * width;
			return res;
			
		}
		
	void Door:: std(){
			dor(2,12);
	}
	void Door :: atr(){
	    	qwe();
	}
	
	void Door :: dis(){
		cout<<"The door size "<<size<<endl;
		cout<<"The door width "<<width<<endl;
		cout<<"The door area "<<qwe()<<endl;
	}
	
 int main(){
 	Door a;
 	a.std();
 	a.atr();
 	a.dis();
 	
 	return 0;
 }
 
 