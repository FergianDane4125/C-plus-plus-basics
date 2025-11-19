// countdown timer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int number;
	cout << "enter a number : ";
	cin >> number;
	while (number >= 1)
	{
		cout << number << endl;
		number = number - 1;
	}
	return 0;

}
