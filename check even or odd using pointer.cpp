// check even or odd using pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int number_1;

	int* pointer_1;
	pointer_1 = &number_1;

	cout << "enter a number: ";
	cin >> number_1;

	if (*pointer_1 == 0)
	{
	
		cout << "enter a number that is not 0";
	}
	else if (*pointer_1 % 2 == 0)
	{
		cout << *pointer_1 << " is even"<< endl;
	}
	else
	{
		cout << *pointer_1 << " is odd" << endl;
	}
}
