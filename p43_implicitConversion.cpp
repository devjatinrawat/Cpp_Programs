#include<iostream>
using namespace std;

//Implicit conversion      / automatic conversion
int main()
{
int a,b,c;
float d,e;
a=10;
b=3;
c=a/b;
cout<<"\nc="<<c;
d=a/b;
cout<<"\nd="<<d;
e=a/d;
cout<<"\ne="<<e;
c=a/d;
cout<<"\nc="<<c;
return 0;
}
