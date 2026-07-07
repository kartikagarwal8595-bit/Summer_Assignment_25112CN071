/*Write a program to Create ticket booking 
system.*/
#include <iostream>
#include <string>
using namespace std;

class TicketBooking
{
private:
    int ticketNo;
    string name;
    int seats;
    float price;

public:
    void bookTicket()
    {
        cout << "Enter Ticket Number: ";
        cin >> ticketNo;
        cin.ignore();

        cout << "Enter Passenger Name: ";
        getline(cin, name);

        cout << "Enter Number of Seats: ";
        cin >> seats;

        price = seats * 500; // Price per seat = 500

        cout << "Ticket Booked Successfully!\n";
    }

    void displayTicket()
    {
        cout << "\n----- Ticket Details -----\n";
        cout << "Ticket Number  : " << ticketNo << endl;
        cout << "Passenger Name : " << name << endl;
        cout << "Seats Booked   : " << seats << endl;
        cout << "Total Fare     : " << price << endl;
    }

    void cancelTicket()
    {
        ticketNo = 0;
        name = "";
        seats = 0;
        price = 0;

        cout << "Ticket Cancelled Successfully!\n";
    }
};

int main()
{
    TicketBooking ticket;
    int choice;

    do
    {
        cout << "\n===== Ticket Booking System =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Display Ticket\n";
        cout << "3. Cancel Ticket\n";
        cout << "4. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            ticket.bookTicket();
            break;

        case 2:
            ticket.displayTicket();
            break;

        case 3:
            ticket.cancelTicket();
            break;

        case 4:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}