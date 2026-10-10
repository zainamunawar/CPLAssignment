#include<iostream>
using namespace std;
int main()
{
	int a,b,c,D;
	cout<<"========IN ORDER TO CALCULATE DISCRIMINANT YOU HAVE TO ENTER THE FOLLOWING VALUES========"<<endl;
	cout<<"PLEASE ENTER a"<<endl;
	cin>>a;
	cout<<"PLEASE ENTER b"<<endl;
	cin>>b;
	cout<<"PLEASE ENTER c"<<endl;
	cin>>c;
	D=b*b-4*a*c;
	if(D>0)
	cout<<"THE EAQUATIONS HAVE REAL AND UNEQUAL ROOTS"<<endl;
	if(D==0)
	cout<<"THE EQUATION HAVE REAL AND EAQUAL ROOTS"<<endl;
	if(D<0)
	cout<<"THE EQUATION HAVE IMAGINARY ROOTS"<<endl;
	return 0;
	
}
