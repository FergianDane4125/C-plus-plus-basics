// traffic light

#include <iostream>
using namespace std;
int main()
{
	string light;
	double speed;
	bool emergency;

	cout << "green , yellow, OR red?" << endl;
	cin >> light;
	cout << "What is your car speed?" << endl;
	cin >> speed;
	cout << "Allow emergency? 1 for yes 0 for no" << endl;
	cin >> emergency;


	if (light == "green")
	{
		cout << "go" << endl;
	}

	else if (light == "yellow")
	{
		if (speed > 40)
		{
			cout << "stop" << endl;
		}
		else
		{
			cout << "Proceeed with caution";
		}
	}
	else if (light == "red")
	{
		if (emergency = true)
		{

			cout << "Allow Emergency Vehicle" << endl;

		}
		else
		{
			cout << "Stop";
		}
	}
	else
	{
		cout << "Invalid input " << endl;
	}

	

}