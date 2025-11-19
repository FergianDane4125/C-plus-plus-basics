// print 1 N.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int number;
	cout << "enter number: ";
	cin >> number;
	
	for (int i = 1; i <= number; i++)
	{
		cout << i << " ";
	}
	cout << "\n";
	return 0;
}
