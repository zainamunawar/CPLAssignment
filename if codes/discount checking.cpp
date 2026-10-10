#include<iostream>
using namespace std;
int main()
{
	int amount;
	cout<<"enter the total amount of bill"<<endl;
	cin>>amount;
	start:
	cout<<"the total amount of bill you have to pay="<<amount<<endl;
	if(amount>5000)
	{
		cout<<"You get a 10% discount!"<<endl;
		int discount_amount=amount*10/100;
		int payable_amount=amount -discount_amount;
		cout<<"after discount you have to pay="<<payable_amount<<endl;
	
	goto start;
	}
	return 0;
}
