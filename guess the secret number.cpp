// guess the secret number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int guess;
	cout << "guess the secret number : ";
	cin >> guess;
	while (guess != 7)
	{
		cout << "wrong! try agin: ";
		cin >> guess;
	}
	cout << "you got it!";




}

