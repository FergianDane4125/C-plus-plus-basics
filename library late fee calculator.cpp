// library late fee calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int book_fee;
	int total_fee = 0;
	int number_of_books;
	cout << "How many books do you want to turn in? ";
	cin >> number_of_books;

	for (int book = 1; book <= number_of_books; book++)
	{
		int days_late;
		cout << "how many days late is book (0 if not late) " << book << "?: ";
		cin >> days_late;
		if (days_late >=1 || days_late <= 5)
		{
			book_fee = days_late * 1;
			cout << "book fee for book " << book << " : $"<< book_fee << endl;
			total_fee = total_fee + book_fee;
		}
		else if (days_late >= 6 || days_late <= 10)
		{
			book_fee = days_late * 2;
			cout << "book fee for book " << book << " : $" << book_fee << endl;
			total_fee = total_fee + book_fee;
		}
		else if (days_late >= 11)
		{
			book_fee = days_late * 5;
			cout << "book fee for book " << book << " : $" << book_fee << endl;
			total_fee = total_fee + book_fee;
		}
		else
		{
			cout << "you have no late books! No fee.";
			book_fee = days_late * 0;
			cout << "book fee for book " << book << " : $" << book_fee << endl;
			total_fee = total_fee + book_fee;
		}
		cout << "total fee: $" << total_fee << endl << endl << endl;
	}
}
