

//Comma operator
#include<iostream>
using namespace std;

int main()
{
int a,b,c;	//Variable declaration statement
c=(a=5,b=4,a+b);
cout<<endl<<"a="<<a;
cout<<endl<<"b="<<b;
cout<<endl<<"c="<<c;
return 0;
}

