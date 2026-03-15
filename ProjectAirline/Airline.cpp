#include "Airline.h"
using namespace std;

// - validates integer input, re-prompts on bad input
int getIntInput()
{
    int value;
    bool valid = false;

    while (valid == false)
    {
        if (cin >> value)
        {
            valid = true;
        }
        else
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input. Enter a number: ";
        }
    }

    return value;
}



// find flight index by number
int findFlight(int num)
{
    for (int i = 0; i < flightCount; i++)
    {
        if (flights[i].flightNumber == num)
            return i;
    }
    return -1;
}


// generate unique PNR
string generatePNR()
{
    string pnr = "PNR" + to_string(pnrCounter);
    pnrCounter++;
    return pnr;
}


// count bookings for a passenger on a specific flight
int countPassengerBookings(int flightNum, string name)
{
    int count = 0;

    for (int i = 0; i < bookingCount; i++)
    {
        bool sameFlght = (bookingFlight[i] == flightNum);
        bool sameName = (bookingPassenger[i] == name);

        if (sameFlght && sameName)
        {
            count++;
        }
    }

    return count;
}




int main()
{
    initializeFlights();

    int choice;

    while (true)
    {
        cout << "\n PROJECT AIRLINE \n";
        cout << "1. View Flights\n";
        cout << "2. Search Flights\n";
        cout << "3. Book Seat\n";
        cout << "4. Cancel Booking\n";
        cout << "5. View Seat Map\n";
        cout << "6. Your Profile\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";

        choice = getIntInput();


        // 1. View all flights
        if (choice == 1)
        {
            cout << "\n--- Flight Schedule ---\n";

            for (int i = 0; i < flightCount; i++)
                flights[i].displayInfo();
        }


        // 2. Search flights by city
        else if (choice == 2)
        {
            string city;
            cout << "\nEnter City (Source or Destination): ";
            cin >> city;

            bool found = false;

            for (int i = 0; i < flightCount; i++)
            {
                bool matchSource = (flights[i].source == city);
                bool matchDest = (flights[i].destination == city);

                if (matchSource || matchDest)
                {
                    flights[i].displayInfo();
                    found = true;
                }
            }

            if (found == false)
            {
                cout << "No flights found for " << city << endl;
            }
        }


        // 3. Book seat
        else if (choice == 3)
        {
            cout << "\nEnter Flight Number: ";
            int num = getIntInput();

            int index = findFlight(num);

            if (index == -1)
            {
                cout << "Flight Not Found\n";
                continue;
            }

            if (flights[index].countAvailable() == 0)
            {
                cout << "Flight Full. No seats available.\n";
                continue;
            }

            cout << "Enter Passenger Name: ";
            string name;
            getline(cin, name);

            // booking limit check
            if (countPassengerBookings(num, name) >= BOOKING_LIMIT)
            {
                cout << "Booking Limit Reached! Max " << BOOKING_LIMIT << " bookings per passenger per flight.\n";
                continue;
            }

            // find first available seat and book it
            for (int j = 0; j < flights[index].capacity; j++)
            {
                if (flights[index].seats[j].booked == false)
                {
                    flights[index].seats[j].booked = true;
                    flights[index].seats[j].passengerName = name;

                    string pnr = generatePNR();
                    int seatNum = j + 1;

                    // save booking
                    bookingPNR[bookingCount] = pnr;
                    bookingFlight[bookingCount] = num;
                    bookingSeat[bookingCount] = seatNum;
                    bookingPassenger[bookingCount] = name;
                    bookingCount++;

                    cout << endl;
                    cout << "Flight Booked Successfully" << endl;
                    cout << "PNR: " << pnr << endl;
                    cout << "Seat Number: " << seatNum << endl;

                    break;
                }
            }
        }


        // 4. Cancel booking by PNR
        else if (choice == 4)
        {
            cout << "\nEnter PNR: ";
            string pnr;
            cin >> pnr;

            bool found = false;

            for (int i = 0; i < bookingCount; i++)
            {
                if (bookingPNR[i] == pnr)
                {
                    int bookedFlight = bookingFlight[i];
                    int bookedSeat = bookingSeat[i];

                    // free seat
                    int idx = findFlight(bookedFlight);

                    if (idx != -1)
                    {
                        int seatIndex = bookedSeat - 1;
                        flights[idx].seats[seatIndex].booked = false;
                        flights[idx].seats[seatIndex].passengerName = "";
                    }

                    // shift bookings left
                    for (int j = i; j < bookingCount - 1; j++)
                    {
                        bookingPNR[j] = bookingPNR[j + 1];
                        bookingFlight[j] = bookingFlight[j + 1];
                        bookingSeat[j] = bookingSeat[j + 1];
                        bookingPassenger[j] = bookingPassenger[j + 1];
                    }

                    bookingCount--;

                    cout << "Booking Cancelled Successfully" << endl;

                    found = true;
                    break;
                }
            }

            if (found == false)
            {
                cout << "PNR Not Found" << endl;
            }
        }


        // 5. View seat map
        else if (choice == 5)
        {
            cout << "\nEnter Flight Number: ";
            int num = getIntInput();

            int index = findFlight(num);

            if (index == -1)
            {
                cout << "Flight Not Found\n";
                continue;
            }

            flights[index].showSeatMap();
        }


        // 6. Your Profile - view bookings by name
        else if (choice == 6)
        {
            cout << "\nEnter Passenger Name: ";
            string name;
            cin >> name;

            bool found = false;

            cout << "\n--- Bookings for " << name << " ---\n";

            for (int i = 0; i < bookingCount; i++)
            {
                if (bookingPassenger[i] == name)
                {
                    cout << "PNR: " << bookingPNR[i] << " | Flight: " << bookingFlight[i] << " | Seat: " << bookingSeat[i] << endl;
                    found = true;
                }
            }

            if (found == false)
            {
                cout << "No bookings found." << endl;
            }
        }


        // 7. Exit
        else if (choice == 7)
        {
            cout << "Exiting System\n";
            break;
        }

        else
        {
            cout << "Invalid Choice\n";
        }
    }

    return 0;
}