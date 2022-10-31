//Nested switch statement//
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
char ch;
int choice;
int a,b,c;
cout<<"\n1. Calculations";
cout<<"\n2. Comparisons";
cout<<"\nEnter your choice:-";
cin>>choice;
switch(choice)
{
case 1:
	cout<<"\na)  Addition";
	cout<<"\nb)  Subtraction";
	cout<<"\nEnter your choice:=";
	cin>>ch;
	switch(ch)
	{
	case 'a':
		cout<<"\nEnter two values:=";
		cin>>a>>b;
		c=a+b;
		cout<<"\na+b="<<c;
		break;
	case 'b':
		cout<<"\nEnter two values:=";
		cin>>a>>b;
		c=a-b;
		cout<<"\na-b="<<c;
		break;
	default:
		cout<<"\nWrong Choice..!";
	break;
	}
break;
case 2:
	cout<<"\na)  Largest among two numbers:=";
	cout<<"\nb)  Largest among three numbers:=";
	cout<<"\nEnter your choice:=";
	cin>>ch;
	switch(ch)
	{
	case 'a':
		cout<<"\nEnter two values:=";
		cin>>a>>b;
		if(a>b)
		cout<<endl<<a<<" is largest";
		else
		cout<<endl<<b<<" is largest";
		break;



	case 'b':
		cout<<"\nEnter three values:=";
		cin>>a>>b>>c;
		if(a>b && a>c)
		cout<<endl<<a<<" is largest";
		else if(b>a&&b>c)
		cout<<endl<<b<<" is largest";
		else
		cout<<endl<<c<<" is largest";
		break;
	default:
		cout<<"\nWrong Choice..!";
		break;
	}
break;
default:
	cout<<"Wrong choice";
}
getch();

return 0;
}




