#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"PLEASE ENTER VALUE OF x="<<endl;
	cin>>x;
	cout<<"PLEASE ENTER VALUE OF y="<<endl;
	cin>>y;
	if(x>0&&y>0)
	{
		cout<<"================================================================"<<endl;
		cout<<"THE ORDERED PAIR "<<"("<<x<<","<<y<<")"<< "LIES IN FIRST QUADRANT"<<endl;
		cout<<"================================================================"<<endl;
	}
	else if(x<0&&y>0)
	{
	    cout<<"================================================================"<<endl;
		cout<<"THE ORDERED PAIR " <<"("<<x<<","<<y<<")"<< "LIES IN SECOND QUADRANT"<<endl;
		cout<<"================================================================"<<endl;	
	}
	else if(x<0&&y<0)
	{
		cout<<"================================================================"<<endl;
		cout<<"THE ORDERED PAIR " <<"("<<x<<","<<y<<")"<<" LIES IN THIRD QUADRANT"<<endl;
		cout<<"================================================================"<<endl;
	}
	else if(x>0&&y<0)
	{
		cout<<"================================================================"<<endl;
		cout<<"THE ORDERED PAIR "<<"("<<x<<","<<y<<")"<<" LIES IN FOURTH QUADRANT"<<endl;
		cout<<"================================================================"<<endl;
	}
	return 0;
}
