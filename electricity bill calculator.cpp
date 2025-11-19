// electricity bill calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
float calculate_bill(int units);

int main()
{
   
	int unit;
	cout << "how many numbers of units was used? : ";
	cin >> unit;

	float total_bill = calculate_bill(unit);

	cout << "your bill total is " << total_bill;


}
float calculate_bill(int units)
{
	float rate;
	float total;
	if (units >= 0 && units <= 100)
	{
		rate = 1.50;
		total = units * rate;
		
		return total;
	}
	else if (units >= 101 && units <= 300)
	{
		rate = 2.00;
		total = units * rate;
		return total;
	}
	else if (units >= 301 && units <= 500)
	{
		rate = 3.00;
		total = units * rate;
		return total;
	}
	else if (units > 500)
	{
		rate = 5.00;
		total = units * rate;
		return total;
	}
	else
	{
		cout << "response not valid";
		return 0;
	}
}