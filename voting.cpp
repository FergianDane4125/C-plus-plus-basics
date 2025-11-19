// voting.

#include <iostream>
using namespace std;
int main()
{
    int age;
    bool citizen; 
    cout << "Enter your age " << endl;
    cin >> age;
    cout << "Are you a citizen? Type 1 for YES 0 for NO " << endl; 
    cin >> citizen;
    
    if (age >= 18)
    {
        cout << "You are able to vote" << endl;
    }
    if (age < 18)
    {
        cout << "Sorry, you are not eligible" << endl;
    }
    if (age >= 18 && ! citizen)
    {
        cout << "You must be a citizen to vote" << endl;
    }
    

}

