// negative `.
#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "enter number" << endl;
    cin >> number;
    if (number > 0)
    {
        cout << "the number is positive" << endl;

        if(number % 2 == 0)
        {
            cout << "it is also even" << endl;
        }
        else 
        {
            cout << "it is also odd" << endl;
        }
    }
    else if (number < 0)
    {
        cout << "number is negative" << endl;
    }
    else
    {
        cout << "the number is zero " << endl;
    }
}

