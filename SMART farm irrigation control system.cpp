// SMART farm irrigation control system.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void control_irrigation(int* moisture, int sunlight, int hours_since_last_irrigation, int* water_limit);

int main()
{
	int soil_moisture = 35;
	int sun_intensity = 75;
	int hours_passed = 5;
	int daily_water_limit = 100;

	control_irrigation(&soil_moisture, sun_intensity, hours_passed, &daily_water_limit);





	cout << "final moisture = " << soil_moisture << endl;
	cout << "remamining water limit = " << daily_water_limit << endl << endl;

	return 0;
}
void control_irrigation(int* moisture, int sunlight, int hours_since_last_irrigation, int* water_limit)
{
	if (*water_limit < 20)
	{
		cout << "water limit too low, irrigation skipped.\n";
	}
	else
	{
		if(*moisture < 25 && sunlight > 70 && hours_since_last_irrigation > 8)
		{
			*moisture = *moisture + (*moisture * 0.25);
			*water_limit -= 20;
			cout << "emergency irrigation activated" << endl;
		}
		else if (*moisture >= 25 && *moisture <= 40 && sunlight > 50)
		{
			*moisture = *moisture + (*moisture * 0.15);
			*water_limit -= 10;
		}
		else if (*moisture >= 40 && *moisture <= 60)
		{
			*moisture = *moisture + (*moisture * 0.5);
			*water_limit -= 5;
		}
		else if (*moisture > 60 && sunlight < 40)
		{
			*moisture = *moisture - (*moisture * 0.10);
			cout << "evaporation is low" << endl;
		}
		else if (*moisture > 80)
		{
			*moisture = 80;
			cout << "warning: over-watering prevented\n";
		}
	}
}
