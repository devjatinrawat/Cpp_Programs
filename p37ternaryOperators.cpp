
#include<iostream>
using namespace std;
//Ternary operator or conditional operator  ?:
int main()
{
int a=15,b=5,c;
c=a>b?a:b;
cout<<"\nc="<<c;
c=a<b?a+b:a-b;
cout<<"\nc="<<c;
return 0;
}

/*
condition?expression1:expression2
if condition is true, expression1 will be evaluated
if condition is false, expression2 will be evaluated
*/

