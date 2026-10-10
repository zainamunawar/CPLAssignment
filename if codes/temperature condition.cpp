#include<iostream>
using namespace std;
int main()
{
	int temp;
	cout<<"please enter temperature"<<endl;
	cin>>temp;
	if(temp<10)
	cout<<"TEMPERATURE IS COLD"<<endl;
	if(temp>=10&&temp<=25)
	cout<<"TEMPERATURE IS COOL"<<endl;
	if(temp>=26&&temp<=35)
	cout<<"TEMPERATURE IS WARM"<<endl;
	if(temp>35)
	cout<<"TEMPERATURE IS HOT"<<endl;
	return 0;
}
