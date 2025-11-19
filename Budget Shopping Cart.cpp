// Budget Shopping Cart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

	int fixed_budget, item_price;
	int total_spent = 0;
	int items = 0;
	bool valid_price;
	cout << "what is your budget?\n";
	cin >> fixed_budget;

	while(fixed_budget < 0)
	{
		cout << "budget cannot be negative. Re-enter : ";
		cin >> fixed_budget;
	}
	do
	{
		cout << "enter item price (0 to checkout) : ";
		cin >> item_price;

		while (valid_price = false)
		{
			if (item_price == 0)
			{
				valid_price = true;
			}
			else 
			{
				if (item_price < 0)
				{
					cout << "price cannot be negative. Re-enter : ";
					cin >> item_price;
				}
				else
				{
					bool remaining = fixed_budget - total_spent;
					if (item_price > remaining)
					{
						cout << "over budget. remaining is " << remaining << ". Re-enter a smaller price (or 0 to checkout) : ";
						cin >> item_price;
					}
					else
					{
						valid_price = true;
					}
				}
			}
			
		}
		if (item_price > 0)
		{
			total_spent = total_spent + item_price;
			items = items + 1;
			bool remaining_after = fixed_budget - total_spent;
			cout << items << " added. remaining : " << (fixed_budget - total_spent) << "\n";
			if (remaining_after == 0)
			{
				cout << "you have reached your budget exactly. enter 0 to checkout \n";
			}
		}
	} while (item_price != 0);
		{
			cout << "\n items purchased: " << items << "\n";
			cout << "total spent : " << total_spent << "\n";
			cout << "remaining: " << (fixed_budget - total_spent) << "\n";
		}
}