#include<iostream>
using namespace std;
int main()
{
	int x,y,r;
	cout<<"enter value of x"<<endl;
	cin>>x;
	cout<<"enter value of y"<<endl;
	cin>>y;
	cout<<"Enter value of r"<<endl;
	cin>>r;
	r=r*r;
	int d= x*x+y*y;
	cout<<"d= x*x+y*y"<<endl;
	if(d<r)
	cout<<"THE POINT IS INSIDE THE CIRCLE"<<endl;
	if(d>r)
	cout<<"THE POINT IS OUTSIDE THE CIRCLE"<<endl;
	if(d==r)
	cout<<"THE POINT IS ON THE BOUNDARY"<<endl;
	return 0;
}
