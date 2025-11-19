// pointer example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int number;
	number = 5;

	int* pointer;
	pointer = &number;

	cout << "number = " << number << endl;
	cout << "&number = " << &number << endl;

	cout << "pointer = " << pointer << endl;
	cout << "*pointer = " << *pointer << endl;
	cout << "&pointer =" << &pointer << endl;

	return 0;


}
