// smart transit card (tap-in tap-out).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

float read_recharge_amount(float recharge);
int compute_fare(int zone, int hour);
void show_last_trip(int last_start_zone, int last_end_zone, int last_start_hour, int last_end_hour, float last_fare);
float current_balance = 0;
float total_fare = 0;
int current_start_zone, current_start_hour;

int main()
{
    int user_choice;
    float recharge_amount;
    int user_amount;
    bool in_trip = false;
    int ending_zone, ending_hour;
    bool complete_trip = false;
    do
    {
        cout << "=== Smart Transit Card ===\n";
        cout << "1) Recharge\n";
        cout << "2) Tap-in\n";
        cout << "3) Tap-out\n";
        cout << "4) Show Balance\n";
        cout << "5) Show Last Trip\n";
        cout << "6) Adnmin/Debug\n";
        cout << "7) Exit\n";
        cout << "Choose: ";

        cin >> user_choice;
        cout << endl << endl;
        switch (user_choice)
        {
       
        case 1: 
            cout << "Enter Recharge amount: ";
            cin >> recharge_amount;
                read_recharge_amount(recharge_amount);
                break;
        case 2:
        {
            if (in_trip == true)
            {
                cout << "You are already in a trip! Please tap out first." << endl << endl;
            }
            else
            {
                cout << "Enter starting zone/station (1-3): ";
                cin >> current_start_zone;
                if (current_start_zone >= 1 && current_start_zone <= 3)
                {
                    cout << "Enter start hour (0-23): ";
                    cin >> current_start_hour;

                    if (current_start_hour >= 0 && current_start_hour <= 23)
                    {
                        cout << "Tap-In recorded successfully." << endl << endl << endl;
                    }
                    else
                    {
                        cout << "Enter a correct time (0-23)" << endl << endl << endl;
                    }
                }
                else
                {
                    cout << "please enter a number (1-3)" << endl << endl;
                }
                in_trip = true;
            }
        }
            break;

        case 3:
        {
            if (in_trip == false)
            {
                if (current_balance >= 6.00)
                {
                    cout << "Rider did not tap in. Penalty fare of $6.00 to balance" << endl;
                    current_balance = current_balance - 6.00;
                    cout << "current balance: $" << current_balance << endl << endl << endl;
                }
                else
                {
                    cout << "Insufficient balance to pay penalty. Please recharge." << endl<<endl<< endl;
                }
            }
            else
            {
                cout << "Enter ending zone (1-3): ";
                cin >> ending_zone;
                if (ending_zone >= 1 && ending_zone <= 3)
                {
                    cout << "Enter ending hour (0-23): ";
                    cin >> ending_hour;
                    if (ending_hour >= 0 && ending_hour <= 23)
                    {
                        compute_fare(ending_zone, ending_hour);
                        complete_trip = true;
                    }
                    else
                    {
                        cout << "Please try again. Enter a time between 0-23" << endl << endl;
                    }
                }
                else
                {
                    cout << "Please try again. Enter a zone between (1-3)" << endl << endl;
                }
            }
        }
            break;

        case 4:
            cout << "your current balance is: $" << current_balance << endl << endl;
            break;

        case 5:
        {
            if (complete_trip == false)
            {
                cout << "No previous trip found" << endl << endl;
            }
            else
            {
                show_last_trip(current_start_zone, ending_zone, current_start_hour, ending_hour, total_fare);
                complete_trip = false;
            }
        }
            break;

        case 6:
        {
            cout << "[ADMIN DEBUG]" << endl;

            float* ptr_current_balance = nullptr;
            ptr_current_balance = &current_balance;
            cout << "current_balance @ " << ptr_current_balance << " = " << *ptr_current_balance << endl;
     
            bool* ptr_in_trip = nullptr;
            ptr_in_trip = &in_trip;
            cout << "in_trip @ " << ptr_in_trip << " = " << *ptr_in_trip << endl;

            int* prt_start_zone = nullptr;
            prt_start_zone = &current_start_zone;
            cout << "current_start_zone @ " << prt_start_zone << " = " << *prt_start_zone << endl;

            int* prt_end_zone = nullptr;
            prt_end_zone = &ending_zone;
            cout << "ending_zone @ " << prt_end_zone << " = " << *prt_end_zone << endl;

            int* prt_start_hour = nullptr;
            prt_start_hour = &current_start_hour;
            cout << "current_start_hour @ " << prt_start_hour << " = " << *prt_start_hour << endl;

            int* prt_end_hour = nullptr;
            prt_end_hour = &ending_hour;
            cout << "ending_hour @ " << prt_end_hour << " = " << *prt_end_hour << endl;

            float* ptr_fare = nullptr;
            ptr_fare = &total_fare;
            cout << "total_fare @ " << ptr_fare << " = " << *ptr_fare << endl;
        }
            break;

        case 7:
            return 0;
            break;
        }

    } while (user_choice >= 1 && user_choice <= 7);

    return 0;
}
float read_recharge_amount(float recharge)
{

    if (recharge <= 0)
    {
        cout << "please enter a number greater than 0" << endl << endl << endl << endl;
        return 1;
    }
    else
    {
        current_balance = current_balance + recharge;
        cout << "Recharge successful. New balance $" << current_balance << endl << endl << endl << endl;
    }
}
int compute_fare(int zone, int hour)
{
    float base_fare = 2.50;
    float peak_hour_fare = 1.25;
    float cross_zone_fare = 1.75;
    current_balance -=base_fare;

    if (current_start_hour >= 7 && current_start_hour <= 9 || hour >= 7 && hour <= 9 )
    {
        current_balance -= peak_hour_fare;
        cout << "Travelling during peak hours - $1.25 to balance" << endl;
        
        
        if (current_start_zone != zone)
        {
            current_balance -= cross_zone_fare;
            cout << "Traveling to another zone/station - $1.75 to balance" << endl;
            total_fare = total_fare + base_fare + cross_zone_fare+ peak_hour_fare;
            cout << "Total fare: $" << total_fare << endl << endl;
            return 1;
        }
        else
        {
            total_fare = total_fare + base_fare+ peak_hour_fare;
            cout << "Total fare: $" << total_fare << endl << endl;
            return 1;
        }
    }
    else if (current_start_zone != zone)
    {
        current_balance -= cross_zone_fare;
        cout << "Traveling to another zone/station - $1.75 to balance" << endl;
        total_fare = total_fare + base_fare + cross_zone_fare;
        cout << "Total fare: $" << total_fare << endl << endl;
        return 1;
    }
    else
    {
        total_fare = total_fare + base_fare;
        cout << "Total fare: $" << total_fare << endl << endl;
        return 1;
    }
}
void show_last_trip(int last_start_zone, int last_end_zone, int last_start_hour, int last_end_hour, float last_fare)
{
    cout << "Last Trip Summary" << endl;
    cout << "-----------------" << endl;
    cout << "Start Zone :" << last_start_zone << endl;
    cout << "End Zone   :" << last_end_zone << endl;
    cout << "Start hour :" << last_start_hour << endl;
    cout << "End hour   :" << last_end_hour << endl;
    cout << "Fare Paid  :$" << last_fare << endl << endl;
}
