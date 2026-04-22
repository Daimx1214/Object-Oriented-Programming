                             //OBJECT CONVERSION
    // IS MA MANA INT OR CHAR KO STRING MA CONVERT KIA HA 
    //IS ma jitna b ANS aiya ga wo sab k ASCII code da ga....   
    
/*
#include<iostream>
using namespace std;
	
class Object{
private:
	int ID;
	char word;
public:
    Object(int ID, char word){
    	this->ID =ID;
    	this->word=word;
	}
	operator string(){
		return string(1,word) + " "+ to_string(ID);
	}      	
};  
int main(){
	Object obj(69 , 'A');
	string x = obj;
	cout<<"WORD: "<<x<<endl;
}

			       //IS MA MANA INT KO CHAR  MA CONVERT KIA HA
			       
			       
			       		       
			       
#include<iostream>
using namespace std;
	
class Object{
private:
	int ID;
	int word;
public:
    Object(int ID, int word){
    	this->ID =ID;
    	this->word=word;
	}
	operator char(){
		return ID + word;
	}      	
};  
int main(){
	Object obj(69 , 34);
	char x = obj;
	cout<<"WORD: "<<x<<endl;
}

*/

                        //IS MA MANA STRING OR CHAR  KO INT MA CONVERT KIA HA	       



			       
#include<iostream>
using namespace std;
	
class Object{
private:
	char ID;
	string word;
public:
    Object(char ID, string word){
    	this->ID =ID;
    	this->word=word;
	}
	operator int(){
		return ID + word.length();
	}      	
};  
int main(){
	Object obj('A' , "ALI");  //A =65 in ASCII  ,  ALI  = 3alphabet    ==== 68
	int x = obj;
	cout<<"WORD: "<<x<<endl;
}         