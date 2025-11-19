// 7-day step tracker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int daily_steps;
	int total = 0;
	for (int day = 1; day <= 7; day++)
	{
		cout << "how many steps did you don on day " << day <<"?:" << endl;
		cin >> daily_steps;
		total = total + daily_steps;
	}
	float average = total / 7;

	cout << "total steps for the week: " << total << endl;
	cout << "average steps for the week: " << average << endl;
}
