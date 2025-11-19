// printing boarding pass practice
#include <iostream>
#include <string>
using namespace std;

int main()
{

	int flight_number; 
	string flight_code;
	int seat_number; 
	char seat_code;
	string to;
	string from;
	string passenger_name;
	
	cout << "enter passenger name : " << endl; 
	getline(cin, passenger_name);

	cout << "enter flight number : " << endl;
	cin >> flight_number;

	cout << "enter flight code : " << endl;
	getline(cin, flight_code);

	cout << "enter seat number : " << endl; 
	cin >> seat_number;

	cout << "enter seat code : " << endl;
	cin >> seat_code;

	cout << "to : " << endl;
	getline(cin, to);

	cout << "from : " << endl;
	getline(cin, from);





	cout << "********************BOARDING PASS***********************"<<endl;
	cout << "Passenger : " << passenger_name << endl;
	cout << "Flight : " << flight_code << " " << flight_number << endl;
	cout << "Seat : " << seat_number << " " << seat_code << endl;
	cout << "To :" << to << endl;
	cout << "From : " << from << endl;
	cout << "********************************************************" << endl;

}