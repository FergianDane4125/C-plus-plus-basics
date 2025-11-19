// even or odd and positive or negative.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int check_even_or_odd(int number);
int check_positive_or_negative(int number);

int main()
{
	int user_input;

	cout << "enter an integer : ";
	cin >> user_input;

	
	if (check_even_or_odd(user_input)==true)
	{
		cout << "Even" << endl;
	}
	else
	{
		cout << "Odd" << endl;
	}

	if (check_positive_or_negative(user_input)==true)
	{
		cout << "positive" << endl;
	}
	else
	{
		cout << "negative" << endl;
	}
	return 0;
}
int check_even_or_odd(int number)
{
	if (number % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int check_positive_or_negative(int number)
{
	if (number >= 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}