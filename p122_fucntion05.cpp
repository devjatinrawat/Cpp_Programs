


#include<iostream>
#include<conio.h>

using namespace std;

float interest(float p,float r,float t) //Formal arguments
{
return p*r*t/100;
}
void main()
{
float pr,ra,ti,in;
cout<<"\nEnter principal: ";
cin>>pr;
cout<<"\nEnter rate: ";
cin>>ra;
cout<<"\nEnter time: ";
cin>>ti;
in=interest(pr,ra,ti); //Actual arguments
cout<<"\nInterest="<<in;
getch();
}
