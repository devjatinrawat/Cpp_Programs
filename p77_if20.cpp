#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a, b, c;
    cout << "\nEnter first value :=";
    cin >> a;
    cout << "\nEnter second value :=";
    cin >> b;
    cout << "\nEnter third value :=";
    cin >> c;
    if (a > b && a > c)
        cout << endl
             << a << " is largest";
    else if (b > a && b > c)
        cout << endl
             << b << " is largest";
    else if (c > a && c > b)
        cout << endl
             << c << " is largest";
    else if (a == b && a > c)
        cout << endl
             << "a,b are equal but larger than c";
    else if (b == c && b > a)
        cout << endl
             << "b,c are equal but larger than a";
    else if (c == a && c > b)
        cout << endl
             << "a,c are equal but larger than b";
    else if (a == b && a == c)
        cout << endl
             << "a,b,c are equal";
    return 0;
}
