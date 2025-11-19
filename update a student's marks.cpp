// update a student's marks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void update_marks(int* marks);

int main()
{
	int student_marks = 72;

	cout << "marks = " << student_marks << endl;

	update_marks(&student_marks);

	cout << "updated marks = " << student_marks << endl;

	return 0;
}
void update_marks(int* marks)
{
	*marks += 5;
}
