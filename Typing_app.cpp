// Typing_app.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word = "I walked home from school";
	int word_length = 0;
	int count = 0;
	int correct = 0;
	int incorrect = 0;
	string word_2;
	cout << word << endl;
	cout << "Enter : ";
	time_t start_time = time(0);
	getline(cin, word_2);

	time_t end_time = time(0);

	time_t total_time;
	total_time = end_time - start_time;

	// std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	while (word[count] != '\0')
	{

		word_length = word_length + 1;
		count++;
	}

	count = 0;

	while (word[count] != '\0')
	{
		if (word[count] == word_2[count])
		{
			correct++;
		}
		count++;

	}

	count = 0;

	while (word[count] == '\0')
	{
		if (word[count] != word_2[count])
		{
			incorrect++;
		}
		count++;


	}
	
	

	cout << "word length: "  << word_length << endl;
	cout << "Your sentence: " << word_2 << endl;
	cout << "correct: " << correct << endl;
	cout << "incorrect: " << incorrect << endl;
	cout << "total_time: " << total_time << endl;

	return 0;
}
