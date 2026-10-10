#include<iostream>
using namespace std;
int main()
{
	int height;
	cout<<"please enter your height in centimeters"<<endl;
	cin>>height;
	if(height>=150)
	{
		if(height>=180)
		{
			cout<<"TALLER"<<endl;
		}
		
	}
	if(height<180)
		{
			cout<<"SHORTER"<<endl;
		}
}
