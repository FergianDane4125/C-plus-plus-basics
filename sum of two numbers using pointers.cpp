// sum of two numbers using pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
	
	int sum;
	sum = *pointer_1 + *pointer_2;
	
	cout << "sum: " << sum << endl;

	return 0;
}

