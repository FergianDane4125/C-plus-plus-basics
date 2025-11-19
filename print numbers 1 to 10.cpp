// print numbers 1 to 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int number = 1;
	 
	cout << "enter a number" << endl;
	while (number <= 10)
	{
		cout << number << endl;
		number = number + 1;
	}
	return 0;
}
