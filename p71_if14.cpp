
#include<math.h>
#include<iostream>

using namespace std;
int main()
{
int a,b,c,d;
float r1,r2;
cout<<"\nEnter value of a:=";
cin>>a;
cout<<"\nEnter value of b:=";
cin>>b;
cout<<"\nEnter value of c:=";
cin>>c;
d=b*b-4*a*c;
if(d>=0)
{
r1=(-b+sqrt(d))/(2*a);
r2=(-b-sqrt(d))/(2*a);
cout<<"\nRoot1="<<r1;
cout<<"\nRoot2="<<r2;
}
else
cout<<"\nRoots are imaginary";
return 0;
}
// Continue From here!
