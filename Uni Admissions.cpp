// Uni Admissions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
   
	double marks, ent_exams;
	string sports_q; 

	cout << "Enter Marks" << endl;
	cin >> marks;
	cout << "Enter Entrance Exam Score" << endl;
	cin >> ent_exams;
	cout << "Are you entering for sports? (yes/no) " << endl;
	cin >> sports_q;

	if (marks >= 60)
	{
		if(marks >= 85 && ent_exams >=80)
		{
			cout << "Admission in Honors Program" << endl;
		}
		else if (marks >= 80 && sports_q == "yes")
		{
			cout << "Admission in Sports Program" << endl;
		}
		else if((marks >= 70 && ent_exams >= 60) && sports_q == "no")
		{
			cout << "Admission in Regular Program" << endl;
		}
		else 
		{
			cout << "Application Rejected" << endl;
		}
	}
	else 
	{
		cout << "Application Rejected" << endl;
	}

	return 0;
}

