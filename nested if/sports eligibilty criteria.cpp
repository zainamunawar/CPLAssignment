#include<iostream>
using namespace std;
int main()
{
	int height;
	cout<<"please enter your height in Feets"<<endl;
	cin>>height;
	if(height>=4)
	{
		if(height>=5)
		{
			cout<<"Eligible for basketball"<<endl;
		}
		
	
	if(height>=6)
		{
			cout<<"Eligible for volleyball"<<endl;
		}
	if(height>=7)
	{
		cout<<"Eligible for cricket"<<endl;
	}
   }
   if(height<4)
   {
   	cout<<"not eligible for anything"<<endl;
   }
}
