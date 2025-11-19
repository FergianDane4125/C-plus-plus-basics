// Loan

#include <iostream>
using namespace std;
int main()
{

	int age;
	int salary;
	int credit_score;

	cout << "Enter age" << endl;
	cin >> age;
	cout << "Enter Salary" << endl;
	cin >> salary;
	cout << "Enter Credit Score"<< endl;
	cin >> credit_score;

	if (age < 21)
	{
		cout << "you are too young ";
	}
	if(age >= 21 && salary < 30000)
	{
		cout << " Not Eligible (low income)" << endl;
	}
	if(salary >= 30000 && credit_score <= 650)
	{
		cout << " Not Eligible (low credit score)" << endl;
	}
	
	if (salary >= 30000 && credit_score >= 650 && age >= 21)
	{
		cout << "you are approved" << endl;
	}

	return 0;
}
