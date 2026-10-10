#include<iostream>
using namespace std;
int main()
{
	cout<<"==============OFFICE ENTRANCE EMPLOYEE VERIFICATION=============="<<endl;
	int password;
	cout<<"PLEASE ENTER THE PASSWORD"<<endl;
	cin>>password;
	if(password==1234)
	{     
	    int pin;
		cout<<"ENTER PIN:"<<endl;
		cin>>pin;
		if(pin==6789)
		{
			cout<<"VERIFIED"<<endl;
	    }
	    if(pin!=6789)
	    {
n	    	cout<<"NOT VERIFIED"<<endl;
		}
	}
		if(password!=1234)
		{
			cout<<"YOU CANNOT ENTER THE PIN SORRY!"<<endl;
		}
		
	
	return 0;
}
