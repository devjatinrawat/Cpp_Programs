

#include<iostream>
#include<conio.h>

using namespace std;
//++ increment operator
//-- decrement operator
int main()
{

int a=10;
cout<<'\n'<<a;
++a;    
/* 
Here first the value is incremented and then printed .
a = 11
*/  
cout<<endl<<a;	//endl stands for endline ,11
a++;		//here first the value is used , 11 and then incremented 
cout<<endl<<a; // 12 incremented 
a--;  // 12 is used first then dec
cout<<"\n"<<a;  // 11
--a; // first dec means 11-1 = 10
cout<<'\n'<<a; // 10

return 0;
}


