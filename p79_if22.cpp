#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
       int a, b, c;
       cout << "\nEnter first value:=";
       cin >> a;
       cout << "\nEnter second value:=";
       cin >> b;
       cout << "\nEnter third value:=";
       cin >> c;
       if (a > b)
       {
              if (a > c)
                     cout << endl
                          << a << " is largest";
              else
                     cout << endl
                          << c << " is largest";
       }
       else
       {
              if (b > c)
                     cout << endl
                          << b << " is largest";
              else
                     cout << endl
                          << c << " is largest";
       }
       return 0;
}
