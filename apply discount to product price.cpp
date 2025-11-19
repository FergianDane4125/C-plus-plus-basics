// apply discount to product price.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void apply_discount(double* price);

int main()
{
	double product_price = 450.0;

	apply_discount(&product_price);

	cout << "final price = " << product_price << endl;

	return 0;
}
void apply_discount(double* price)
{
	*price = *price - (*price * 0.10);


}