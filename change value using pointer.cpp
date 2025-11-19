// change value using pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int number;
	number = 15;

	int* pointer;
	pointer = &number;

	*pointer = 100;

	cout << "new value of variable: " << number << endl;

}
