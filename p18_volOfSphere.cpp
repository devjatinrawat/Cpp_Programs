#include<iostream>

#include<math.h>

using namespace std;

int main()
{

float r,volume;
cout<<"\n enter value of r=";
cin>>r;
volume=1.33*3.14*pow(r,3);
cout<<"\n r="<<r;
cout<<"\n volume of sphere ="<<volume;
return 0;
}