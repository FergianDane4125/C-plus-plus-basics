// compare two variables using pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int number_1;
	number_1 = 6;

	int number_2;
	number_2 = 7;

	int* pointer_1;
	pointer_1 = &number_1;

	int* pointer_2;
	pointer_2 = &number_2;

	if (*pointer_1 < *pointer_2)
	{
		cout << *pointer_2 << " is greater";
	}
	else if (*pointer_1 > *pointer_2)
	{
		cout << *pointer_1 << " is greater";
	}
	else
	{
		cout << *pointer_1 << " and " <<* pointer_2 << " are equal";
	}
}