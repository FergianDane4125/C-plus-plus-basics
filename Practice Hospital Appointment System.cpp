// Practice Hospital Appointment System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	// 1-general checkup, 2-emergency, 3-specialist
	  // day 1 - monday, 2-tuesday and so on
	  // hour 0-23
	  // switch and nested if/else
	  //general checup 80 if weekend + 20 charge
	  // emergency 250 if nught hour >= 20 or hour < 6 + 50
	  // specialist if no refferal ask y/n + 40 fee
	  // general between 9-17. if time is after 17 schedule next day at 9
	  // emergency always "immediate - proceed to ER bay"
	  // specialist between 10 - 16. if weekend schedule monday at 10
	  // add wrong type wrong day wrong hour
	  // weekend is if(day == 6 || day == 7)
	  // night is if(hour>=20 || hour < 6)
	  // base surchage total
	  // general is if(hour<17) > same day; else : next day

	int service_type, day_of_week, hour;
	char refferal;
	double base = 0, surcharge = 0, total = 0;
	string slot_time;

	cout << "Please Enter Service Type (1 for General,2 for Emergency, 3 for Specialist): ";
	cin >> service_type;
	cout << "Enter the day of week (1 = Mon, 2 = Tue, 3 = Wed, 4 = Thu, 5 = Fri, 6 = Sat, 7 = Sun): ";
	cin >> day_of_week;
	cout << "Enter hour of day (0-23): ";
	cin >> hour;



	if (service_type == 1) //general checkup
	{
		base = 80;
		{
			if (day_of_week == 6 || day_of_week == 7)
			{
				surcharge = surcharge + 20;
			}
		}
		if (hour < 9)
		{
			string day_text = "??";

			switch (day_of_week)
			{
			case 1: day_text = "Mon";
				break;
			case 2: day_text = "Tue";
				break;
			case 3: day_text = "Wed";
				break;
			case 4: day_text = "Thu";
				break;
			case 5: day_text = "Fri";
				break;
			case 6: day_text = "Sat";
				break;
			case 7: day_text = "Sun";
				break;
			default: day_text = "??";
				break;
			}
			slot_time = day_text + " 09:00";
		}
		else if (hour >= 9 && hour < 17)
		{
			string day_text = "??";
			switch (day_of_week)
			{
			case 1: day_text = "Mon";
				break;
			case 2: day_text = "Tue";
				break;
			case 3: day_text = "Wed";
				break;
			case 4: day_text = "Thu";
				break;
			case 5: day_text = "Fri";
				break;
			case 6: day_text = "Sat";
				break;
			case 7: day_text = "Sun";
				break;
			default: day_text = "??";
				break;
			}
			slot_time = day_text + " " + to_string(hour + 1) + ":00";
		}
		else
		{
			int next_day = (day_of_week % 7) + 1;
			string day_text = "??";
			switch (next_day)
			{
			case 1: day_text = "Mon";
				break;
			case 2: day_text = "Tue";
				break;
			case 3: day_text = "Wed";
				break;
			case 4: day_text = "Thu";
				break;
			case 5: day_text = "Fri";
				break;
			case 6: day_text = "Sat";
				break;
			case 7: day_text = "Sun";
				break;
			default: day_text = "??";
				break;
			}
			slot_time = day_text + " 09:00";
		}
	}
	else if (service_type == 2) //emergency
	{
		base = 250;
		{
			if (hour >= 22 || hour < 6)
			{
				surcharge = surcharge + 50;
			}
			slot_time = "IMMEDIATE";
		}
	}
	else if (service_type == 3) //specialist
	{
		base = 150;
		cout << "Do you have a refferal? (Y/N): ";
		cin >> refferal;

		if (refferal == 'N' || refferal == 'n')
		{
			surcharge = surcharge + 40;
		}
		if (day_of_week == 6 || day_of_week == 7)
		{
			slot_time = " Mon 10:00";
		}
		else
		{
			if (hour < 10)
			{
				string day_text = "??";
				switch (day_of_week)
				{
				case 1: day_text = "Mon";
					break;
				case 2: day_text = "Tue";
					break;
				case 3: day_text = "Wed";
					break;
				case 4: day_text = "Thu";
					break;
				case 5: day_text = "Fri";
					break;
				case 6: day_text = "Sat";
					break;
				case 7: day_text = "Sun";
					break;
				default: day_text = "??";
					break;
				}
				slot_time = day_text + " 10:00";
			}
			else if (hour >= 10 && hour < 16)
			{
				string day_text = "??";
				switch (day_of_week)
				{
				case 1: day_text = "Mon";
					break;
				case 2: day_text = "Tue";
					break;
				case 3: day_text = "Wed";
					break;
				case 4: day_text = "Thu";
					break;
				case 5: day_text = "Fri";
					break;
				case 6: day_text = "Sat";
					break;
				case 7: day_text = "Sun";
					break;
				default: day_text = "??";
					break;
				}
				slot_time = day_text + " " + to_string(hour + 1) + ":00";
			}
			else
			{
				int next_day = (day_of_week % 7) + 1;
				if (next_day == 6 || next_day == 7)
				{
					next_day = 1;
				}
				string day_text = "??";
				switch (next_day)
				{
				case 1: day_text = "Mon";
					break;
				case 2: day_text = "Tue";
					break;
				case 3: day_text = "Wed";
					break;
				case 4: day_text = "Thu";
					break;
				case 5: day_text = "Fri";
					break;
				case 6: day_text = "Sat";
					break;
				case 7: day_text = "Sun";
					break;
				default: day_text = "??";
					break;
				}
				slot_time = day_text + " 10:00";
			}
		}
	}
	
	else
	{
		cout << "Invalid Service Type" << endl;
		return 0;
	}

	total = base + surcharge;

	cout << fixed << setprecision(2);
	cout << "\n--- Appointment Summary ---" << endl;
	cout << "Base cost     : $" << base << endl;
	cout << "Surcharge     : $" << surcharge << endl;
	cout << "Total Cost    : $" << total << endl;
	cout << "Next Slot     : $" << slot_time << endl;

	return 0;
} 