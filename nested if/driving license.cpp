#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"what is your age?"<<endl;
	cin>>age;
	if(age>=18)
	{
		bool response;
		cout<<"DID YOU PASS THE WRITTEN TEST?\n1--> yes\n0-->no"<<endl;
		cin>>response;
		if(response==1)
		{
		cout<<"you will get the driving license"<<endl;
    	}
    	if(response==0)
    	{
    		cout<<"DON'T DARE TO THINK OF LICENSE"<<endl;
		}
	
	}
}
