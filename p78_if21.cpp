#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
int a;
cout<<"\nEnter a value:=";
cin>>a;
if(a>=0)
{
if(a<=10)
cout<<"\n value lie between 0&10";
else
cout<<"\n value is larger than 10";
}
else
cout<<"\n value is smaller than 0";
return 0;
}


