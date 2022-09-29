/*C++ Program to Find All Roots of a Quadratic Equation*/

#include<iostream>
#include<math.h>

using namespace std;
int main()
{

int a,b,c;
float root1,root2;
cout<<"\nEnter value of a=";
cin>>a;
cout<<"\nEnter value of b=";
cin>>b;
cout<<"\nEnter value of c=";
cin>>c;
root1=(-b+sqrt(b*b-4*a*c))/2*a;
root2=(-b-sqrt(b*b-4*a*c))/(2*a);
cout<<"\nRoot1="<<root1;
cout<<"\nRoot2="<<root2;
return 0;
}
