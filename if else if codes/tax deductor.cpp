#include<iostream>
using namespace std;
int main()
{
	int tax, salary;
	cout<<"======TAX DEDUCTOR======"<<endl;
	cout<<"PLEASE ENTER YOUR SALARY"<<endl;
	cin>>salary;
	if(salary<=30,000)
	{
		cout<<"NO TAX DEDUCTION!"<<endl;
		cout<<"YOUR SALARY IS OF=\n 0 RS"<<salary<<endl;
	}
	else if(salary>=31000&&salary<=50000)
	{
		tax=salary*5/100;
		cout<<"THE TAX DEDUCTION IS OF=\n"<<tax<<" RS"<<endl;
		int payable=salary-tax;
		cout<<"THE PAYABLE SALARY AFTER TAX DEDUCTION="<<payable<<endl;
	}
	else if(salary>=51000&&salary<=100000)
	{
		tax=salary*10/100;
		cout<<"THE TAX DEDUCTION IS OF=\n"<<tax<<" RS"<<endl;
		int payable=salary-tax;
		cout<<"THE PAYABLE SALARY AFTER TAX DEDUCTION="<<payable<<endl;
	}
	else 
	{
		if(salary>100000)
		tax=salary*15/100;
		cout<<"THE TAX DEDUCTION IS OF=\n"<<tax<<" RS"<<endl;
		int payable=salary-tax;
		cout<<"THE PAYABLE SALARY AFTER TAX DEDUCTION="<<payable<<endl;
	}
	return 0;
}
