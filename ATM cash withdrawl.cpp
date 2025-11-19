// ATM cash withdrawl.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int balance;
	int amount; 
	cout << "what is your balance?" << endl;
	cin >> balance;
	cout << "what is the amount you are withdrawing" << endl; 
	cin >> amount;
	
	if (amount <= balance)
	{
		cout << "transaction succesful" << endl;
		return 0;
	}
	else
	{
		cout << "insuficient funds" << endl;
		return 0;
	}
	return 0;

}

