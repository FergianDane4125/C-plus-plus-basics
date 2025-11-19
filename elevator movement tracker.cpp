// elevator movement tracker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int building_min = -2;
int building_max = 10;
int invalid_moves = 0;
int min_floor = 0, max_floor = 0;
int main()
{
	char command;
	int current_floor = 0;
	while (current_floor >= -2 || current_floor <= 10)
	{
		cout << "choose direction (U = UP, D = DOWN, S = stationary, Q = to exit): ";
		cin >> command;
	
		switch (command)
		{
		case 'U':
			if (current_floor >= building_max)
			{
				cout << "you cannot go up any further" << endl;
				invalid_moves = invalid_moves + 1;
			}
			else if(current_floor >=-2 && current_floor < 10)
			{
				cout << "going up" << endl;
				current_floor = current_floor + 1;
				cout << "current floor " << current_floor << endl;
			}
			else
			{
				cout << "invlaid move";
				cout << "current floor " << current_floor << endl;
				invalid_moves = invalid_moves + 1;
			}
			break;
		case 'D':
			if (current_floor <= building_min)
			{
				cout << "you cannot go down any further" << endl;
				invalid_moves = invalid_moves + 1;
			}
			else if(current_floor > -2 && current_floor <=10)
			{
				cout << "going down" << endl;
				current_floor = current_floor - 1;
				cout << "current floor " << current_floor << endl;
			}
			else
			{
				cout << "invlaid move" << endl;
				cout << "current floor " << current_floor << endl;
				invalid_moves = invalid_moves + 1;
			}
			break;
		case 'S':
			cout << "current floor " << current_floor << endl;
			break;
		case 'Q':
			return 0;
			break;

		default:
			invalid_moves = invalid_moves + 1;
			cout << "invalid moves counter: " << invalid_moves << endl;
		}
	}
	return 0;
}
