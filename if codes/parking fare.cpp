#include<iostream>
using namespace std;
int main()
{   
  int hours;
  cout<<"For how many hours you want to park your vehicle here?"<<endl;
  cin>>hours;
  if(hours==1&&hours==2)
  cout<<"You have to pay 50 Rs"<<endl;
  if(hours>1&&hours<=5)
  cout<<"you have to pay 100 Rs"<<endl;
  if(hours>5)
  cout<<"You have to pay 200 Rs"<<endl;
  return 0;
}
