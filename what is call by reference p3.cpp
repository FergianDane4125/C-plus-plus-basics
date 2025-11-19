// what is call by reference p3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

void update_age(int* age);

int main()
{
	int person_age = 20;
	update_age(&person_age);

	cout << "person age = " << person_age;
	return 0;


}
void update_age(int* age)
{
	*age = 30;
	cout << "age = " << *age << endl;
}
