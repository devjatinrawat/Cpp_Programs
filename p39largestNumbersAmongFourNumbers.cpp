
#include<iostream>
using namespace std;

int main()
{
int a,b,c,d;
cout<<"\nEnter value of a=";
cin>>a;
cout<<"\nEnter value of b=";
cin>>b;
cout<<"\nEnter value of c=";
cin>>c;
d=a>b&&a>c?a:(b>a&&b>c?b:c);
cout<<"\nLargest value="<<d;
return 0;
}
