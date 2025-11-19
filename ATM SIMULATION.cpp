// ATM SIMULATION.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
  
	double balance = 1000.0;
	double amount;
	int user_choice;
	do
	{
		cout << "======ATM======" << endl;
		cout << " " << endl;
		cout << "[1] Deposit Money" << endl;
		cout << " " << endl;
		cout << "[2] Withdraw Money " << endl;
		cout << " " << endl;
		cout << "[3] Check Balance " << endl;
		cout << " " << endl;
		cout << "[4] Exit " << endl;
		cout << " " << endl;
		cout << "Enter Your Choice : \n";
		cin >> user_choice;
		cout << " " << endl;
	
		switch (user_choice)
		{
			case 1:
				{
					cout << "How much do you want to deposit?\n";
					cin >> amount;
					if (amount > 0)
					{
						balance = balance + amount;
						cout << "Your current balance is " << balance << endl << endl;
					}
					else
					{
						cout << "ERROR\n";
					}
				}
			break;
			case 2:
				{
					cout << "How much do you want to withdraw?\n";
					cin >> amount;
					if (amount <=0)
					{ 
						cout << "ERROR \n";
					}
					else if (amount > balance)
					{
						cout << "insufficienct funds\n";
					}
					else
					{
						balance = balance - amount;
						cout << "Your current balance is " << balance << endl << endl;
					}
				}
			break;
			case 3:
				{
					cout << "Your current balance is " << balance << endl << endl;
				}
				break;
			case 4:
				{
					cout << "Bye Bye\n";
				}
			break;
			default:
				{
					cout << "Invalid input\n";
				}
			break;
		}

	} while (user_choice != 4);

	cout << "Thank you for banking with us\n";
	return 0;
}