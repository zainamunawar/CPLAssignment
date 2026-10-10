#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"please enter value of a="<<endl;
	cin>>a;
	cout<<"please enter value of b="<<endl;
	cin>>b;
	cout<<"please enter value of c="<<endl;
	cin>>c;
	cout<<"please enter value of d="<<endl;
	cin>>d;
	int det= a*d-b*c;
	if(det==0)
	cout<<"SINGULAR MATRIX"<<endl;
	else if(det>0)
	cout<<"POSITIVE MATRIX"<<endl;
	else 
	cout<<"NEGATIVE MATRIX"<<endl;
	return 0;
	
}
