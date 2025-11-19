// chocolate factory production display.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int user_row;
	int user_columns;
	cout << "Enter number of rows: ";
	cin >> user_row;
	cout << "Enter number of columns: ";
	cin >> user_columns;
	int dark_count = 0;
	int milk_count = 0;
	int white_count = 0;
	int total = 0;
	for (int row = 1; row <= user_row; row++)
	{
		for (int columns = 1; columns <= user_columns; columns++)
		{
			if (columns % 2 == 0)
			{
				cout << "D ";
				dark_count ++;
			}
			else if (row % 2 == 0)
			{
				cout << "M ";
				milk_count ++;
			}
			else
			{
				cout << "W ";
				white_count ++;
			}
		}
		cout << endl;
	}
	total = total + dark_count + milk_count + white_count;
	cout << endl;
	cout << "--- Summary ---" << endl;
	cout << "Dark Chocaltes: " << dark_count << endl;
	cout << "Milk Choclates: " << milk_count << endl;
	cout << "White Choclates: " << white_count << endl;
	cout << "Total Chocolates: " << total << endl;
	return 0;
}
