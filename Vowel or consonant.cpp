// Vowel or consonant.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	char letter;
	cout << "enter a letter: ";
	cin >> letter;
	
	if (letter >= 'a' && letter <= 'z')
	{
		switch (letter)
		{
		case 'a':
			cout << "vowel";
			break;
		case 'e':
			cout << "vowel";
			break;
		case 'i':
			cout << "vowel";
			break;
		case 'o':
			cout << "vowel";
			break;
		case 'u':
			cout << "vowel";
			break;
		default:
			cout << "conosant";
		}
	}
	else
	{
		cout << "please print a letter (a-z)";
	}
	return 0;

}
