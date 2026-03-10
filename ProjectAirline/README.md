# Project Airline - Airline Reservation System

## Overview

This is a C++ console-based Airline Reservation System that allows users to view flights, book seats, cancel reservations, and view seat availability. All data is stored in a CSV file so bookings persist across program restarts.

---

## Menu Options

```
1. View Flights
2. Search Flights
3. Book Seat
4. Cancel Booking
5. View Seat Map
6. Your Profile
7. Exit
```

---

## Features Explained

### 1. View Flights
Displays all 5 predefined flights with their flight number, source, destination, seat capacity, and available seats.

**Example Output:**
```
Flight: 101
Delhi -> Mumbai
Seat Capacity: 20
Available Seats: 20
```

### 2. Search Flights
User enters a city name and the system shows all flights that have that city as either source or destination.

### 3. Book Seat
- User enters a flight number and passenger name.
- The system automatically assigns the first available seat.
- A unique PNR (e.g., PNR1001) is generated for the booking.
- Booking is saved to `bookings.csv`.
- A passenger can book a maximum of **2 seats per flight** (booking limit).

**Example Output:**
```
Flight Booked Successfully
PNR: PNR1001
Seat Number: 1
```

### 4. Cancel Booking
- User enters their PNR number.
- The system finds the booking, frees the seat, and removes the record.
- Updated data is saved to `bookings.csv`.

### 5. View Seat Map
Displays a visual grid of seats for a given flight. Booked seats are marked with `[X]` and available seats with `[ ]`.

**Example Output:**
```
 1[X]   2[ ]   3[ ]   4[ ]
 5[ ]   6[ ]   7[ ]   8[ ]
 9[ ]  10[ ]  11[ ]  12[ ]
13[ ]  14[ ]  15[ ]  16[ ]
17[ ]  18[ ]  19[ ]  20[ ]

X = Booked | Empty = Available
```

### 6. Your Profile
User enters their name and sees all their active bookings with PNR, flight number, and seat number.

### 7. Exit
Saves all bookings to file and exits the program.

---

## Classes and Structures

### Seat (Class)
Stores data for a single seat.
- `booked` — whether the seat is occupied (true/false)
- `passengerName` — name of the passenger (empty if not booked)

### Flight (Class)
Stores flight information and an array of Seat objects.
- `flightNumber` — unique flight ID (e.g., 101)
- `source` — departure city
- `destination` — arrival city
- `capacity` — total number of seats
- `seats[]` — array of Seat objects

**Methods:**
- `initialize()` — sets up flight data and resets all seats
- `countAvailable()` — counts and returns number of free seats
- `displayInfo()` — prints flight details to console
- `showSeatMap()` — prints visual seat grid

### Booking (Struct)
Stores a single booking record.
- `pnr` — unique booking ID (e.g., PNR1001)
- `flightNumber` — which flight was booked
- `seatNumber` — which seat was assigned
- `passengerName` — name of the passenger

---

## Helper Functions

| Function                                  | Purpose |
| `saveBookings()`                          | Writes all bookings to `bookings.csv`. |
| `getIntInput()`                           | Reads an integer with input validation. Keeps asking until a valid number is entered. |
| `initializeFlights()`                     | Sets up 5 predefined flights with their routes and capacities. |
| `findFlight(num)`                         | Searches for a flight by number. Returns array index or -1 if not found. |
| `generatePNR()`                           | Creates a unique PNR string like PNR1001, PNR1002, etc. |
| `countPassengerBookings(flightNum, name)` | Counts how many bookings a passenger has on a specific flight (used for booking limit). |
| `loadBookings()`                          | Reads bookings from `bookings.csv` and restores seat states on program start. |

---

## Flight Data

| Flight | Source | Destination | Seats |
|--------|--------|-------------|-------|
| 101    | Delhi  | Mumbai      | 20    |
| 102    | Mumbai | Bangalore   | 15    |
| 103    | Delhi  | Chennai     | 18    |
| 104    | Kolkata | Delhi      | 20    |
| 105    | Bangalore | Hyderabad| 16    |

---

## File Storage (bookings.csv)

Bookings are saved to `bookings.csv` so they persist between runs.

**Format:**
```
<pnrCounter>
PNR1001,101,1,Samarth
PNR1002,102,3,Rahul
```

- First line stores the next PNR counter value.
- Each following line is a booking: `PNR,FlightNumber,SeatNumber,PassengerName`.

---

## Program Flow

```
Program Start
    |
    v
Initialize 5 flights
    |
    v
Load bookings from CSV (if file exists)
    |
    v
Display Menu (loop)
    |
    +---> View Flights ---> Show all flights with availability
    |
    +---> Search Flights ---> Enter city ---> Show matching flights
    |
    +---> Book Seat ---> Enter flight + name ---> Check availability
    |                    ---> Check booking limit ---> Assign seat
    |                    ---> Generate PNR ---> Save to CSV
    |
    +---> Cancel Booking ---> Enter PNR ---> Free seat
    |                        ---> Remove record ---> Save to CSV
    |
    +---> View Seat Map ---> Enter flight ---> Show seat grid
    |
    +---> Your Profile ---> Enter name ---> Show all bookings
    |
    +---> Exit ---> Save bookings ---> End
```

---

## Concepts Used

- **Classes and Objects** — Seat, Flight
- **Structures** — Booking
- **Arrays** — Flight array, Seat array, Booking array
- **Conditional Statements** — if/else if for menu and validation
- **Loops** — while loop for menu, for loops for searching
- **File Handling** — Reading and writing CSV using fstream
- **String Handling** — stringstream for parsing CSV lines
- **Input Validation** — Handles non-numeric input gracefully
