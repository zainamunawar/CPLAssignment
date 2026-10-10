#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"=======CHOOSE A CHARACTER WISELY======="<<endl;
	cout<<"If you enter character T this will display the area of Triangle\nIf you enter character S this will dispaly the area of Square\nIf you will enter character C it will display the area of circle"<<endl;
	start:
	cout<<"enter character"<<endl;
	cin>>ch;
	if(ch=='T'||ch=='t')
	{
		float area_of_triangle;
		int breathe,height;
		cout<<"enter height"<<endl;
		cin>>height;
		cout<<"enter breathe"<<endl;
		cin>>breathe;
		area_of_triangle=(height*breathe)*1/2;
		cout<<"THE AREA OF TRIANGLE="<<area_of_triangle<<endl;
	}
	else if(ch=='S'||ch=='s')
	{
		 float area_of_square;
		 int length, width;
		 cout<<"enter length"<<endl;
		 cin>>length;
		 cout<<"enter width"<<endl;
		 cin>>width;
		 area_of_square=length*width;
		 cout<<"THE AREA OF SQUARE="<<area_of_square<<endl;
	}
	else if(ch=='C'||ch=='c')
	{
		int r;
		float pi=3.14159;
		float area_of_circle;
		cout<<"enter r="<<endl;
		cin>>r;
		area_of_circle=pi*r*r;
		cout<<"THE AREA OF CIRCLE IS="<<area_of_circle;
	}
	else
	  {
		    cout<<"please enter correctly"<<endl;
		    goto start;
      }

      
      return 0;
}

