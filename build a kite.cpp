// build a kite.cpp 

#include <iostream>
#include <cmath> 
using namespace std; 

int main()
{
	int diagonal1, diagonal2; 
	double side; 

	cout << "what is the diagonal length 1? " << endl;
	cin >> diagonal1; 
	cout << "what is the diagonal length 2? " << endl;
	cin >> diagonal2; 
	double area;
	side = (sqrt((pow(diagonal1, 2)) + (pow(diagonal2, 2)))) * 0.5; 
	double perimeter;
	perimeter = 4 * side; 
	area = (diagonal1 * diagonal2) * 0.5;

	cout << "the side is " << side << endl;
	cout << "the perimeter is " << perimeter << endl;
	cout << "the area is " << area << endl;
	return 0;

}


