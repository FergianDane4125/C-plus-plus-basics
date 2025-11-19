// track the highest temperature of the day.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void update_highest(int* highest, int new_reading);

int main()
{
	int highest_temp = 32;
	int new_reading = 36;

	update_highest(&highest_temp, new_reading);


	cout << "highest temperature = " << highest_temp << endl;

	return 0;
}
void update_highest(int* highest, int new_reading)
{
	if (new_reading > *highest)
	{
		*highest = new_reading;
	}
	else
	{

	}
}