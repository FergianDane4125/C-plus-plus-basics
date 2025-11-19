// Build a speed typing test program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int count_correct_characters(string sentence_to_type, string user_inputs_sentence, int sentence_length);

float calculate_accuracy_percent(int correct_characters, int total_characters);

void show_typing_results(string user_inputs_sentence, int correct_characters, int total_characters, float accuracy_percent, float typing_time_seconds);

void show_debug_info(const float* time_pointer, const float* accuracy_pointer);

void start_typing_test();

int main()
{
	char user;


	do
	{
		start_typing_test();
		cout << "Do you want to try again? (Y=Yes, N=N0): ";
		cin >> user;
	} 
	while (user == 'y' || user == 'Y');
	
	cout << "Play again next time!";
	return 0;

}


void start_typing_test()
{
	
	string sentence_to_type = "I walked home from school.";
	string sentence_to_check = "I walked hoom from school.";
	string user_inputs_sentence;
	string clear_input;
	

	int error = 0;
	int sentence_length = 0;

	cout << "Welcome to the Speed Typing Program!" << endl << endl;
	cout << "Press enter to start";
	getline(cin, clear_input);
	getline(cin, clear_input);

	cout << sentence_to_type << endl << endl;
	time_t start_time = time(0);

	getline(cin, user_inputs_sentence);

	time_t end_time = time(0);


	time_t total_time;
	total_time = end_time - start_time;

	while (sentence_to_type[sentence_length] != '\0')
	{
		sentence_length++;
	}

	cout << "sentence length: " << sentence_length << endl;
	cout << "time difference: " << total_time << endl;
	cout << "error count: " << error << endl;
	
	

}