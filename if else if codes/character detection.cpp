#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"ENTER A CHARACTER"<<endl;
	cin>>ch;
	if(ch>=65&&ch<=90)
	cout<<"THE ENTERED LETTER IS UPPERCASE"<<endl;
	else if(ch>=97&&ch<=122)
	cout<<"THE ENTERED LETTER IS LOWERCASE"<<endl;
	else 
	{
		cout<<"YOU HAVE ENTERED THE NUMBER"<<endl;
	}
	return 0;
}
