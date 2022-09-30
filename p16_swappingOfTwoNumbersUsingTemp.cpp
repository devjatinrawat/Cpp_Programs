//Program to swap/interchange two numbers
#include<iostream>

using namespace std;

int main()
{
int a,b,t;
cout<<"\nEnter value of a=";
cin>>a;  //10
cout<<"\nEnter value of b=";
cin>>b;  //5
t=a;     //10
a=b;     //5
b=t;     //10
cout<<"swapped values are=\n"<<a<<"\n"<<b;

return 0;
}
