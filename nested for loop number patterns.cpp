// nested for loop number patterns.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	for (int row = 1; row <=4; row++)
	{
		for (int numbers = 1; numbers <= row; numbers++)
		{
			cout << numbers;
		}
		cout <<endl;
	}
	return 0;


}