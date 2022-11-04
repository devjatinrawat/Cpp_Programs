#include<iostream>
#include<conio.h>
#include<math.h>
#include<process.h>

using namespace std;
void main()
{
long n;
float m;
while(1)
{
cout<<"\nEnter a value(Negative value to exit)=";
cin>>n;
if(n<0)
{
exit(0);
}
m=sqrt(n);
cout<<"\nSquare root of "<<n<<"="<<m;
}
getch();
}
