

//Fibonacci series 0,1,1,2,3,5,8,......
#include<iostream>
#include<conio.h>

using namespace std;

void main()
{
int f1,f2,f3,n,i;
f1=0;
f2=1;
cout<<"\nHow many terms are required:=";
cin>>n;
cout<<"\n"<<f1<<","<<f2;
i=3;
while(i<=n)
{
f3=f1+f2;           //1,2,3,5
cout<<","<<f3;
f1=f2;             //1,1,2,3
f2=f3;             //1,2,3,5
i++;
}
getch();
}
