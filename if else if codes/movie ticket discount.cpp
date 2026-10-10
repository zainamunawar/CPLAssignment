#include<iostream>
using namespace std;
int main()
{
	int age;
	int perhead=1200;
	int no_ofcustomer;
	cout<<"============TICKET COUNTER============"<<endl;
	cout<<"DEAR CUSTOMER!\nHOW MANY TICKETS DO YOU WANT?"<<endl;
	cin>>no_ofcustomer;
	int amount=perhead*no_ofcustomer;
	cout<<"ACUAL AMOUNT OF TICKETS="<<amount<<endl;
	cout<<"WHAT IS YOUR AGE"<<endl;
	cin>>age;
	if(age<12)
   {
   	    int payable=amount*50/100;
   	   cout<<"============================================================================"<<endl;
   	   cout<<"=                           YOU GOT A DISCOUNT!                                        "<<endl;
   	   cout<<"=                             YOU HAVE TO PAY="<<payable<<"                       "<<endl;
   	   cout<<"============================================================================="<<endl;
   }
   else if(age>=12&&age<=18)
   {    
   	   int payable=amount*10/100;
   	   cout<<"============================================================================="<<endl;
   	   cout<<"=                           YOU GOT A DISCOUNT!                                       "<<endl;
   	   cout<<"=                            YOU HAVE TO PAY="<<payable<<"                           "<<endl;
   	   cout<<"============================================================================="<<endl;
   }
   else if(age>=65)
   {
   	   cout<<"============================================================================="<<endl;
   	   cout<<"=                           NO DISCOUNT!                                    "<<endl;
   	   cout<<"=                          YOU HAVE TO PAY                                  "<<amount<<endl;
   	   cout<<"============================================================================="<<endl;
   	}
   	return 0;
}

