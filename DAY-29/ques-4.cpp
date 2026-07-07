/*Write a program to Create inventory 
management system.*/
#include <iostream>
#include <string>
using namespace std;

class Inventory
{
private:
    int itemId[100];
    string itemName[100];
    int quantity[100];
    float price[100];
    int total = 0;

public:
    void addItem()
    {
        if (total == 100)
        {
            cout << "Inventory is Full!\n";
            return;
        }

        cout << "Enter Item ID: ";
        cin >> itemId[total];
        cin.ignore();

        cout << "Enter Item Name: ";
        getline(cin, itemName[total]);

        cout << "Enter Quantity: ";
        cin >> quantity[total];

        cout << "Enter Price: ";
        cin >> price[total];

        total++;

        cout << "Item Added Successfully!\n";
    }

    void displayItems()
    {
        if (total == 0)
        {
            cout << "No Items Available!\n";
            return;
        }

        cout << "\n----- Inventory Details -----\n";
        for (int i = 0; i < total; i++)
        {
            cout << "Item ID   : " << itemId[i] << endl;
            cout << "Item Name : " << itemName[i] << endl;
            cout << "Quantity  : " << quantity[i] << endl;
            cout << "Price     : " << price[i] << endl;
            cout << "-----------------------------\n";
        }
    }

    void searchItem()
    {
        int id;
        cout << "Enter Item ID to Search: ";
        cin >> id;

        for (int i = 0; i < total; i++)
        {
            if (itemId[i] == id)
            {
                cout << "\nItem Found!\n";
                cout << "Item ID   : " << itemId[i] << endl;
                cout << "Item Name : " << itemName[i] << endl;
                cout << "Quantity  : " << quantity[i] << endl;
                cout << "Price     : " << price[i] << endl;
                return;
            }
        }

        cout << "Item Not Found!\n";
    }

    void updateQuantity()
    {
        int id, qty;

        cout << "Enter Item ID: ";
        cin >> id;

        for (int i = 0; i < total; i++)
        {
            if (itemId[i] == id)
            {
                cout << "Enter New Quantity: ";
                cin >> qty;
                quantity[i] = qty;

                cout << "Quantity Updated Successfully!\n";
                return;
            }
        }

        cout << "Item Not Found!\n";
    }
};

int main()
{
    Inventory inv;
    int choice;

    do
    {
        cout << "\n===== Inventory Management System =====\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Search Item\n";
        cout << "4. Update Quantity\n";
        cout << "5. Exit\n";
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            inv.addItem();
            break;

        case 2:
            inv.displayItems();
            break;

        case 3:
            inv.searchItem();
            break;

        case 4:
            inv.updateQuantity();
            break;

        case 5:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}