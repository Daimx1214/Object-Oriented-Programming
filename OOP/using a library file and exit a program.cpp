#include<iostream>
#include<cstdlib>
using namespace std;

class square{
	private :
		double length;
		double width ;
		
	public :
		square();      //constructor 
		
		void setlen(double);
		void setwid(double);
		
		double getlen()const{
			return length;
		}
		
		double getwid()const{
		return width;
		}
		
		double getarea()const{
		 return length * width;
		}
};

  square ::square(){
   	length =2.5;
   	width  =5;
   }

  void square :: setlen(double l){
  	if (l>=0){
  	length = l;
  }
  else 
    {
    	cout <<"invalid number";
    	exit (EXIT_FAILURE);
	}
}
    void square :: setwid(double w){
    	if(w>=0){
  	width = w;
  }
  else
  {
  		cout <<"invalid number";
    	exit (EXIT_FAILURE);
  }
                    }
  int main(){
  	
  	square obj;
  	
  	cout <<"The length is  = "<<obj.getlen()<<endl;
  	cout <<"The width is  = "<<obj.getwid()<<endl;
  	cout <<"The Area is  = "<<obj.getarea()<<endl;
  	
  	return 0;
  }
  