// even numbers up to 20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

	int number = 2;
	while (number <= 20)
	{
		cout << number << endl;
		number = number + 2;
	}
	return 0;
}