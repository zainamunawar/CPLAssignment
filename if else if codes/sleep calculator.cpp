#include<iostream>
using namespace std;
int main()
{
	int hour;
	cout<<"====SLEEP CALCULATOR===="<<endl;
	cout<<"HOW MANY HOURS DID YOU SLEPT"<<endl;
	cin>>hour;
	if(hour<6)
	{
		cout<<"INSUFFICIENT SLEEP!\nYOU NEED MORE SLEEP!"<<endl;
	}
	else if(hour<=8)
	{
		cout<<"NORMAL SLEEP"<<endl;
	}
	else 
	{
		cout<<"EXCESSIVE SLEEP!"<<endl;
	}
	return 0;
}
