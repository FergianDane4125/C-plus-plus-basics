// guess the random number game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
	int user = 0;
	int computer ;
	
	computer = rand() % 10 + 1;


	while (user != computer)
	{
		cout << "what is the number? ";
		cin >> user;
		if (user > computer)
		{
			cout << "try a lower number";
		}
		else if (user < computer)
		{
			cout << "try a larger number";
		}
		else
			cout << "correct!";
	}
	
}


