#include<iostream>
using namespace std;
int main()
{
	int side1,side2,side3;
	cout<<"ENTER FIRST SIDE MEASUREMNET"<<endl;
	cin>>side1;
	cout<<"ENTER SECOND SIDE MEASUREMNET"<<endl;
	cin>>side2;
	cout<<"ENTER THIRD SIDE MEASUREMNET"<<endl;
	cin>>side3;
	if(side1==side2&&side1==side3&&side2==side3&&side2==side1&&side3==side1&&side3==side2)
{
	cout<<"EQUILATERAL TRIANGLE"<<endl;
}
     if(side1==side2||side2==side1&&side3!=side1&&side3!=side2&&side1!=side3&&side2!=side3||side3==side2||side3==side1)
{
     cout<<"ISOSCLES TRIANGLE"<<endl;	
}	
     if(side1!=side2&&side1!=side3&&side2!=side3&&side2!=side1&&side3!=side1&&side3!=side2)
{
     	cout<<"SCALENE TRIANGLE"<<endl;
}
return 0;
}
