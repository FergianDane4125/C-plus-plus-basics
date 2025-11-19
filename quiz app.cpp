// quiz app.cpp 

#include <iostream>
using namespace std;
int main()
{
    bool yellow = true;
    bool red = true;
    string answer1;
    string answer2;

    cout << "what color is a banana?" << endl;
    cin >> answer1;

    if( answer1 == "yellow")
    {
        cout << "go to next" << endl;
    }
    if (answer1 != "yellow")
    {
        cout << "game over" << endl; 
        
    }
    cout << "what color is an apple?" << endl;
    cin >> answer2;

    if (answer2 == "red")
    {
        cout << "you win!" << endl;
    }
    if (answer2 != "red")
    {
        cout << "game over" << endl;
        
    }
    
    return 0;
}