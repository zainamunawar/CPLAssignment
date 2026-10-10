#include<iostream>
using namespace std;
int main()
{
	int salary;
	cout<<"ENTER YOUR SALARY PLEASE"<<endl;
	cin>>salary;
	if(salary<100000)
	{
		if(salary>=15000&&salary<=25000)
		{
			int bonus=salary+80000;
			cout<<"THE BONUS YOU GET IS OF 80,000"<<endl;
			cout<<"YOUR SALARY ALONG WITH BONUS IS="<<bonus<<endl;
		}
		if(salary>=25000&&salary<=35000)
		{
			int bonus=salary+70000;
			cout<<"THE BONUS YOU GET IS OF 70,000"<<endl;
			cout<<"YOUR SALARY ALONG WITH BONUS IS="<<bonus<<endl;
		}
		if(salary>=35000&&salary<=45000)
		{
			int bonus=salary+60000;
			cout<<"THE BONUS YOU GET IS OF 60,000"<<endl;
			cout<<"YOUR SALARY ALONG WITH BONUS IS="<<bonus<<endl;
		}
		if(salary>=45000&&salary<=55000)
		{
			int bonus=salary+50000;
			cout<<"THE BONUS YOU GET IS OF 50,000"<<endl;
			cout<<"YOUR SALARY ALONG WITH BONUS IS="<<bonus<<endl;
		}
		if(salary>=55000&&salary<=75000)
		{
			int bonus=salary+40000;
			cout<<"THE BONUS YOU GET IS OF 40,000"<<endl;
			cout<<"YOUR SALARY ALONG WITH BONUS IS="<<bonus<<endl;
		}
		if(salary>=75000&&salary<=85000)
		{
			int bonus=salary+30000;
			cout<<"THE BONUS YOU GET IS OF 30,000"<<endl;
			cout<<"YOUR SALARY ALONG WITH BONUS IS="<<bonus<<endl;
		}
		if(salary>=55000&&salary<=99000)
		{
			int bonus=salary+20000;
			cout<<"THE BONUS YOU GET IS OF 20,000"<<endl;
			cout<<"YOUR SALARY ALONG WITH BONUS IS="<<bonus<<endl;
		}
	}
	if(salary>100000)
	{
		cout<<"OBVIOUSLY NO BONUS FOR YOU!\nCOME ON MAN COVER YOUR EXPENSE IN THIS AMOUNT"<<endl;
	}
	return 0;
}
