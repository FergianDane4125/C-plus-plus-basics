// printing numbers 1 to 10 modified.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int number = 1;
	int user;

	cout << "enter a number" << endl;
	cin >> user;

	while (number <= user)
	{
		cout << number << endl;
		number = number + 1;
	}
	return 0;
}