//Preprocessor directive
#include<iostream>
#define  PI 3.141
using namespace std;

void hello()
{
cout<<"\nthis is india";
}
#pragma startup hello
int main()
{
#ifdef PI
cout<<"\nPI defined";
#else
cout<<"\nPI not defined";
#endif
return 0;
}
