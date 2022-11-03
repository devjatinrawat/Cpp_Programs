#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
int m,n,s;
cout<<"\nEnter a number:=";
cin>>n;
s=0;
while(n>0)
{
m=n%10;
s=s+m;
n=n/10;
}
cout<<"\nSum of digits="<<s;
getch();
}
/*
s=0
n=123
m=3
s=0+3=3
n=12
m=2
s=3+2=5
n=1
m=1
s=5+1=6
n=0
*/

// start From Here!
