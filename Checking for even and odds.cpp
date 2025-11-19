// Checking for even and odds.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
  
	int even=0;
	int odd=0;
	int user;
	for (int number = 1; number <= 10; number++)
	{
		cout << "enter number " << number << ": ";
		cin >> user;

		if (user % 2 == 0)
		{
			even = even + 1;
		}
		else
		{
			odd = odd + 1;
		}
	}
	cout << " total even numbers: " << even << endl;
	cout << " total odd numbers: " << odd << endl;
	return 0;
}