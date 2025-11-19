// calculate restaurant tips.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double bill, tip, total;
	int tip_percent;
	char again;

	do
	{

		do
		{
			cout << "Enter Bill amount (>0) : $";
			cin >> bill;
			if (bill <= 0)
			{
				cout << "Invalid bill amount. try again.";
			}
		} while (bill <= 0);

		do
		{
			cout << "Enter tip percent ( 10 , 15 , 20 ) : ";
			cin >> tip_percent;
			if (tip_percent != 10 && tip_percent != 15 && tip_percent && 20)
			{
				cout << "Invalid tip choice. Choose between ( 10 , 15 , 20 ) :";
			}


		} while (tip_percent != 10 && tip_percent != 15 && tip_percent != 20);
		tip = bill * tip_percent / 100;
		total = bill + tip;
		cout << fixed << setprecision(2);
		cout << "Tip : $" << tip << endl;
		cout << "Total : $" << total << endl;
		cout << "Do you want to calculate another bill? (y/n) : ";
		cin >> again;

	} while (again == 'y' || again == 'Y');
	cout << "Thank you so much! See you next time" << endl;
}
