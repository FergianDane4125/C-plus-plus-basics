// bus capacity compliance monitor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int stops;
	int capacity;
	int people = 0;
	int max_people = 0;
	int violations=0;
	int safe_streak=0;
	int safe=0;
	cout << "bus capacity : ";
	cin >> capacity;
	cout << "enter number of stops : ";
	cin >> stops;
	cout << "enter the passanger change at each stop:" << endl;
	for (int i = 1; i <= stops; i++)
	{
		int change;
		cout << "Stop " << i << ": ";
		cin >> change;

		people = people + change;


		if (people < 0)
		{
			people = 0;
		}

		if (people > max_people)
		{
			max_people = people;
		}
	
		if (people <= capacity)
		{
			safe = safe + 1;
			safe_streak = safe_streak + 1;
		}
		else
		{
			violations = violations + 1;
			safe_streak = 0;
		}

	}
	cout << "=== Trip Summary ===" << endl;
	cout << "Maximum occupancy: " << max_people << endl;
	cout << "Number of violations: " << violations << endl;
	cout << "Longest Safe Streak:" << safe_streak << endl;
	return 0;
}
