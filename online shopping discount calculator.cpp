// online shopping discount calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

float apply_discount(float price);
int main()
{
	float price;
	cout << "what is your price? : ";
	cin >> price;
	
	float final = apply_discount(price);

	cout << "your final price is: $" << final << endl;

	return 0;
}
float apply_discount(float price)
{
	float total = 0;
	if (price <= 100)
	{
		total += price;
		return total;
	}
	else if (price >=101 && price <=500)
	{
		total = price - (price * 10 / 100);
		return total;
	}
	else if (price >= 501 && price <= 1000)
	{
		total = price - (price * 20 / 100);
		return total;
	}
	else
	{
		total = price - (price * 30 / 100);
		return total;
	}
}
