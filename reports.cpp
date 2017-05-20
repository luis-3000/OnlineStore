// reports.cpp
// Author: Jose Luis Castillo
// Date: 02/03/2017

#include <stdio.h>

#include "iostream"
using namespace std;

void reports() {
   int choice;
   cout << "\n\teBookStore Booksellers\n";
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
      case 1: cout << "You selected item  1.\n";
      break;
      case 2: cout << "You selected item  2.\n";
      break;
      case 3: cout << "You selected item  3.\n";
      break;
      case 4: cout << "You selected item  4.\n";
      break;
      case 5: cout << "You selected item  5.\n";
      break;
      case 6: cout << "You selected item  5.\n";
      break;
      case 7: cout << "You selected item  5.\n";
      break;
      default: cout << "\nPlease enter a number in the range 1-4.\n\n";
      break;
   }

   do {
         cout << "\n\teBookStore Booksellers\n";
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
            case 1: cout << "You selected item  1.\n";
            break;
            case 2: cout << "You selected item  2.\n";
            break;
            case 3: cout << "You selected item  3.\n";
            break;
            case 4: cout << "You selected item  4.\n";
            break;
            case 5: cout << "You selected item  5.\n";
            break;
            case 6: cout << "You selected item  6.\n";
            break;
            case 7: cout << "You selected item  7.\n";
            break;
            default: cout << "\nPlease enter a number in the range 1-4.\n\n";
            break;
         }
   } while (choice != 7);

   return 0;
}