
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
int a=10,b=7;
cout<<endl<<++b<<","<<a--;  //Cascading of insertion operator
cout<<endl<<--a<<","<<b++;
cout<<endl<<a<<","<<b;
return 0;
}

/*
output
*/

/*
Evaluation
a   b
10  7
9   8
8   9
*/

