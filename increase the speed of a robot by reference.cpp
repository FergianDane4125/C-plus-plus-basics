// increase the speed of a robot by reference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void boost_speed(int* speed);

int main()
{
	int current_speed = 25;

	boost_speed(&current_speed);

	cout << "Updated speed = " << current_speed << endl;

	return 0;
}
void boost_speed(int* speed)
{
	if (*speed < 40)
	{
		*speed += 20;
	}
	else
	{
		*speed += 0;
	}
}