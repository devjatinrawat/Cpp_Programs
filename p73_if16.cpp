#include<iostream>
using namespace std;

int main()
{
float c,f,choice;
cout<<"\n1. Celcius to Farenheit";
cout<<"\n2. Farenheit to Celcius";
cout<<"\nEnter your choice";
cin>>choice;
if(choice==1)
{
cout<<"\nEnter temperature in centigrade:=";
cin>>c;
f=1.8*c+32;
cout<<"\nTemperature in farenheit:="<<f;
}
else
{
cout<<"\nEnter temperature in farenheit:=";
cin>>f;
c=(f-32)/1.8;
cout<<"\nTemperature in centigrade:="<<c;
}
return 0;
}



