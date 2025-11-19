// movie ticket revenue analyzer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

float calculate_gross(int adults, int children);
float calculate_tax(float gross);
float calculate_net(float gross, float tax);
int main()
{
	int children, adults;
	cout << "how many children tickets were sold?: ";
	cin >> children;
	cout << "how many adult tickets were sold?: ";
	cin >> adults;

	int gross = calculate_gross(adults, children);
	float tax = calculate_tax(gross);
	float net = calculate_net(gross, tax); 

	cout << "----------------------------" << endl;
	cout << "gross = $" << gross<< endl;
	cout << "tax = $" << tax << endl;
	cout << "net = $" << net << endl;
	cout << "----------------------------" << endl;
	return 0;
}
float calculate_gross(int adults, int children)
{
	int gross = (adults * 12) + (children * 8);
	return gross;
}
float calculate_tax(float gross)
{
	float tax = 0.20 * gross;
	return tax;
}
float calculate_net(float gross, float tax)
{
	float net = gross - tax;
	return net;
}