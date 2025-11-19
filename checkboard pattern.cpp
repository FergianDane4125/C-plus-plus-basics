// checkboard pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

	const int fixed_row = 8;
	const int fixed_column = 8;
	
	for (int row = 1; row <= fixed_row; row++)
	{
		for (int columns = 1; columns <= fixed_column; columns++)
		{
			if ((row + columns) % 2 == 0)
			{
				cout << "#";
			}
			else
			{
				cout << ".";
			}
		}
		cout << "\n";
	}
	return 0;

}
