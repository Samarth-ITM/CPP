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
    string paxNm;

    Seat()
    {
        booked = false;
        paxNm = "";
    }
};

class Flight
{
public:
    int fltNo;
    string src;
    string dst;
    int cap;
    Seat seats[MAX_SEATS];

    Flight()
    {
        fltNo = 0;
        cap = 0;
    }

    void initialize(int num, string src, string dest, int cap)
    {
        fltNo = num;
        this->src = src;
        dst = dest;
        this->cap = cap;

        for (int i = 0; i < this->cap; i++)
        {
            seats[i].booked = false;
            seats[i].paxNm = "";
        }
    }

    int countAvailable()
    {
        int count = 0;

        for (int i = 0; i < cap; i++)
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
        cout << "\nFlight: " << fltNo << endl;
        cout << src << " -> " << dst << endl;
        cout << "Seat Capacity: " << cap << endl;
        cout << "Available Seats: " << countAvailable() << endl;
    }

    void showSeatMap()
    {
        cout << "\nSeat Map for Flight " << fltNo << ":" << endl;
        cout << endl;

        for (int i = 0; i < cap; i++)
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

