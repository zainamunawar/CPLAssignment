#include<iostream>
using namespace std;
int main()
{
	int age;
	int bus_fare=1000;
	//per person 1000rs
	cout<<"please enter your age="<<endl;
	cin>>age;
	if(age==5)
	cout<<"NO BUS FARE"<<endl;
	if(age>=5&&age<=12)
	{
	 int payable_fare=bus_fare/2;
	 cout<<"Dear Passanger!\n             you have to pay="<<payable_fare<<endl;
	}
	if(age>12)
	{
	 cout<<"you have to pay="<<bus_fare<<endl;
	}
	return 0;
}
