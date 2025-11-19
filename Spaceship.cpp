// Spaceship

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	int x1, y1, z1, x2, y2, z2;
	double distance;
	double fuel;
	x1 = 2;
	y1 = 3;
	z1 = 5;
	x2 = 6;
	y2 = 7;
	z2 = 9;
	
	distance = sqrt(pow((x2-x1), 2) + (pow((y2-y1), 2) + (pow((z2-z1), 2))));
	double fuel_rate;
	fuel_rate = 2.5;
	fuel = distance * fuel_rate; 
	double mx; 
	double my;
	double mz;

	mx = (x1 + x2 / 2);
	my = (y1 + y2 / 2);
	mz = (z1 + z2 / 2);
	cout << "The distance is : " << distance << endl;
	cout << "The midpoint is : (" << mx <<","<< my <<","<< mz <<")"<< endl;
	cout << "The fuel is : " << fuel << endl;
	return 0;
}

