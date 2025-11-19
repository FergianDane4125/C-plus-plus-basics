// Traffic light switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	char light;
	int emergency, estimation;

	cout << "What light color? (R = red, Y = Yellow, G = Green) \n"; 
	cin >> light; 

	switch (light)
	{

	case 'G':
	case 'g':
		{	
			cout << "Go \n";
			break;
		}
	case 'Y':
	case 'y':
		{
			cout << "Is it safe to stop now? (1 = Yes 2 = No) : " << endl; 
			cin >> estimation; 
			if (estimation == 1)
			{
				cout << "STOP NOW" << endl;
			}
			else if(estimation == 2)
			{
				cout << "Proceed with caution" << endl;
			}
			else
			{
				cout << "Invalid input" << endl;
			}
			break; 
		}
	case 'R':
	case 'r':
		{
			cout << "use emergency vehichle? (1 = Yes 2 = No) " << endl;
			cin >> emergency; 
			if (emergency == 1)
			{
				cout << "Allow emergency vehichle" << endl;
			}
			else if (emergency == 2)
			{
				cout << "Stop " << endl;
			}
			else 
			{
				cout << "Invalid input" << endl;
			}
			break;
		}
	default: 
		cout << "Invalid input. Try again." << endl;
	}
	return 0;
}