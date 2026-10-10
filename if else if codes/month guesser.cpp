#include<iostream>
using namespace std;
int main()
{
	cout<<"========MONTH GUESSER========"<<endl;
	cout<<"IF YOU ENTER A NUMBER BETWEEN 1 AND 12 IT WILL GUESS THE NAME OF THE MONTH"<<endl;
	int num;
	start:
	cout<<"HEY PLEASE ENTER A NUMBER="<<endl;
	cin>>num;
	if(num==1)
	cout<<"JANUARY"<<endl;
	else if(num==2)
	cout<<"FEBRUARY"<<endl;
	else if(num==3)
	cout<<"MARCH"<<endl;
	else if(num==4)
	cout<<"APRIL"<<endl;
	else if(num==5)
	cout<<"MAY"<<endl;
	else if(num==6)
	cout<<"JUNE"<<endl;
	else if(num==7)
	cout<<"JULY"<<endl;
	else if(num==8)
	cout<<"AUGUST"<<endl;
	else if(num==9)
	cout<<"SEPTEMBER"<<endl;
	else if(num==10)
	cout<<"OCTOBER"<<endl;
	else if(num==11)
	cout<<"NOVEMBER"<<endl;
	else if(num==12)
	cout<<"DECEMBER"<<endl;
	else
	  {
	  cout<<"please enter the numbers as per required"<<endl;
	  goto start;
     }
}
