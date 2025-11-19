//Sqrt

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int number;
	double square_root;
	double square;


	cout << "enter the number" << endl;
	cin >> number;

	square_root = sqrt(number); 
	square = number * number; 

	cout << " Number :" << number << endl;
	cout << " The square root of " << number << " is :" << square_root << endl;
	cout << " The square of " << number << "is :" << square << endl;

	return 0;
}