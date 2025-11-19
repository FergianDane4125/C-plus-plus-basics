// sum of first 5 numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

	int number = 1;
	int sum = 0;

	while (number <= 5)
	{
		sum = sum + number;
		number = number + 1;
	}
	cout << "sum = " << sum << endl;
	return 0;
}
