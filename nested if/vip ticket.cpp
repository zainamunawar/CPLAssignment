#include<iostream>
using namespace std;
int main()
{
	int age;
	bool response;
	cout<<"WHAT IS YOUR AGE"<<endl;
	cin>>age;
	cout<<"DO YOU HAVE A VIP CARD?\nTYPE 1--> YES AND 0--> NO"<<endl;
	cin>>response;
	if(age>=18)
	{
		if(response==1)
	   {
			cout<<"you got a VIP ticket"<<endl;
	   }
		if(response==0)
		{
			cout<<"YOU GOT A REGULAR TICKET"<<endl;
		}
	}
}
