#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
	int gallons;
	cout << "Number of Gallons used: "; cin >> gallons;

	float WaterDemandCharge = 35, ConsumptionCharge = 1.10, TotalCharge = WaterDemandCharge + (ConsumptionCharge * gallons), TotalLateCharge = TotalCharge + 20, AmountPaid;
	
	cout << "Total Bill: " << TotalCharge << endl;
	cout << "Amount of Payment: "; 
	cin >> AmountPaid;

	if (AmountPaid < TotalCharge)
	{
		cout << "Your total bill is: " << TotalLateCharge << ", due to additional late charge fee of P20." "\n" "Please pay the specified amount: "; 
		cin >> AmountPaid;
		
		if (AmountPaid < TotalLateCharge)
		{
			cout << "Insufficient payment. Please pay enough amount." << endl;
		}
		else
		{
			cout << "Payment accepted! You have a change of " << AmountPaid - TotalLateCharge << "." << endl;
		}
	}
	else
	{
		cout << "Payment accepted! Your total bill is " << TotalCharge << " with a change of " << AmountPaid - TotalCharge << "." << endl;
	}

	cout << "Thank You!";

	_getch();
	return 0;
}
