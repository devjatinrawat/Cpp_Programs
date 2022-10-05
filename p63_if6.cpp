#include<iostream>
using namespace std;

int main()
{
int a,b,c;
cout<<"\nEnter first number:=";
cin>>a;
cout<<"\nEnter second number:=";
cin>>b;
cout<<"\nEnter third number:=";
cin>>c;
if(a>b&&a>c)
cout<<endl<<a<<" is largest";
if(b>a&&b>c)
cout<<endl<<b<<" is largest";
if(c>a&&c>b)
cout<<endl<<c<<" is largest";
if(a==b&&a==c)
cout<<endl<<"values are same";
return 0;
}
