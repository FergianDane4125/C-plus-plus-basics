// practice question - 3 digit room number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	for (int floor = 1; floor <= 3; floor++)
	{
		for (int room = 1; room <= 4; room++)
		{
			for (int columns = 1; columns <= 3; columns++)
			{
				cout << " room " << floor << room << columns << endl;
			}
		}cout << endl;
	}
	return 0;
}
