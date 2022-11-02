

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

int a=10;
cout<<endl<<++a;   // 11
cout<<endl<<a++;    //11
cout<<endl<<a;      //12
cout<<endl<<--a;    //11
cout<<endl<<a--;  // 11
cout<<endl<<a ;   //10
return 0;
}


// Adding One More Code 
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
int a=10;    // 10  12
cout<<endl<<a++ + ++a;
            //12  10
cout<<endl<<a-- - --a;
//11       //10 + 11
cout<<endl<<a++ + a;
//11       //   12 + 12
cout<<endl<<a + ++a;

// ++ is given more priority than 12 + 12  
            //24 - 23
cout<<endl<<a-- -a;
//23          //  22   22
cout<<endl<<a - --a;

return 0;
}
