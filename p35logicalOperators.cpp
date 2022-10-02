

#include<iostream>
using namespace std;

//Logical operators
int main()
{
int a,b;
cout<<"\nEnter value of a=";
cin>>a;     //5
cout<<"\nEnter value of b=";
cin>>b;        //9
cout<<"\na>0 && b>0 ="<<(a>0 && b>0);
cout<<"\na>0 && b<0 ="<<(a>0 && b<0);
cout<<"\na>0 || b>0 ="<<(a>0 || b<0);
cout<<"\na<0 || b<0 ="<<(a<0 || b<0);
cout<<"\n!(a>0 && b>0) ="<<!(a>0 && b>0);
cout<<"\n!(a<0)="<<!(a<0);
return 0;
}

/*
& ampersand
| pipes
*/
