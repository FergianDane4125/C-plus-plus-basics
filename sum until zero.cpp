// sum until zero.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int number;
	int sum = 0;
	do
	{
		cout << "enter a number (0 to stop) : \n";
		cin >> number;
		sum = sum + number;
	} while (number != 0);


	cout << "your total is " << sum << endl;
	return 0;

}
