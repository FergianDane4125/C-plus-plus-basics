// set precision - 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	double pi = 3.14159265359;
	cout << setprecision(3) << pi << endl;
	cout << setprecision(5) << pi << endl;
	cout << setprecision(10) << pi << endl;
	return 0;


}
