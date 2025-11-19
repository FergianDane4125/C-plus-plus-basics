// pointer-based mini calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int number_1;
	int number_2;

	int* pointer_1;
	pointer_1 = &number_1;

	int* pointer_2;
	pointer_2 = &number_2;
	int result;
	char operation;

	cout << "enter two numbers: ";
	cin >> number_1;
	cin >> number_2;
	cout << "enter an operator ( +, -, *, /): ";
	cin >> operation;

	

	if (operation == '+')
	{
		result = *pointer_1 + *pointer_2;
		cout << "result: " << result << endl << endl;
	}
	else if (operation == '-')
	{
		result = *pointer_1 - *pointer_2;
		cout << "result: " << result << endl << endl;
	}
	else if (operation == '*')
	{
		result = *pointer_1 * *pointer_2;
		cout << "result: " << result << endl << endl;
	}
	else if (operation == '/')
	{
		result = *pointer_1 / *pointer_2;
		cout << "result: " << result << endl << endl;
	}
	else
	{
		cout << "please enter an opperation"<< endl << endl;
	}
	
	return 0;
}
