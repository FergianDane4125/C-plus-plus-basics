// restaurant tip helper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	double bill, tip, total;
	int tip_percent;
	char again;

	do
	{
		cout << "Enter Bill amount (>0) : $";

		do
		{
			cin >> bill;

		} while (bill <= 0);

		cout << "Enter tip percent ( 10 , 15 , 20 ) : ";
		do
		{
			cin >> tip_percent;

		} while (tip_percent != 10 && tip_percent != 15 && tip_percent != 20 );
		
		if (tip_percent == 10)
		{
			total = bill * 0.10;
			cout << "total : $" << total << endl;
		}
		else if (tip_percent == 15)
		{
			total = bill * 0.15;
			cout << "total : $" << total << endl;
		}
		else if (tip_percent == 20)
		{
			total = bill * 0.20;
			cout << "total : $" << total << endl;
		}
		else
		{
			cout << "not a valid tip percentage. fix bill";
			return 0;
		}

		cout << "Do you want to calculate another bill? (y/n) : ";
		cin >> again;

	} while (again == 'y' || again == 'Y');

}

