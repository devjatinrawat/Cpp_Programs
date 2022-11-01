
// Another Code 

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
int i = 1;
int j = 2;
int k;

k = i + j + i++ + j++ + ++i + ++j;
/* Move From L To R 

i is 1 +
j is 2 + 
use 1 
increment 1 to 2 + 
+ use 2 increment j to 3
+ use 3 + use 3 

*/  
cout<<i<<" "<<j<<" "<<k<<" ";
return 0;
}




#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
int a=10;
cout<<endl<<a++ + ++a;
cout<<endl<<a;
cout<<endl<<a-- - --a;
cout<<endl<<a;
cout<<endl<<a++ - a++;
cout<<endl<<a;
return 0;
}
