// swap two numbers using pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

	cout << "before swapping: number_1 = " << number_1 << endl;
	cout << "                number_2 = " << number_2 << endl << endl;

	*pointer_1 = 7;
	*pointer_2 = 6;

	cout << "after swapping: number_1 = " << number_1 << endl;
	cout << "                number_2 = " << number_2 << endl << endl;


}
