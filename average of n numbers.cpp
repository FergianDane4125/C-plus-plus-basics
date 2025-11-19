// average of n numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int count;
	int number;
	int total = 0;
	double average;
	cin >> count;
	for (int i = 1; i <= count; i++)
	{
		cin >> number;
		total = total + number;
	}
	average = (double)total / count;
	cout << "average = " << average << "\n";
		return 0;
}
