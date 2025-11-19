// nested for loops reverse traingle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	for (int rows = 5; rows >=1; rows--)
	{
		for (int columns = 1; columns <= rows; columns++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}
