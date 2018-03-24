// reports.cpp
// Author: Jose Luis Castillo
// Date: 02/03/2017

#include <stdio.h>
#include "reports.h"
#include <iostream>
using namespace std;

//stub functions
void repListing() {
   cout << "You selected Inventory Listing.";
}

void repWholesale() {
   cout << "You selected Inventory Wholesale Value.";
}

void repRetail() {
   cout << "You selected Inventory Retail Value.";
}

void repQty() {
   cout << "You selected Listing By Quantity.";
}

void repCost() {
   cout << "You selected Listing By Cost.";
}

void repAge() {
   cout << "You selected Listing By Age.";
}

//int main() {
void reports() {
   
   int choice;

   do {
         cout << "\n\t    OnlineStore    \n";
         cout << "\t\tReports\n\n";
         cout << "1. Inventory Listing\n";
         cout << "2. Inventory Wholesale Value\n";
         cout << "3. Inventory Retail Value\n";
         cout << "4. Listing by Quantity\n";
         cout << "5. Listing by Cost\n";
         cout << "6. Listing by Age\n";
         cout << "7. Return to the Main Menu\n\n";
         cout << "Enter Your Choice: ";
         cin >> choice;

         //Take appropriate actions
         switch(choice)
         {
            case 1: repListing();
            break;
            case 2: repWholesale();
            break;
            case 3: repRetail();
            break;
            case 4: repQty();
            break;
            case 5: repCost();
            break;
            case 6: repAge();
            break;
            case 7: cout << "Returning to the main menu ...\n";
            break;
            default: cout << "\nPlease enter a number in the range 1-7.\n\n";
            break;
         }
   } while (choice != 7);
   //return 0;
}