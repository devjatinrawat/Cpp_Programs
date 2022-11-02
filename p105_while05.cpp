#include<iostream>
#include<conio.h>
using namespace std;
void main()

{

int m,n;
cout<<"\nEnter the number whose reverse is required:=";
cin>>n;      //123
cout<<"\nReverse=";
while(n>0)
{
m=n%10;
cout<<m;       //321
n=n/10;
}
getch();
}
/* n=123
m=3
n=12
m=2
n=1
m=1
n=0
*/


