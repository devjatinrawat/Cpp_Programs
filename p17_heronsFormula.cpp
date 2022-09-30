#include<math.h>
#include<iostream>
using namespace std;
int main()
{
float a,b,c,s,area;
cout<<"\n enter the value of a&b&c=";
cin>>a>>b>>c;
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
cout<<"\n area="<<area;
return 0;
}