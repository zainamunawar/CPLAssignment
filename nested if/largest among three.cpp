#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter first value"<<endl;
	cin>>a;
	cout<<"Enter second value"<<endl;
	cin>>b;
	cout<<"Enter third value"<<endl;
	cin>>c;
	if(a>b)
	{
		 cout<<"a is largest."<<endl;
		if(a>b)
		{
			cout<<"a is largest"<<endl;
			if(c>a)
			{
				cout<<"c is largest than a"<<endl;
			}
		}
	}
	if(b>a)
	{
		if(b>c)
		{
			cout<<"b is largest"<<endl;
		}
		if(c>b)
		{
			cout<<"c is largest"<<endl;
		}
	}
	return 0;
} 
