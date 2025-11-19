// Reverse a number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int number;
	int reverse=0;
	int last_digit;
	cout << "Enter an integer: ";
	cin >> number;
	while (number != 0)
	{
		last_digit =  number % 10;
		//reverse =  reverse * 10 + last_digit;
		//number /= 10;
		number = (number - last_digit) / 10;
		cout << last_digit;
	}
	

	return 0;
}

