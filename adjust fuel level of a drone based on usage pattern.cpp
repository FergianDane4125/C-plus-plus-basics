// adjust fuel level of a drone based on usage pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void update_fuel(int* fuel, int wind_speed);

int main()
{
	int drone_fuel = 100;
	int wind = 90;
	update_fuel(&drone_fuel,wind);

	cout << "remainging fuel = " << drone_fuel << endl;

	return 0;
}
void update_fuel(int* fuel, int wind_speed)
{
	if (wind_speed < 20)
	{
		*fuel = *fuel - (*fuel * 0.05);
	}
	else if (wind_speed >= 20 && wind_speed <= 40)
	{
		*fuel = *fuel - (*fuel * 0.10);
	}
	else
	{
		*fuel = *fuel - (*fuel * 0.15);
	}
}