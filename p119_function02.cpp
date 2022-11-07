

#include<iostream>
#include<conio.h>

using namespace std;

void larger();
void main()
{
larger();
getch();
}
void larger()
{
int a,b;
cout<<"\n enter value of a=";
cin>>a;
cout<<"\n enter value of b=";
cin>>b;
if(a>b)
cout<<"a is larger";
if(b>a)
cout<<"b is larger";
if (a==b)
cout<<"a & b are equal";
}

