#include<iostream>
using namespace std;
int main()
{
	cout<<"            ======WELCOME TO HAWKSBAY RESTRAUNT=======         "<<endl;
	cout<<"                        ----MENU----        "<<endl;
	cout<<"========================================================="<<endl;
	cout<<"=             KEY WORDS FOR OUR MENU                    ="<<endl;
	cout<<"=             B--> burger                               ="<<endl;
	cout<<"=             C--> chowmein                             ="<<endl;
	cout<<"=             P--> pizza                                ="<<endl;n++
	cout<<"=             S--> shawarma                             ="<<endl;
	cout<<"=             L--> lasania                              ="<<endl;
	cout<<"=             A--> alfredo                              ="<<endl;
	cout<<"=             M--> momos                                ="<<endl;
	cout<<"=             E--> egg fried rice                       ="<<endl;
	cout<<"=             V--> veg rolls                            ="<<endl;
	cout<<"========================================================="<<endl;
	char response;
	start:
    cout<<"GOOD EVENING!\nWHAT DO YOU PREFER TO EAT?"<<endl;
	cin>>response;
	if(response=='B'||response=='b')
	cout<<"YOUR ORDER OF BURGER HAS BEEN PLACED"<<endl;
	else if(response=='C'||response=='c')
	cout<<"YOUR ORDER OF CHOWMEIN HAS BEEN PLACED"<<endl;
	else if(response=='P'||response=='p')
	cout<<"YOUR ORDER OF PIZZA HAS BEEN PLACED"<<endl;
	else if(response=='S'||response=='s')
	cout<<"YOUR ORDER OF SHAWARMA HAS BEEN PLACED"<<endl;
	else if(response=='L'||response=='l')
	cout<<"YOUR ORDER OF LASANIA HAS BEEN PLACED"<<endl;
	else if(response=='A'||response=='a')
	cout<<"YOUR ORDER OF ALFREDO HAS BEEN PLACED"<<endl;
	else if(response=='M'||response=='m')
	cout<<"YOUR ORDER OF MOMOS HAS BEEN PLACED"<<endl;
	else if(response=='E'||response=='e')
	cout<<"YOUR ORDER OF BURGER HAS BEEN PLACED"<<endl;
	else if(response=='V'||response=='v')
	cout<<"YOUR ORDER OF VEGETABLE SPRING ROLLS HAS BEEN PLACED"<<endl;
	else
	 {
	    cout<<"PLEASE ORDER ACCORDING TO THE MENU MENTIONED ABOVE!"<<endl;
	    goto start;
     }
     return 0;
}
