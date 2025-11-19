// the null character 'slash0'.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string word = "CAT";
	int count = 0;

	while (word[count] != '\0')
	{
		cout << "letter: " << word[count] << endl;
		count++;
	}

	cout << "end of the word reached!" << endl;

	return 0;

}