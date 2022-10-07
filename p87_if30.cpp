#include<iostream>
using namespace std;
int main()
{
int choice,a,b,c;
cout<<"\n1. Addition";
cout<<"\n2. Subtraction";
cout<<"\n3. Multiplication";
cout<<"\n4. Division";
cout<<"\nEnter your choice=";
cin>>choice;
if(choice==1)
{
cout<<"\nEnter two values to be added";
cin>>a>>b;
c=a+b;
cout<<"\nSum="<<c;
}
else if(choice==2)
{
cout<<"\nEnter two values to be subtracted";
cin>>a>>b;
c=a-b;
cout<<"\nSubtraction="<<c;
}
else if(choice==3)
{
cout<<"\nEnter two values to be Multiplied";
cin>>a>>b;
c=a*b;
cout<<"\nMuliplication="<<c;
}
else if(choice==4)
{
cout<<"\nEnter two values to be divided";
cin>>a>>b;
c=a/b;
cout<<"\nDivision="<<c;
}
else
cout<<"\nWrong choice";
return 0;

}
