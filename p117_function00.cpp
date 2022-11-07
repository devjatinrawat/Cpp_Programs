
#include<iostream>
#include<conio.h>

using namespace std;

//function without arguments and without return value
//Function is defined as a named block of code
void sum() //Called function
{
int a,b,c;
cout<<"\nEnter two values:=";
cin>>a>>b ;
c=a+b;
cout<<"\nsum="<<c;
}
void main() //calling function
{
    
sum();
getch();
}
