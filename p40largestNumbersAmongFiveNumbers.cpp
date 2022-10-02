#include<iostream>
using namespace std;

int main()
{
int a,b,c,d,e;
cout<<"\nEnter value of a=";
cin>>a;
cout<<"\nEnter value of b=";
cin>>b;
cout<<"\nEnter value of c=";
cin>>c;
cout<<"\n enter value of d=";
cin>>d;
e=a>b&&a>c&&a>d?a:b>a&&b>c&&b>d?b:c>a&&c>b&&c>d?c:d;
cout<<"\nLargest value="<<e;
return 0;
}
