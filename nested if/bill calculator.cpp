#include<iostream>
using namespace std;
int main()
{
	int unit, bill;
	cout<<"Enter the units consumed="<<endl;
	cin>>unit;
	cout<<"WHAT'S YOUR AMOUNT OF BILL?"<<endl;
	cin>>bill;
	bill=bill*unit;
	cout<<"THE ACTUAL AMOUNT OF BILL IS="<<bill<<endl;
	if(unit>300)
	{
		if(bill>=5000&&bill<=10000)
		{
			int payable_bill=bill*50/100;
			cout<<"================================================="<<endl;
			cout<<"=            discount of 50%!                   "<<endl;
			cout<<"+     PAYABLE AMOUNT IS:\t"<<payable_bill<<"    "<<endl;
			cout<<"================================================="<<endl;
		}
		if(bill>=10000&&bill<=30000)
		{
			int payable_bill=bill*30/100;
			cout<<"================================================="<<endl;
			cout<<"=            discount of 30%!                   "<<endl;
			cout<<"+     PAYABLE AMOUNT IS:\t"<<payable_bill<<"    "<<endl;
			cout<<"================================================="<<endl;
			
		}
		if(bill>=30000&&bill<=50000)
		{
			int payable_bill=bill*10/100;
			cout<<"================================================="<<endl;
			cout<<"            discount of 10%!                   "<<endl;
			cout<<"     PAYABLE AMOUNT IS:\t"<<payable_bill<<"    "<<endl;
			cout<<"================================================="<<endl;
		}
		if(bill>50000)
		{
			 cout<<"================================================="<<endl;
			 cout<<"=           NO DISCOUNT!                         "<<endl;
			 cout<<"=      you have to pay the actual bill:\t"<<bill<<endl;
			 cout<<"================================================="<<endl;+
		}
	}
	return 0;
	
}
