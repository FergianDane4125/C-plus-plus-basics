// print value, address, and defference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int number;
	number = 25;

	int* pointer1 = nullptr;
	pointer1 = &number;

	if (pointer1 != nullptr)
	{
		cout << *pointer1;
	}
	else
	{
		cout << "pointer is empty" << endl;
	}

	cout << "value: " << number << endl;
	cout << "(&number): " << &number << endl;
	cout << "pointer (stores): " << pointer1 << endl;
	cout << "value via *pointer1: " << *pointer1 << endl;

	return 0;
}
