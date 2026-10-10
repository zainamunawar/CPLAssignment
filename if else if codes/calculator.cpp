#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char ch;
	cout<<"=========THIS IS A DIGITAL CALCULTOR=========="<<endl;
	cout<<"KEY POINTS TO REMEMBER\n"<<endl;
	cout<<"M--> MULTIPLICATION\nS--> SUBTRACTION\nA--> ADDITION\nd--> DIVISION\nR--> REMAINDER"<<endl;
	start:
	cout<<"ENTER A CHARACTER"<<endl;
	cin>>ch;
	if(ch=='M'||ch=='m')
	{
		int multiply=a*b;
		cout<<"a*b="<<multiply<<endl;
	}
	else if(ch=='S'||ch=='s')
	{
		int subtract=a-b;
		cout<<"a-b="<<subtract<<endl;
	}
	else if(ch=='A'||ch=='a')
	{
		int addition=a+b;
		cout<<"a+b="<<addition<<endl;
	}
	else if(ch=='D'||ch=='d')
	{
		int division=a/b;
		cout<<"a/b="<<division<<endl;
	}
	else if(ch=='R'||ch=='r')
	{
		int remainder=a%b;
		cout<<"a%b="<<remainder<<endl;
	}
	else
	   {
		 cout<<"please enter correctly"<<endl;
	    goto start;
	   }
}
