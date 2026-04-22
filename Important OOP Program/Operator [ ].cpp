

#include<iostream>
using namespace std;

class Operator{
private:
	int ID;
	int *data;
public:
	
	Operator(int i){
		ID = i;
		data = new int[ID];
		cout<<"Constructor Called\n";
	}
	
	~Operator(){
		delete[] data;
		cout<<"Destructor Called\n";
    } 
    
    int& operator[](int index){
    	return data[index];
    }
};

int main(){
	Operator arr(5);
	
	arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    
    return 0;
}
