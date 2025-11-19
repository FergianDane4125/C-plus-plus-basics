// coffee reciept
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string  name, coffee , size;

	cout << "enter your name: " ;
	getline(cin, name);

	cout << "enter the name of coffee: " ;
	getline(cin, coffee);

	cout << "enter your size : " ;
	getline(cin, size) ;

	cout << "Receipt for " << name << endl;
	cout << "Coffee : " << coffee << endl;
	cout << "Size : " << size << endl;
	cout << "Enjoy your Coffee " << name << endl;

	return 0;
 }