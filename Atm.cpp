// Atm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 
int main()
{
	int pin;
	int counter = 1;
	
	do 
	{
		if (counter == 1)
		{
			cout << "enter ATM pin : \n";
			cin >> pin;
			counter = 2;
		}
		else
		{
			cout << "Wrong Pin, Try Again :  \n";
			cin >> pin;
		}
		
	} while (pin != 1234);


	cout << "access granted" << endl; 
	return 0;

}
