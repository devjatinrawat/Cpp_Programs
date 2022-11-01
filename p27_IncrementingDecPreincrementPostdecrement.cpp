
// Adding Small Piece of Code 

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
int a= 1;  
cout<<endl<<a++ + ++a;


return 0;
}

// Another Code 
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
int a=10;
cout<<endl<<a++ + ++a;
//          10 + 12
cout<<endl<<a-- - --a;
//          12 - 10
cout<<endl<<a++ + a;
//	    10 + 11
cout<<endl<<a + ++a;
//	   12 + 12
cout<<endl<<a-- -a;
//	    12 -11
cout<<endl<<a - --a;
//	   10 -	10
return 0;
}
