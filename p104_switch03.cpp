#include<iostream>
#include<conio.h>

using namespace std;

void main()
{
char choice;
cout<<"\na) Case A";
cout<<"\nb) Case B";
cout<<"\nEnter your choice:-";
cin>>choice;
switch(choice)
{
case 'a':
case 'A':
		cout<<"\nCase A selected";
		break;

case 'b':
case 'B':
		cout<<"\nCase B selected";
		break;
default:
	cout<<"Wrong choice";
}
getch();
}




















































