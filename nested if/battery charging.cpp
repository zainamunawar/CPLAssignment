#include<iostream>
using namespace std;
int main()
{
	int battery;
	cout<<"please enter your battery"<<endl;
	cin>>battery;
	if(battery<=20)
	{
		cout<<"BATTERY LOW CONNECT TO THE CHARGER"<<endl;
		if(battery<5)
		{
			cout<<"WARNING:\n your phone will be power off!\n CAN'T YOOU SEE THE BATTERY!!!!?'"<<endl;
		}
		
	}
	if(battery>20)
		{
			cout<<"ENOUGH BATTERY"<<endl;
		}
}
