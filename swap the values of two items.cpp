// swap the values of two items.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void swap_numbers(int* first, int* second);
int main()
{
	int first_number = 20;
	int second_number = 10;

	swap_numbers(&first_number, &second_number);

	cout << "x = " << first_number << " y = " << second_number << endl;
	return 0;
}
void swap_numbers(int* first, int* second)
{
	*first = 10;
	*second = 20;
}