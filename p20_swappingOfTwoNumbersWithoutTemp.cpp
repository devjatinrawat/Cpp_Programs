//Program to swap/interchange two numbers
#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"\nEnter value of a=";
cin>>a;  //10
cout<<"\nEnter value of b=";
cin>>b;  //5
a=a+b;  //15
b=a-b;  //10
a=a-b;  //5
cout<<"swapped values are=\n"<<a<<"\n"<<b;
return 0;
}
