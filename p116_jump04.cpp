

//Backward goto statement
#include<iostream>
#include<conio.h>

using namespace std;

void main()
{
start:
int a,b,c;
char choice;
cout<<"\nEnter two values: ";
cin>>a>>b;
c=a+b;
cout<<"\nSum="<<c;
cout<<"\nDo you want to repeat the program(y/n)";
cin>>choice;
if(choice=='y'||choice=='Y')
goto start;
getch();
}
