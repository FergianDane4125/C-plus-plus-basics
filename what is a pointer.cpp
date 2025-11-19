// what is a pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int number;
	number = 25;
	int* first_pointer;
	first_pointer = &number;

	cout << "value of number" << number << endl << endl;

	cout << "address of number (&number): " << &number << endl << endl;

	cout << "pointer first_pointer stores: " << first_pointer << endl << endl;
	cout << "value at adress (*first pointer): " << *first_pointer << endl;

	return 0;
}
