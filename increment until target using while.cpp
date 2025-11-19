// increment until target using while.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int count;
	count = 0;

	int* pointer = nullptr;
	pointer = &count;
	int value;
	cout << "enter a value (0>=10): ";
	cin >> value;

	while (*pointer < value)
	{
		*pointer += 1;
		cout << "count now: " << *pointer << endl;
	}
	cout << "reached target: " << *pointer << endl;

	return 0;
}
