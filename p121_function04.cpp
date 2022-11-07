#include<iostream>
#include<conio.h>

using namespace std;

void largest()
{
int a,b;
cout<<"\nEnter the values:";
cin>>a>>b;
if(a>b)
cout<<endl<<"A is Largest"<<endl<<a;
else
cout<<endl<<"B is largest"<<endl<<b;
}
void main()

{largest();
largest();
getch();
}
