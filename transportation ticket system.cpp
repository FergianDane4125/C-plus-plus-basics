// transportation ticket system.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{

    int p_age, distance, t_type;
    int t_day, travel_hour, baggage;
    char class_code, student, member;


    cout << "Enter form of travel (1 = Bus, 2 = Train, 3 = Flihgt) : ";
    cin >> t_type;
    cout << "Enter travel distance in (km) : ";
    cin >> distance;
    cout << "Enter Passenger Age : ";
    cin >> p_age;
    cout << "Enter day of travel (1 = Weekeday, 2 = Weekend) : ";
    cin >> t_day;
    cout << "Enter the time of travel (0-23) : ";
    cin >> travel_hour;
    cout << "Enter class code (S = Sleeper, A = AC, B = Business, N = Normal) : ";
    cin >> class_code;
    cout << "Enter weight of baggage in (kg) : ";
    cin >> baggage;
    cout << "Is the passenger a member? (y/n) : ";
    cin >> member;
    cout << "Is the passenger a student? (y/n) : ";
    cin >> student;



    double baggage_fee = 0, base_fare = 0, surcharge = 0, discount = 0, total = 0;

    switch (t_type)
    {
        case (1):
        {
            base_fare = distance * 0.5;
            if (class_code == 'S' || class_code == 's')
            {
                base_fare = base_fare * 1.2;
            }
            if ((travel_hour >= 7 && travel_hour <= 10) || (travel_hour >= 17 && travel_hour <= 20))
            {
                surcharge = base_fare * 0.15;
            }
            if (p_age <= 12 || p_age >= 60)
            {
                discount = discount + (base_fare * 0.5);
            }
            if (student == 'y' || student == 'Y')
            {
                discount = discount + (base_fare * 0.1);
            }
            if (member == 'y' || member == 'Y')
            {
                discount = discount + (base_fare * 0.5);
            }
            if (base_fare < 2)
            {
                base_fare = 2;
            }
            if (baggage > 10)
            {
                baggage = (baggage - 10) * 1.0;
            }
        }
        break;
        case (2):
        {
            base_fare = distance * 0.8;
            if (class_code == 'AC')
            {
                base_fare * 0.5;
            }
            if ((travel_hour >= 7 && travel_hour <= 10) || (travel_hour >= 17 && travel_hour <= 20))
            {
                surcharge = base_fare * 0.15;
            }
            if (p_age <= 12 || p_age >= 60)
            {
                discount = discount + (base_fare * 0.5);
            }
            if (student == 'y' || student == 'Y')
            {
                discount = discount + (base_fare * 0.1);
            }
            if (member == 'y' || member == 'Y')
            {
                discount = discount + (base_fare * 0.5);
            }
            if (base_fare < 5)
            {
                base_fare = 5;
            }
            if (baggage > 10)
            {
                baggage = (baggage - 10) * 1.0;
            }
        }
        break;
        case (3):
        {
            base_fare = distance * 2.5;
            if (class_code == 'B' || class_code == 'b')
            {
                base_fare = base_fare * 2.2;
            }
            if (t_day == 2)
            {
                surcharge = base_fare * 0.1;
            }
            if (p_age <= 12 || p_age >= 60)
            {
                discount = discount + (base_fare * 0.5);
            }
            if (base_fare < 50)
            {
                base_fare = 50;
            }
            if (baggage > 15)
            {
                baggage = (baggage - 15) * 3.0;
            }
        }
        break;
        default:
        {
            cout << "Invalid trasport type or input\n";
            return 0;
        }
    }
    total = base_fare + surcharge - discount + baggage;
    cout << fixed << setprecision(2);
    cout << "Final Ticket Price $" << total << endl;
    return 0;
}
