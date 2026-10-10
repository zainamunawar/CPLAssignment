#include<iostream>
using namespace std;
int main()
{
	int speed;
	cout<<"speed="<<endl;
	cin>>speed;
	if(speed>=350)
	{
		cout<<"Challan is of Rs/-10,000"<<endl;
	}
	else if(speed>=300)
	{
		cout<<"Challan is of Rs/-5,000"<<endl;
	}
	else if(speed>=250)
	{
		cout<<"Challan is of Rs/-2500"<<endl;
	}
	else
	{
		cout<<"NO CHALLAN"<<endl;
	}
return 0;
}
