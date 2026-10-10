#include<iostream>
using namespace std;
int main()
{
	int a,b,c,temp;
	cout<<"PLEASE ENTER FIRST NUMBER"<<endl;
	cin>>a;
	cout<<"PLEASE ENTER SECOND NUMBER"<<endl;
	cin>>b;
	cout<<"PLEASE ENTER THIRD NUMBER"<<endl;
	cin>>c;
	if(a>b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	if(b>c)
	{
		//c is largest.
		 temp=b;
		b=c;
		c=temp;
	}
	if(a>b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	cout<<a<<" "<<b<<" "<<c<<" "<<endl;
	return 0;
}
