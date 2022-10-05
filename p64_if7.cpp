#include<iostream>
using namespace std;
int main()
{
int a,b,c,d;
cout<<"\nEnter first number:=";
cin>>a;	//1
cout<<"\nEnter second number:=";
cin>>b; //13
cout<<"\nEnter third number:=";
cin>>c; //6
d=a;   //1
if(b>d)
d=b;
if(c>d)
d=c;
cout<<endl<<d<<" is largest";
return 0;
}
