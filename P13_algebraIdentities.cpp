#include<iostream>

#include<math.h>

using namespace std;

int main()
{

int a,b,c;
cout<<"\n enter value of a=";
cin>>a;
cout<<"\n enter value of b=";
cin>>b;
c=pow(a,3)+pow(b,3)+3*a*b*(a+b);
cout<<"\n a="<<a;
cout<<"\n b="<<b;
cout<<"\n c="<<c;
return 0;
}