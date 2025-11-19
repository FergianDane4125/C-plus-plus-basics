// digital locker security code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
bool is_strong_code(int code);

int main()
{
    int code;
    cout << "enter a 4 digit code: ";
    cin >> code;

    bool strong_or_weak = is_strong_code(code);
    cout << strong_or_weak;

    if (strong_or_weak == true)
    {
        cout << endl;
        cout << "your code is strong"<< endl;
    }
    else
    {
        cout << endl;
        cout << "your code is weak" << endl;
    }

    return 0;
}
bool is_strong_code(int code)
{
    int first = 0;
    int last = 0;
    int sum = 0;
    int digit = 0;

    last = code % 10;

    /* 
    int value_store = code;
    
    while (value_store > 10)
    {
        digit = value_store % 10;
        value_store = (value_store - digit) / 10;
        first = value_store;
    }
    */

    while (code > 0)
    {
        digit = code % 10;
        sum = sum + digit;
        first = code;
        code = (code - digit) / 10;
    }

    cout << sum << endl;
    cout << first << endl;
    cout << last << endl;
    if (sum % 2 == 0 && first != last)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}