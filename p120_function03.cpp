

#include<iostream>
#include<conio.h>

using namespace std;

void interest(); //Function Prototype or function declaration
void main()
{
interest(); //Function calling statement
getch();
}
void interest()
{
float p,r,t,i;
cout<<"\nEnter principal:=";
cin>>p;
cout<<"\nEnter rate:=";
cin>>r;
cout<<"\nEnter time:=";
cin>>t;
i=p*r*t/100;
cout<<"\nInterest="<<i;
}
