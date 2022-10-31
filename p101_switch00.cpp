#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
int choice,a,b,c;
cout<<"\n1. Addition";
cout<<"\n2. Subtraction";
cout<<"\n3. Multiplication";
cout<<"\n4. Division";
cout<<"\nEnter your choice:-";
cin>>choice;
cout<<"\nEnter two numbers:-";
cin>>a>>b;
switch(choice)
{
case 1:
	c=a+b;
	cout<<"sum="<<c;
	break;
case 2:
	c=a-b;
	cout<<"Subtraction="<<c;
	break;
case 3:
	c=a*b;
	cout<<"Multiplication="<<c;
	break;
case 4:
	c=a/b;
	cout<<"Division="<<c;
	break;
default:
	cout<<"Wrong choice";
}
getch();

return 0;
}
