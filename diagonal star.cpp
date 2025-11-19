// diagonal star.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	for (int row = 1; row <= 5; row++)
	{
		for (int columns = 1; columns<=5; columns++)
		{
			if (row == columns || row + columns == 6)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << "\n";
	}
	
	return 0;
}
