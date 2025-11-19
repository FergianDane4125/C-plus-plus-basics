// smart light control system.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int choice;
	bool lights_on = 0;
	 do
	 {
		 cout << "--------------------" << endl;
		 cout << "Smart Home Light" << endl;
		 cout << "--------------------" << endl;
		 cout << " " << endl;
		 cout << "[1] Turn on light" << endl;
		 cout << "[2] Turn off light" << endl;
		 cout << "[3] Status" << endl;
		 cout << "[4] Exit App" << endl;
		 cout << "--------------------" << endl;
		 cout << "Enter Choice (1-4) : \n";
		 cin >> choice;
		 cout << " " << endl;
		 cout << " " << endl;
		 cout << " " << endl;
		 cout << " " << endl;

		 switch (choice)	
		 {
			 case 1:
			 {
				 if (lights_on == 0)
				 {
					 lights_on = 1;
					 cout << "Lights turned on\n";
				 }
				 else
				 {
					 cout << "Lights already on\n";
				 }
			 }
			 break;
			 case 2:
			 {
				 if (lights_on == 1)
				 {
					 lights_on - 0;
					 cout << "Lights turned off\n";
				 }
				 else
				 {
					 cout << "Lights already off\n";
				 }
			 }
			 break;
			 case 3:
			 {
				 if (lights_on == 1)
				 {
					 cout << "Lights are on\n";
				 }
				 else
				 {
					 cout << "Lights are off\n";
				 }
			 }
			 break;
			 case 4:
			 {
				 cout << "Closing smart home light\n";
			 }
			 break;
			 default:
			 {
				 cout << "Invalid input/choice. Please select 1, 2, 3, or 4\n";
			 }
			 break;
		 }

	 } while (choice != 4);
	 return 0;
}
