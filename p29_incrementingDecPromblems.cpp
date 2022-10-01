
#include<iostream>
#include<conio.h>

using namespace std;
int main()
{

int a=10,b=6,c=9;
cout<<endl<<a++ + ++b<<","<<c-- - b--<<","<<b++ - --a;
//	    9 + 7	     9	-  7	    6 - 9
cout<<endl<<b-- +c<<","<<++c + a<<","<<a++ - ++c;
//           7  +10        10 + 11     10  -    9
return 0;
}
/*
a	b	c
9	7	8
10	6       9
	7
11              10
*/
