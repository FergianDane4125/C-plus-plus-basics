// Parking lot map + revenue counter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int rate;
	const int user_row = 3;
	const int user_column = 3;
	int rates, ev_rates, handicap_rates, spots;
	int row1, column1, row2, column2,row3,column3,row4,column4;
	int total_revenue = 0;
	int h_count =0, ev_count = 0, regular=0;
	char spot_type;
	cout << "enter rates ( regualr ): ";
	cin >> rates;
	cout << "enter the rates ( electric vehichle ): ";
	cin >> ev_rates;
	cout << "enter the rates ( handicap ): ";
	cin >> handicap_rates;
	cout << "enter 4 occupied spots (row column) :" << endl;
	cin >> row1 >> column1;
	cin >> row2 >> column2;
	cin >> row3 >> column3;
	cin >> row4 >> column4;

	cout << "Legend : E=EV   H=Handicap   X=Occupied   .=Free\n";

	for (int row = 1; row <= 3; row++)
	{
		for (int column = 1; column <= 3; column++)
		{
			if (column == 3)
			{
				spot_type = 'e';
				ev_count = ev_count + 1;
			}
			else if (row == 1)
			{
				spot_type = 'h';
				h_count = h_count +1;
			}
			else
			{
				spot_type = '.';
				regular = regular + 1;
			}

			bool occupied = (row == row1 && column == column1 ||
				row == row2 && column == column2 ||
				row == row3 && column == column3 ||
				row == row4 && column == column4);
			if (occupied)
			{
				cout << "X ";

				if (spot_type == 'e')
				{
					ev_count++;
					total_revenue = total_revenue + ev_rates;
				}
				else if (spot_type == 'h')
				{
					total_revenue = total_revenue + handicap_rates;
				}
				else
				{
					total_revenue = total_revenue + rates;
				}
			}
			else
			{
				cout << spot_type << " ";
			}
		}
		cout << "\n";
	}
	cout << "EV Spots: " << ev_count << endl;
	cout << "Handicap: " << h_count << endl;
	cout << "Regualr: " << regular << endl;
	cout << "Revenue: $" << total_revenue << endl;



	return 0;
}
