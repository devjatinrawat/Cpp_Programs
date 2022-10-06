// if else if ladder statement
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int d;
	cout << "\nEnter a value between 1 and 7=";
	cin >> d;
	if (d == 1)
		cout << "\nSunday";
	else if (d == 2)
		cout << "\nMonday";
	else if (d == 3)
		cout << "\nTuesday";
	else if (d == 4)
		cout << "\nWednesday";
	else if (d == 5)
		cout << "\nThursday";
	else if (d == 6)
		cout << "\nFriday";
	else if (d == 7)
		cout << "\nSaturday";
	else
		cout << "\nWrong choice";
	return 0;
}
