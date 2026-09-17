# Cinema Ticket Booking and Billing System

An OOP-based Cinema Ticket Booking and Billing System developed using C++.

## Author

**Janhvi Singh**

## Project Overview

This project is designed to manage cinema movie details, customer bookings, different types of seats, ticket prices, and billing. It also uses file handling to save and read booking records.

## Features

- Movie and show-time details
- Customer ticket booking
- Regular, Premium, and VIP seats
- Automatic ticket price calculation
- Billing system
- Save booking details to a file
- Read booking details from a file

## OOP Concepts Used

- Classes and Objects
- Constructors
- Inheritance
- Multilevel Inheritance
- Encapsulation
- Access Specifiers

## Seat Types

| Seat Type | Price |
|---|---:|
| Regular | Rs. 150 |
| Premium | Rs. 250 |
| VIP | Rs. 400 |

## File Handling

The project uses C++ file handling:

- `ofstream` to save booking records
- `ifstream` to read booking records
- `CinemaBill.txt` stores the generated bill

## Technologies Used

- C++
- Object-Oriented Programming
- File Handling

## How to Run

1. Open `CinemaTicketBilling.cpp` in a C++ compiler.
2. Compile the program.
3. Run the program.
4. Enter customer details.
5. Select the seat type.
6. The bill will be generated and saved to a file.

## Project Structure

```text
Cinema-Ticket-Billing-System/
│
├── CinemaTicketBilling.cpp
├── README.md
├── .gitignore
└── LICENSE
