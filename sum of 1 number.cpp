// sum of 1 number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int limit;
	cout << "enter limit :";
	cin >> limit;
	int total = 0;
	for (int i = 1; i <= limit; i++)
	{
		cout << "loop value " << i << " + " << total;
		total = total + i;
		cout << " = " << total << endl;
	}
	cout << "sum = " << total << "\n";
	return 0;
}