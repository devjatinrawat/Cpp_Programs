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
case 65:		//A
case 97:                //a
		cout<<"\nCase A selected";
		break;

case 66:
case 98:
		cout<<"\nCase B selected";
		break;
default:
	cout<<"Wrong choice";
}
getch();
}

//ASCII Code (American Standard Code for information interchange
/*
A=65              a=97         0=48
B=66              b=98         1=49*/
