// changing the value via the pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int number;
	number = 25;
	int* first_pointer;
	first_pointer = &number;

	*first_pointer = 40;

	cout << "number: " << number << endl;
	cout << "first_pointer: " << *first_pointer << endl;
	cout << "first_pointer (addresS): " << first_pointer << endl;


}

