// rock-paper-scissors(best-of-n)with replay.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	char u_move;
	int rounds;
	char play_again;
	char comp_move;
	int user_wins = 0;
	int comp_wins = 0;
	srand(time(0));


	do
	{
		cout << "Enter amount of rounds. Must be odd (3/5/7) : ";
		cin >> rounds;
		while (rounds < 1 || rounds % 2 == 0)
		{
			cout << "invalid amount of rounds\n";
			cin >> rounds;
		}
		int wins_needed = (rounds / 2) + 1;
		while (user_wins < wins_needed && comp_wins < wins_needed)
		{
			cout << "whats your move? (r/p/s) : ";
			cin >> u_move;
			while (u_move != 'r' && u_move != 'p' && u_move != 's')
			{
				cout << "invalid. enter a rock paper scissor letter. (r/p/s) : ";
				cin >> u_move;
			}
			int roll = rand() % 3;
			if (roll == 0)
			{
				comp_move = 'r';
			}
			else if (roll == 1)
			{
				comp_move = 'p';
			}
			else
			{
				comp_move = 's';
			}
			cout << "computer: " << comp_move << "\n";
			if (u_move == comp_move)
			{
				cout << "tie.\n";
			}
			else if (
				(u_move == 'r' && comp_move == 's') ||
				(u_move == 'p' && comp_move == 'r') ||
				(u_move == 's' && comp_move == 'p')
				)
			{
				cout << "you win this round\n";
				user_wins = user_wins + 1;
			}
			else
			{
				cout << "computer wins this round\n";
				comp_wins = comp_wins + 1;
			}
			cout << "score you-comp: " << user_wins << "-" << comp_wins << "\n";
		}
		if (user_wins > comp_wins)
		{
			cout << "\nyou win the match\n";
		}
		else
		{
			cout << "\ncomputer wins the match\n";
		}
		cout << "play again? (y/n): ";
		cin >> play_again;
		while (play_again != 'y' && play_again != 'n')
		{
			cout << "enter y or n: ";
			cin >> play_again;
		}
	} while (play_again =='y'|| play_again == 'Y');
	return 0;
}