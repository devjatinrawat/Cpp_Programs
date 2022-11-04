#include<iostream>
#include<conio.h>

using namespace std;
void main()
{
int n,m,f,sum,t,i;
cout<<"\nEnter the number which you want to check:=";
cin>>n;
sum=0;
t=n;
while(n>0)
{
m=n%10;
sum=sum+m*m*m;
n=n/10;
}
if(t==sum)
cout<<"\nNumber is armstrong number";
else
cout<<"\nNumber is not a armstrong number";
getch();
}
