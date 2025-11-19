// nested for loop rooms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	for (int floor = 1; floor <= 3; floor++)
	{
		for (int room = 1; room <= 4; room++)
		{
			cout << "floor " << floor << " - room " << room << endl;


		}
	}
	cout << endl;
	return 0;
}
