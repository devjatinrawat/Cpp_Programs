#include<iostream>
#include<conio.h>

using namespace std;

//Function with arguments and with return value
int sum(int a,int b)
{
int c;
c=a+b;
return c;
}
void main()
{
int s;
s=sum(10,20);
cout<<"\nsum="<<s;
cout<<"\nsum="<<sum(5,4);
/*int d=sum(3,4)*3+sum(5,4);
cout<<"\nd="<<d;*/
getch();
}
