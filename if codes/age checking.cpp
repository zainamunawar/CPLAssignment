#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"what's your age?"<<endl;
	cin>>age;
	if(age>=18)
	cout<<"you are Elligible for vote"<<endl;
	//using outer if because what if user enter age less than 18.
	if(age>!18)
	cout<<"NOT ELLIGIBLE"<<endl;
	return 0;
}
