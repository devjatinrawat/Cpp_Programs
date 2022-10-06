#include<iostream>
using namespace std;

int main()
{
int year;
cout<<"\nEnter a year:=";
cin>>year;
if(year%4==0||(year%100==0&&year%400==0))
cout<<"\nIt is a leap year";
else
cout<<"\nIt is not a leap year";
return 0;
}
