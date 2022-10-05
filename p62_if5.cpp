#include<iostream>
using namespace std;

int main()
{
int a,b,c;
cout<<"\nEnter first number:=";
cin>>a; //15
cout<<"\nEnter second number:=";
cin>>b; //10
c=a;   //15
if(b>c)
c=b;  //10
cout<<endl<<c<<" is largest";
return 0;
}
