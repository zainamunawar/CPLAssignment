#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"====INTEGER DIVISIBILITY===="<<endl;
	cout<<"ENTER A NUMBER"<<endl;
	cin>>n;
	if(n>0&&n%3==0)
	{
		cout<<"DIVISIBLE BY 3!"<<endl;
	}
	else if(n>0&&n%3!=0)
	{
		cout<<"NOT dIVISIBLE BY 3!"<<endl;
	}
	else if(n<0&&n%3==0)
	{
		cout<<"DIVISIBLE BY 3"<<endl;
	}
	else if(n<0&&n%3!=0)
	{
		cout<<"NOT DIVISBLE BY 3"<<endl;
	}
	return 0;
}
