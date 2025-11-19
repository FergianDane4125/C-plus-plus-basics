// count total average rainfall.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int daily_rainfall;
	int total_rainfall = 0;
	double average;
	for (int days = 1; days <= 7; days++)
	{
		cout << "enter rainfall for day " << days << ": ";
		cin >> daily_rainfall;
		total_rainfall += daily_rainfall;
	}
	average = total_rainfall / 7;
	cout << "total rainfall: " << total_rainfall << "mm" << endl;
	cout << "average rainfall: " << setprecision(4) <<average << "mm" << endl;
	return 0;

}
