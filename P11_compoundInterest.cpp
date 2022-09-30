#include<iostream>

#include<math.h>

using namespace std;

/*
Multiline comment
Program to find compound interest

*/
//Single line comment

int main() //Here program starts
{

float p,r,t,i;
cout<<"\nEnter Principle=";
cin>>p;
cout<<"\nEnter rate=";
cin>>r;
cout<<"\nEnter time:=";
cin>>t;                              //pow(2,3)
i=p*pow(1+r/100,t)-p;
cout<<"\nPrinciple="<<p;
cout<<"\nRate="<<r;
cout<<"\nTime="<<t;
cout<<"\nCompound Interest="<<i;
return 0;

}//Here program ends