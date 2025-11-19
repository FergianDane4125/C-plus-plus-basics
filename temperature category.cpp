// temperature category.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int readings_count = 0;
	cout << "enter tempperature:\n";
	cin >> readings_count;
	if (readings_count < 15)
	{
		cout << "cold\n";
	}
	else if (readings_count >= 15 && readings_count <= 29)
	{
		cout << "warm\n";
	}
	else
	{
		cout << "hot\n";
	}
	return 0;
}