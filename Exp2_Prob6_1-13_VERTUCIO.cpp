#include <iostream>
#include <string>
#include <conio.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	bool coaster = false;
	do
	{
		int n1, n3 = 0;
		cout << "Enter a Number: ";
		cin >> n1;

		if (n1 == 0)
		{
			cout << "Thank you!" << endl;
			break;
		}
		else
		{
			for (int n2 = 1; n2 <= n1; n2++)
			{
				n3 = n3 + n2;
			}
			cout << "The sum of all whole numbers from 1 to " << n1 << " is " << n3 << "." << endl;
		}
	} 
	while (!coaster);

	_getch();
	return 0;
}
