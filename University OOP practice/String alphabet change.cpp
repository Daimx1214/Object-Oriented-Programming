#include<iostream>
using namespace std;

int main(){
	string n;
	cout<<"Enter the string ";
	cin>>n;
	char a , b;
	cout<<"Enter the alphabet you want to change ";
	cin>>a;
	cout<<"Enter the  new alphabet ";
	cin>>b;
	
	int x = 0;
	for(int i = 0; i < n.length(); i++){
		if(n[i] == a){
	      (n[i] = b);
	      x++;		
		}
	}	
	
	if (x > 0)
        cout << "New name: " << n << endl;
    else
        cout << "Invalid " << endl;
	
}