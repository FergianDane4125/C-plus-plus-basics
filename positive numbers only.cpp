// positive numbers only.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int number;
	
	do
	{
		cout << "enter a positive number : ";
		cin >> number;
	} while (number <= 0);
		
	cout << "thank you" << endl;
	return 0;

}