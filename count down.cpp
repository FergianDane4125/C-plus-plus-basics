// count down.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int number;
	cout << "enter a number: ";
	cin >> number;
	for (int i = number; i >= 1; i--)
	{
		cout << i << " ";
	}
	return 0;
}
