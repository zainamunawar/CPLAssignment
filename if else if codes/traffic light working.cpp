#include<iostream>
using namespace std;
int main()
{
	string color;
	cout<<"==============TRAFFIC LIGHT FUNCTION DETERMINATION PROGRAM=================="<<endl;
	start:
	cout<<"ENTER THE TRAFFIC LIGHT COLOR"<<endl;
	cin>>color;
	if(color=="RED"||color=="red")
	{
		cout<<"===================================================="<<endl;
		cout<<"=             THIS INDICATES TO STOP!               ="<<endl;
		cout<<"=                                                  ="<<endl;
		cout<<"===================================================="<<endl;
	}
	else if(color=="YELLOW"||color=="yellow")
	{
		cout<<"==============================================================="<<endl;
		cout<<"=             THIS INDICATES TO start the car!                ="<<endl;
		cout<<"=                                                             ="<<endl;
		cout<<"==============================================================="<<endl;
	}
	else if(color=="GREEN"||color=="green")
	{
		cout<<"====================================================="<<endl;
		cout<<"=             THIS INDICATES TO GO!                 ="<<endl;
		cout<<"=                                                   ="<<endl;
		cout<<"====================================================="<<endl;
	}
	else
	     {
		    cout<<"PLEASE ENTER APPROPRIATE COLORS"<<endl;
	        goto start;
	     }
}
