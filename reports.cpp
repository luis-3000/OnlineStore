// reports.cpp
// Author: Jose Luis Castillo
// Date: 02/03/2017

#include <stdio.h>

#include "iostream"
using namespace std;

int main(int argc, const char * argv[]) {
   int choice;
   cout << "\n\neBookStore Booksellers\n";
   cout << "\t\t\t\t\tReports\n\n";
   cout << "1. Inventory Listing\n";
   cout << "2. Inventory Wholesale Value\n";
   cout << "3. Inventory Retail Value\n";
   cout << "4. Listing by Quantity\n";
   cout << "5. Listing by Cost\n";
   cout << "6. Listing by Age\n";
   cout << "7. Return to the Main Menu\n\n"
   cout << "Enter Your Choice: "
   cin >> choice;

   do {
         cout << "\n\neBookStore Booksellers\n";
         cout << "\t\t\t\t\tReports\n\n";
         cout << "1. Inventory Listing\n";
         cout << "2. Inventory Wholesale Value\n";
         cout << "3. Inventory Retail Value\n";
         cout << "4. Listing by Quantity\n";
         cout << "5. Listing by Cost\n";
         cout << "6. Listing by Age\n";
         cout << "7. Return to the Main Menu\n\n"
         cout << "Enter Your Choice: "
         cin >> choice;
   } while (choice != 1 || choice != 2 || choice != 3 || choice != 4 || choice != 5 || choice != 6 || choice != 7);

   return 0;
}