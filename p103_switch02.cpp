#include<iostream>
#include<conio.h>

using namespace std;

void main()
{

int choice;
int a=10;
cout<<"\n1. Case 1";
cout<<"\n2. Case 2";
cout<<"\nEnter your choice:-";
cin>>choice;
switch(choice+a)
{
case 11:
		cout<<"\nCase 1 selected";
		break;

case 11+1:
		cout<<"\nCase 2 selected";
		break;
default:
	cout<<"Wrong choice";
}
getch();
}




