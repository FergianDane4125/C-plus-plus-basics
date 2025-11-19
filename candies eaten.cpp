// candies eaten.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int total_candies = 3;
	int	candies_eaten = 0;

	while (candies_eaten < total_candies)
	{
		candies_eaten = candies_eaten + 1;
		cout << "candies eaten = " << candies_eaten << endl;
	}
	cout << "all candies eaten. total :" << candies_eaten << endl;
	return 0;

}


