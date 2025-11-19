// calendar grid (month view).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	const int total_weeks = 5;
	const int month_days = 31;
	const int week_days = 7;
	int current = 1;
	for (int weeks = 1; weeks <= total_weeks; weeks++)
	{
		for (int days = 1; days <= week_days; days++)
		{
			if (current <= month_days)
			{
				cout << current << "\t";
				current++;
			}
		}
		cout << "\n";
	}
	return 0;
}
