// Sum of digits.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int sum_of_digits(int number);
int main()
{
	int user_number;
	cout << "enter number: ";
	cin >> user_number;

	int number_sum = sum_of_digits(user_number);
	cout << "sum of the digits is " << number_sum;
	
	return 0;

}

int sum_of_digits(int number)
{
	int sum = 0;
	while (number > 0)
	{
		
		int digit = number % 10;
		sum += digit;
		number = number / 10;
	
	}
	return sum;
}
