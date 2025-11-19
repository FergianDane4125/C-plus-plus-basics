// Reading a Book.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
   
	string again;
	cout << "do you want turn the next page? (yes/no)" << endl;
	cin >> again;
	while (again == "yes" || again == "Yes" || again == "YES")
	{
		cout << "you moved to the next page\n"; 
		cout << "do you want to turn the page again? (yes/no) \n";
		cin >> again;
	}
	cout << "You closed the book" << endl;
	return 0;

}