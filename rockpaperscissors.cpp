// rock-paper-scissors

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int main()
{
    srand(time(0));
    string user_choice;
    cout << "Let's play rock paper scissors!" << endl;
    cout << "What's your play?" << endl;
    cout << "rock, paper, scissors" << endl;
    cin >> user_choice;

    int random_number = rand() % 3;
    string computer_choice;
    if (random_number == 0)
    {
        computer_choice = "rock";
    }
    else if (random_number == 1)
    {
        computer_choice = "paper";
    }
    else
    {
        computer_choice = "scissors";
    }

    cout << "You chose : " << user_choice << endl;

    if (user_choice == "rock" || user_choice == "paper" || user_choice == "scissors")
    {
        cout << "Computer chose : " << computer_choice << endl;
        if (user_choice == computer_choice)
        {
            cout << "It's a tie!";
        }
        else
        {
            if (user_choice == "rock")
            {
                if (computer_choice == "scissors")
                {
                    cout << "YOU WIN!" << endl << endl << endl;
                }
                else
                {
                    cout << "YOU LOSE.." << endl << endl << endl;
                }
            }
            else if (user_choice == "paper")
            {
                if (computer_choice == "scissors")
                {
                    cout << "YOU WIN!" << endl << endl << endl;
                }
                else
                {
                    cout << "YOU LOSE.." << endl << endl << endl;
                }
            }
            else if (user_choice == "scissors")
            {
                if (computer_choice == "paper")
                {
                    cout << "YOU WON!" << endl << endl << endl;
                }
                else
                {
                    cout << "YOU LOSE.." << endl << endl << endl;
                }
            }


        }
    }
    else
    {
        cout << "INVALID INPUT. Please type rock, paper, OR scissors" << endl << endl << endl;

    }
 
    return 0;
}