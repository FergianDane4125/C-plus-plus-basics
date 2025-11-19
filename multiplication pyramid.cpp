// multiplication pyramid.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	const int max_number = 5;
	for (int number = 1; number <= max_number; number++)
	{
		for (int multiply = 1; multiply <= number; multiply++)
		{
			cout << number * multiply << " ";

		}
		cout << "\n";
	}
	return 0;
}