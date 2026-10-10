#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Please enter a number"<<endl;
	cin>>num;
	if(num%1==0&&num%num==0)
	cout<<"YES! IT'S A PRIME NUMBER"<<endl;
	if(num%1!=0&&num%num!=0)
	cout<<"OOPS! IT'S NOT A PRIME NUMBER"<<endl;
	return 0;
}
