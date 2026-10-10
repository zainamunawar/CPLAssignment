#include<iostream>
using namespace std;
int main()
{
	int score, total_marks=100;
	cout<<"PLEASE ENTER YOUR SCORE"<<endl;
	cin>>score;
	int percentage=(score*100)/total_marks;
	if(percentage>=90)
	{
	cout<<"A+"<<endl;
    }
	else if(percentage>=80&&percentage<=90)
	{
	cout<<"A"<<endl;
    }
	else if(percentage>=70&&percentage<=80)
	{
	cout<<"B"<<endl;
	}
	else if(percentage>=60&&percentage<=70)
	{
	cout<<"C"<<endl;
	}
	else if(percentage>=50&&percentage<=60)
	{
	cout<<"D"<<endl;
	}
	else if(percentage>=50&&percentage<=50)
	{
	cout<<"E"<<endl;
	}
	else
	   {
		 cout<<"F"<<endl;
	   }
return 0;
}
