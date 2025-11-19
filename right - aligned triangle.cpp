// right - aligned triangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	const int height = 5;
	for (int rows = 1; rows <= height; rows++)
	{
		for (int space = 5; space >= rows; space--)
		{
			cout << " ";
		}
		for (int columns = 1; columns <= rows; columns++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}