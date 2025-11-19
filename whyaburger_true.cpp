// whyaburger_true

#include <iostream>
using namespace std;

int main()
{
	double meal = 9.99;
	double burger = 5.69;
	double drink = 1.99;
	double fries = 1.99;
	double total = burger + drink + fries;

	if(total > meal)
	{
		cout << "meal is cheaper!" << endl;
	}
	else
	{
		cout << "meal is costlier" << endl;
	}
	
	return 0;
}

