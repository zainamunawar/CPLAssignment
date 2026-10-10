#include<iostream>
using namespace std;
int main()
{
	int balance=100000;
	int widthdraw;
	cout<<"                                                 =====SIMPLE ATM====="<<endl;
	cout<<"-------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"ASSALAM-O-ALAIKUM WARAHMATULAHI WABARAKATUHU!\n\nPLEASE ENTER THE AMOUNT YOU WANT TO WIDRAW"<<endl;
	cin>>widthdraw;
	if(widthdraw<=0)
	{
		cout<<"SORRY!\nYOU DON'T HAVE MONEY TO WIDTHDRAW'"<<endl;
	}
	else if(widthdraw<=balance)
	{
		balance=balance-widthdraw;
		cout<<"HERE YOU GO!\nTHE AMOUNT LEFT AFTER WIDTHDRAWING IS="<<balance<<"RS"<<endl;
	}
	else if(widthdraw>=balance)
	{
		cout<<"SORRY!\nPLEASE ENTER WIDTHRAW AMOUNT WITHOUT FORGETTING YOUR BALANCE\nATTENTION PLEASE!\nYOUR WIDTHDRAWAL AMOUNT IS GREATER THAN YOUR BALANCE"<<endl;
	}
	else
	     cout<<"INSUFFICIENT BALANCE"<<endl;
	return 0;
}
