

#include<iostream>
using namespace std;
//Arithmetic operators
int main()
{

int a,b,c;
cout<<"\nEnter value of a=";
cin>>a;
cout<<"\nEnter value of b=";
cin>>b;
c=a+b;
cout<<"\na+b="<<c;
c=a-b;
cout<<endl<<a<<"-"<<b<<"="<<c;
c=a*b;
cout<<endl<<a<<"*"<<b<<"="<<c;
c=a/b;
cout<<endl<<a<<"/"<<b<<"="<<c;
c=a%b;	//Modulus operator %
cout<<endl<<a<<"%"<<b<<"="<<c;
return 0;
}
