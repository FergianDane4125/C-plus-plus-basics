// currency converter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
float usd_to_cny(float usd);
float usd_to_zar(float usd);

int main()
{
	float usd;
	bool convert;
	cout << "Enter amount of usd then choose between (1 CNY ) or (2 ZAR) to convert." << endl;
	cout << "1 USD = 7.25 CNY" << endl;
	cout << "1 USD = 18.30 ZAR" << endl;
	cin >> usd;
	cout << "1 or 0: ";
	cin >> convert;

	if (convert == true)
	{
		cout << "Your USD has been converted to: " << usd_to_cny(usd) << " CNY" << endl;
		return 0;
	}
	else if (convert == false)
	{
		cout << "Your USD has been converted to: " << usd_to_zar(usd) << " ZAR" << endl;
		return 0;
	}
	else
	{
		cout << "an error has occured, please try again";
		return 0;
	}
}
float usd_to_cny(float usd)
{
	float convert = 0;
	convert = usd * 7.25;
	return convert;
}
float usd_to_zar(float usd)
{
	float convert = 0;
	convert = usd * 18.30;
	return convert;
}