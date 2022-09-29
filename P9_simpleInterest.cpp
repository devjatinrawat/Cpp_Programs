

/* Program To Cal Simple Interest */
#include<iostream>

using namespace std;
int main()
{

float p,r,t,i;
cout<<"\nEnter Principal=";
cin>>p;
cout<<"\nEnter rate=";
cin>>r;
cout<<"\nEnter time=";
cin>>t;
i=p*r*t/100;
cout<<"\nInterest="<<i;
return 0;
}
