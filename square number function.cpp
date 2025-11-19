// square number function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int square_number(int user_number);

int main()
{
    int user_input;
    cout << "enter an integer: ";
    cin >> user_input;
    int squared_value = square_number(user_input);
    
    cout << user_input << " squared is: " << squared_value << endl;
    return 0;
}

int square_number(int user_number)
{
    int squared_result = user_number * user_number;
    return squared_result;
}
