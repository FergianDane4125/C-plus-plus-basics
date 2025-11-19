// Student grading with switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

	int score;
	cout << "What is your score? (0-100)" << endl;
	cin >> score;

	if (score < 0 || score > 100)
	{
		cout << "invalid score.  try again \n";
		return 0;
	}

	switch (score / 10 )
	{
	case 10:
	case 9:
		{
			cout << "Your grade is an A" << endl;
			break; 
		}
	case 8:
		{
		cout << "Your grade is a B" << endl;
		break;
		}
	case 7:
		{
		cout << "Your grade is a C" << endl;
		break;
		}
	case 6:
		{
		cout << "Your grade is a D" << endl;
		break;
		}
	
	default:
		{
		cout << "Your grade is a F" << endl;
		break;
		}

	}

}