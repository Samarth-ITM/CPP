#pragma once

#include <iostream>
#include <string>

using namespace std;

const int MAX_SEATS = 16;
const int MAX_FLIGHTS = 5;
const int MAX_BOOKINGS = 100;
const int BOOKING_LIMIT = 2;

class Seat
{
public:
    bool booked;
    string passengerName;

    Seat()
    {
        booked = false;
        passengerName = "";
    }
};

class Flight
{
public:
    int flightNumber;
    string source;
    string destination;
    int capacity;
    Seat seats[MAX_SEATS];

    Flight()
    {
        flightNumber = 0;
        capacity = 0;
    }

    void initialize(int num, string src, string dest, int cap)
    {
        flightNumber = num;
        source = src;
        destination = dest;
        capacity = cap;

        for (int i = 0; i < capacity; i++)
        {
            seats[i].booked = false;
            seats[i].passengerName = "";
        }
    }

    int countAvailable()
    {
        int count = 0;

        for (int i = 0; i < capacity; i++)
        {
            if (seats[i].booked == false)
            {
                count++;
            }
        }

        return count;
    }

    void displayInfo()
    {
        cout << "\nFlight: " << flightNumber << endl;
        cout << source << " -> " << destination << endl;
        cout << "Seat Capacity: " << capacity << endl;
        cout << "Available Seats: " << countAvailable() << endl;
    }

    void showSeatMap()
    {
        cout << "\nSeat Map for Flight " << flightNumber << ":" << endl;
        cout << endl;

        for (int i = 0; i < capacity; i++)
        {
            int seatNum = i + 1;

            if (seatNum < 10)
            {
                cout << " ";
            }

            cout << seatNum;

            if (seats[i].booked == true)
            {
                cout << "[X]  ";
            }
            else
            {
                cout << "[ ]  ";
            }

            if (seatNum % 4 == 0)
            {
                cout << endl;
            }
            if (seatNum % 8 == 0)
            {
                cout << endl;
            }
        }

        cout << endl;
        cout << endl;
        cout << "X = Booked | Empty = Available" << endl;
    }
};

inline string bookingPNR[MAX_BOOKINGS];
inline int bookingFlight[MAX_BOOKINGS];
inline int bookingSeat[MAX_BOOKINGS];
inline string bookingPassenger[MAX_BOOKINGS];

inline Flight flights[MAX_FLIGHTS];
inline int flightCount = 0;
inline int bookingCount = 0;
inline int pnrCounter = 1001;

inline void initializeFlights()
{
    flights[0].initialize(101, "Delhi", "Mumbai", 16);
    flights[1].initialize(102, "Mumbai", "Bangalore", 16);
    flights[2].initialize(103, "Delhi", "Chennai", 16);
    flights[3].initialize(104, "Kolkata", "Delhi", 16);
    flights[4].initialize(105, "Bangalore", "Hyderabad", 16);
    flightCount = 5;
}

int getIntInput();
int findFlight(int num);
string generatePNR();
int countPassengerBookings(int flightNum, string name);
