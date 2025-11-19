// Day number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int day_number;
	cout << "Enter day number (1=Mon, 2=Tue, 3=Wed) : ";
	cin >> day_number; 
	switch (day_number)
	{
		case 1:
		cout << "Monday\n";
			break;
		case 2: 
			cout << "Tuesday\n";
			break;
		case 3: 
			cout << "Wednesday\n";
			break;
		default:
			cout << "Invalid input number\n";

	}


	return 0;
}