// self-checkout

#include <iostream>
using namespace std;

int main()
{
	double price_1, price_2, price_3;
	int q1, q2, q3; 

	cout << "Enter price : " << endl;
	cin >> price_1; 
	
	cout << "Enter Quantity : " << endl;
	cin >> q1; 

	cout << "Enter price : " << endl;
	cin >> price_2;

	cout << "Enter Quantity : " << endl;
	cin >> q2;

	cout << "Enter price : " << endl;
	cin >> price_3;

	cout << "Enter Quantity : " << endl;
	cin >> q3;

	double total;
	total = (price_1 * q1) + (price_2 * q2) + (price_3 * q3); 

	cout << "========================" << endl; 
	cout << " Total Bill: $" << total; 

	return 0;

}

