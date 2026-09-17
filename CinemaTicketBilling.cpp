#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Base Class
class Cinema
{
protected:
    string theatreName;

public:
    Cinema()
    {
        theatreName = "Galaxy Grand Cinema";
    }

    void showTheatre()
    {
        cout << "\n=================================\n";
        cout << "       " << theatreName << "\n";
        cout << "=================================\n";
    }
};

// Derived Class
class Movie : public Cinema
{
protected:
    string movieName;
    string showTime;

public:
    Movie()
    {
        movieName = "Hanuman Ansh";
        showTime = "6:30 PM";
    }

    void showMovie()
    {
        cout << "Movie Name : " << movieName << endl;
        cout << "Show Time  : " << showTime << endl;
    }
};

// Multilevel Derived Class
class Ticket : public Movie
{
protected:
    string customerName;
    int tickets;
    string seatType;
    float price;
    float total;

public:
    Ticket()
    {
        tickets = 0;
        price = 0;
        total = 0;
    }

    void input()
    {
        cout << "\nEnter Customer Name: ";
        cin >> customerName;

        cout << "Enter Number of Tickets: ";
        cin >> tickets;

        cout << "\nSelect Seat Type:\n";
        cout << "1. Regular  - Rs. 150\n";
        cout << "2. Premium  - Rs. 250\n";
        cout << "3. VIP      - Rs. 400\n";

        int choice;
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            seatType = "Regular";
            price = 150;
            break;

        case 2:
            seatType = "Premium";
            price = 250;
            break;

        case 3:
            seatType = "VIP";
            price = 400;
            break;

        default:
            cout << "Invalid choice! Regular seat selected.\n";
            seatType = "Regular";
            price = 150;
        }

        total = tickets * price;
    }

    void displayBill()
    {
        showTheatre();
        showMovie();

        cout << "\n----------- BILL ------------\n";
        cout << "Customer Name : " << customerName << endl;
        cout << "Seat Type     : " << seatType << endl;
        cout << "Ticket Price  : Rs. " << price << endl;
        cout << "Tickets       : " << tickets << endl;
        cout << "Total Amount  : Rs. " << total << endl;
        cout << "-----------------------------\n";
    }

    // Save booking record in file
    void saveFile()
    {
        ofstream file("CinemaBill.txt");

        if (!file)
        {
            cout << "Error opening file!\n";
            return;
        }

        file << "=================================\n";
        file << "       GALAXY GRAND CINEMA\n";
        file << "=================================\n";
        file << "Movie Name    : " << movieName << endl;
        file << "Show Time     : " << showTime << endl;
        file << "Customer Name : " << customerName << endl;
        file << "Seat Type     : " << seatType << endl;
        file << "Ticket Price  : Rs. " << price << endl;
        file << "Tickets       : " << tickets << endl;
        file << "Total Amount  : Rs. " << total << endl;
        file << "=================================\n";

        file.close();

        cout << "\nBooking record saved successfully!\n";
    }

    // Read booking record from file
    void readFile()
    {
        ifstream file("CinemaBill.txt");
        string line;

        if (!file)
        {
            cout << "Error opening file!\n";
            return;
        }

        cout << "\n------ BILL FROM FILE ------\n";

        while (getline(file, line))
        {
            cout << line << endl;
        }

        file.close();
    }
};

int main()
{
    Ticket t;

    t.input();
    t.displayBill();
    t.saveFile();
    t.readFile();

    return 0;
}
