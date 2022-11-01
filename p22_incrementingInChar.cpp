

#include<iostream>
#include<conio.h>

using namespace std;
//++ increment operator
//-- decrement operator
int main()
{

char ch='A';
int b=100;
cout<<'\n'<<ch;
ch++;
cout<<'\n'<<ch;

cout<<'\n'<<(int)ch;

cout<<'\n'<<(char)b;

return 0;
}
//ASCII code : American Standard Code for Information Interchange
//A=65,B=66,...........
//a=97,b=98,...........
//0=48,1=49,.....9


// Another code Added

#include<iostream>

using namespace std;

int main(){

int a = 10;
int b ;
 
b = ++a;
// here a value must first be incremented and then assigned to b. a becomes 11 and b is 11.   
cout<<a<<" "<<b<<" "<<endl;
  
 return 0;
  
}
