#include<iostream>
using namespace std;

int main()
{

float per;
cout<<"\nEnter your percentage:=";
cin>>per;
if(per>=80)
cout<<"\nExcellent";
if(per>=60 && per<80)
cout<<"\nVery Good";
if(per>=35 && per<60)
cout<<"\nWork hard";
if(per<35)
cout<<"\nPoor";

return 0;
}
