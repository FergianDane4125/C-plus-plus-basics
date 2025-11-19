// grade scale

#include <iostream>
using namespace std;
int main()
{
	int grade;
	cout << " enter grade number" << endl;
	cin >> grade;

if(grade >= 90)
{
	cout << "You have an A" << endl;
}
else if(grade >= 80)
{
	cout << "You have a B" << endl;
}
else if(grade >= 70)
{
	cout << "You have a C" << endl;
}
else if(grade >= 60)
{
	cout << "You have an D" << endl;
}
else
{
	cout << "You have an F" << endl;
}
return 0;
}