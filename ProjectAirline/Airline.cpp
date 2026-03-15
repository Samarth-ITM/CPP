#include "Airline.h"
#include <sstream>
#include <cctype>
using namespace std;

string bkPnr[MAX_BOOKINGS];
int bkFlt[MAX_BOOKINGS];
int bkSeat[MAX_BOOKINGS];
string bkPax[MAX_BOOKINGS];

Flight flights[MAX_FLIGHTS];
int fltCnt = 0;
int bkCnt = 0;
int pnrCtr = 1001;

void initializeFlights()
{
    flights[0].initialize(101, "Delhi", "Mumbai", 16);
    flights[1].initialize(102, "Mumbai", "Bangalore", 16);
    flights[2].initialize(103, "Delhi", "Chennai", 16);
    flights[3].initialize(104, "Kolkata", "Delhi", 16);
    flights[4].initialize(105, "Bangalore", "Hyderabad", 16);
    fltCnt = 5;
}

int getIntInput()
{
    while (true)
    {
        string line;
        getline(cin, line);

        stringstream ss(line);
        int val;

        if (ss >> val)
        {
            return val;
        }

        cout << "Invalid number. Try again.\n";
    }
}

string normalizePnr(string s)
{
    for (char &ch : s)
    {
        ch = static_cast<char>(toupper(static_cast<unsigned char>(ch)));
    }
    return s;
}

int findFlight(int fltNo)
{
    for (int i = 0; i < fltCnt; i++)
    {
        if (flights[i].fltNo == fltNo)
            return i;
    }
    return -1;
}

string generatePNR()
{
    string pnr = "PNR" + to_string(pnrCtr);
    pnrCtr++;
    return pnr;
}

int countPassengerBookings(int fltNo, string pax)
{
    int count = 0;

    for (int i = 0; i < bkCnt; i++)
    {
        bool sameFlght = (bkFlt[i] == fltNo);
        bool sameName = (bkPax[i] == pax);

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
        int choice = getIntInput();


        // 1. View all flights
        if (choice == 1)
        {
            cout << "\n--- Flight Schedule ---\n";

            for (int i = 0; i < fltCnt; i++)
                flights[i].displayInfo();
        }


        // 2. Search flights by city
        else if (choice == 2)
        {
            cout << "\nEnter City (Source or Destination): ";
            string city;
            getline(cin, city);

            bool found = false;

            for (int i = 0; i < fltCnt; i++)
            {
                bool matchSource = (flights[i].src == city);
                bool matchDest = (flights[i].dst == city);

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
            int fltNo = getIntInput();

            int index = findFlight(fltNo);

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
            string pax;
            getline(cin, pax);

            // booking limit check
            if (countPassengerBookings(fltNo, pax) >= BOOKING_LIMIT)
            {
                cout << "Booking Limit Reached! Max " << BOOKING_LIMIT << " bookings per passenger per flight.\n";
                continue;
            }

            // find first available seat and book it
            for (int j = 0; j < flights[index].cap; j++)
            {
                if (flights[index].seats[j].booked == false)
                {
                    flights[index].seats[j].booked = true;
                    flights[index].seats[j].paxNm = pax;

                    string pnr = generatePNR();
                    int seatNum = j + 1;

                    // save booking
                    bkPnr[bkCnt] = pnr;
                    bkFlt[bkCnt] = fltNo;
                    bkSeat[bkCnt] = seatNum;
                    bkPax[bkCnt] = pax;
                    bkCnt++;

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
            getline(cin, pnr);
            pnr = normalizePnr(pnr);

            bool found = false;

            for (int i = 0; i < bkCnt; i++)
            {
                if (bkPnr[i] == pnr)
                {
                    int bookedFlight = bkFlt[i];
                    int bookedSeat = bkSeat[i];

                    // free seat
                    int idx = findFlight(bookedFlight);

                    if (idx != -1)
                    {
                        int seatIndex = bookedSeat - 1;
                        flights[idx].seats[seatIndex].booked = false;
                        flights[idx].seats[seatIndex].paxNm = "";
                    }

                    // shift bookings left
                    for (int j = i; j < bkCnt - 1; j++)
                    {
                        bkPnr[j] = bkPnr[j + 1];
                        bkFlt[j] = bkFlt[j + 1];
                        bkSeat[j] = bkSeat[j + 1];
                        bkPax[j] = bkPax[j + 1];
                    }

                    bkCnt--;

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
            int fltNo = getIntInput();

            int index = findFlight(fltNo);

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
            string pax;
            getline(cin, pax);

            bool found = false;

            cout << "\n--- Bookings for " << pax << " ---\n";

            for (int i = 0; i < bkCnt; i++)
            {
                if (bkPax[i] == pax)
                {
                    cout << "PNR: " << bkPnr[i] << " | Flight: " << bkFlt[i] << " | Seat: " << bkSeat[i] << endl;
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

    }

    return 0;
}