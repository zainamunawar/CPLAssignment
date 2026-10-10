#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"please enter a character"<<endl;
	cin>>ch;
	if(ch=='A'||ch=='A'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
    cout<<"VOWEL"<<endl;
    //using outer if
	if(ch!='A'||ch!='A'||ch!='E'||ch!='e'||ch!='I'||ch!='i'||ch!='O'||ch!='o'||ch!='U'||ch!='u')
    cout<<"CONSONANT"<<endl;
    return 0;
  
}
