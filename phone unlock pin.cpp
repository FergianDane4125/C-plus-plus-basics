// phone unlock pin.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

	int pin = 1234;
	int user_pin;
	char again;
	do
	{
		cout << "Phone locked. Enter 4-digit PIN" << endl;

		do
		{
			cout << "PIN : ";
			cin >> user_pin;
			if (user_pin != pin)
			{
				cout << "Wrong pin. Try again" << endl;
				cin >> user_pin;
			}
		} while (user_pin != pin);
		cout << "Phone unlocked" << endl;
		cout << "Lock phone again (y/n)? : ";
			cin >> again;
	} while (again == 'y' || again == 'Y');

}