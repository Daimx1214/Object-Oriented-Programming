#include<iostream>
using namespace std;
class Calander
{
	private:
		int date,month,year;
	public:
        Calander();
		Calander(int,int,int);
		int getdate() const;
		int getmonth() const;
		int getyear() const;
		void show() ;
};
   Calander::Calander()
   {
   	date=0;
   	month=0;
   	year=0;
   }
   	
    Calander::Calander(int d,int m,int y)
    {
    	date=d;
    	month=m;
    	year=y;
	}
	int Calander:: getdate() const
	{
		return date;
	}
	int Calander:: getmonth() const
	{
		return month;
	}
	int Calander::getyear()const
	{
		return year;
	}
	void Calander::show()
	{
		cout<<date<<"/"<<month<<"/"<<year;
	}
	int main(){
	    int a,b,c;
	    Calander obj;
	    cout<<"checking if date,month and year is equal to zero "<<endl;
		obj.show();
	    cout<<endl<<"Enter the date = ";
	    cin>>a;
	    cout<<"Enter the month = ";
	    cin>>b;
	    cout<<"Enter the year = ";
	    cin>>c;
	    Calander call(a,b,c);      //constructor
	    call.getdate();
	    call.getmonth();
	    call.getyear();
	    call.show();
	    return 0;
	    
	}