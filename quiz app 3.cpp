// quiz app 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    bool yellow = true;
    bool red = true;
    string answer1;
    string answer2;
    string answer3;

    cout << "what color is a banana? ";
    cin >> answer1;

    if (answer1 == "yellow")
    {
        cout << "Correct!! go to next" << endl << endl;
    
        cout << "what color is an apple? ";
        cin >> answer2;

        if (answer2 == "red")
        {
            cout << "Correct!! go to next" << endl << endl;

            cout << "what color is a pear?";
            cin >> answer3;
            
            if (answer3 == "green")
            {
                cout << "YOU WIN!" <<endl;
            }
            else
            {
                cout << "Game Over!!";
            }
        }
        else 
        {
            cout << "Game Over!!";
        }
    }
    else
    {
        cout << "Game Over!!";
    }

    return 0;
   
}