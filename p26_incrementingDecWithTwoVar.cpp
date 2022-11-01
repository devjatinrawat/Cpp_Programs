
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

// Adding One More code 

#include<iostream>

using namespace std;

int main(){

int a = 10;
int b ;
  
b = a++;
// first a value assigned to b and then incremented , which makes it b =10 , a = 11
cout<<a<<" "<<b<<" "<<endl;
return 0;
}
