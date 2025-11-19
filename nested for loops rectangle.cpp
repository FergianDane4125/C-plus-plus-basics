// nested for loops rectangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
		for (int rows = 1; rows <= 3; rows++)
		{
			for (int columns = 1; columns <= 5; columns++)
			{
				cout << "*";
			}
			cout << "\n";
		}
	return 0;
}
