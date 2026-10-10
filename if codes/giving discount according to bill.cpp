#include<iostream>
using namespace std;
int main()
{
	int bill_amount;
	cout<<"Dear customer, \nwhat is yr total bill?"<<endl;
	cin>>bill_amount;
	if(bill_amount>10000)
	{
		int discount=bill_amount*20/100;
		int payable=bill_amount-discount;
		cout<<"You got 20% discount on your shopping!\n Now you have to pay="<<payable<<endl;
	}
	if(bill_amount>=5000&&bill_amount<=10000)
	{
		int discount=bill_amount*10/100;
		int payable=bill_amount-discount;
		cout<<"You got 10% discount on your shopping!\nNow you have to pay="<<payable<<endl;
	}
	if(bill_amount<5000)
	{
		cout<<"you have to pay="<<bill_amount<<endl;
	}
	return 0;
}
