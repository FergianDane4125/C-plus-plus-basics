// maximum of two numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int largest_number(int number_one, int number_two);
void display();

int main()
{
	int user_input_a;
	int user_input_b;

	display();

	cout << "enter 2 numbers : ";
	cin >> user_input_a;
	cin >> user_input_b;
	
	int largest = largest_number(user_input_a,user_input_b);
	cout << "the largest of the two is: " << largest;
	
	return 0;
}

int largest_number(int number_one, int number_two)
{
	int result;
	if (number_one > number_two)
	{
		result = number_one;
	}
	else
	{
		result = number_two;
	}
	return result;
}

void display()
{
	cout << "welcome to my app"<< endl;
}