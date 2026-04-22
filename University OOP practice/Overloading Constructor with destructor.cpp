// overloading constructor
#include<iostream>
using namespace std;

class Mobile{
	private:
		string name;
		int price;
		float weight;
		
	public:
		Mobile(){
			name = "Iphone";
			price = 100;
			weight = 56.78;
		}
		Mobile(string n){
			name =n;
			price = 150;
			weight =89.98;
		}
		Mobile(string n , int p , float w){
			name = n;
			price = p;
			weight = w;
		}

		void display(){
			cout<<"Name of mobile is  "<<name<<endl;
			cout<<"Price of mobile is  "<<price<<endl;
			cout<<"Weight of mobile is  "<<weight<<endl;
		}
		~Mobile(){
			cout<<"\nDestructor called"<<endl;
		}
};
    int main(){
   	
   	Mobile obj;
   	Mobile obj2("Iphone 16 pro max");
   	Mobile obj3("12 pro",1200,23.1);
   	
   	cout<<" First Mobile detail\n "<<endl;
   	obj.display();
   	
   	cout<<"\nSecond Mobile detail\n "<<endl;
   	obj2.display();
   	
   	cout<<"\nThird Mobile detail\n "<<endl;
   	obj3.display();
   	
   	return 0;
   }