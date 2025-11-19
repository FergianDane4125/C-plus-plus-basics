// triangle of stars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int row = 1;
	while ( row<= 4)
	{
		int  stars= 1;
		while ( stars <= row)
		{
			cout <<  "*";
			 stars =  stars+ 1;
		}
		cout << endl;
		row++;
	}
	return 0;
}