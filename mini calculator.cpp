// mini calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
  
	int first_number, second_number, result;
	char operation;
	cout << "Enter first number: ";
	cin >> first_number;

	cout << "Enter operation (+, -, *, /): ";
	cin >> operation;

	cout << "Enter second number: ";
	cin >> second_number;


	switch (operation)
	{
	case '+' :
		result = first_number + second_number;
		cout << "Result: " << result << endl;
		break;
	case '-':
		result = first_number - second_number;
		cout << "Result: " << result << endl;
		break;
	case '*': 
		result = first_number * second_number;
		cout << "Result: " << result << endl;
		break;
	case '/':
		{	
		if (second_number == 0)
		{
			cout << "Error: Number cannot be divided by 0 \n";
		}
		else 
		{ 
			result = first_number / second_number;
			cout << "Result: " << result << endl;
		}
			break;
		}
	default: 
		cout << "Invalid Operator" << endl;

	}
	return 0;
}
