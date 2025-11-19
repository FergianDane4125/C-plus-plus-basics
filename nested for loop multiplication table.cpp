// nested for loop multiplication table.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	for (int number = 1; number <= 5; number++)
	{
		for (int multiply = 1; multiply <= 10; multiply++)
		{
			cout << number*multiply << "\t";
		}
	}

	return 0;
}