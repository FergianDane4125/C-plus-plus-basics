// address display.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int number_1;
	number_1 = 5;

	int number_2;
	number_2 = 9;

	int* pointer_1;
	pointer_1 = &number_1;

	int* pointer_2;
	pointer_2 = &number_2;

	cout << "value of number_1: " << number_1 << endl;
	cout << "address of pointer_1 (&1): " << &number_1 << endl;
	cout << "pointer_1 stores: " << pointer_1 << endl;
	cout << "value at address (*pointer_1): " << *pointer_1 << endl << endl;

	cout << "value of number_2: " << number_2 << endl;
	cout << "address of pointer_2 (&2): " << &number_2 << endl;
	cout << "pointer_2 stores: " << pointer_2 << endl;
	cout << "value at address (*pointer_2): " << *pointer_2 << endl << endl;

	return 0;
}
