//
//  mainmenu.cpp
//  eBookStore
//
//  Created by Jose Luis Castillo on 10/7/15.
//  Copyright © 2015 Jose Luis Castillo. All rights reserved.
//

#include <stdio.h>

#include "iostream"
using namespace std;

int main(int argc, const char * argv[]) {
   int choice;
   cout << "eBookStore Booksellers\n";
   cout << "        Main Menu\n\n";
   cout << "1. Cashier Module.\n";
   cout << "2. Inventory Database Module.\n";
   cout << "3. Report Module.\n";
   cout << "4. Exit.\n\n";
   cout << "Enter Your Choice: ";
   cin >> choice;

   do {
   		   cout << "eBookStore Booksellers\n";
		   cout << "        Main Menu\n\n";
		   cout << "1. Cashier Module.\n";
		   cout << "2. Inventory Database Module.\n";
		   cout << "3. Report Module.\n";
		   cout << "4. Exit.\n\n";
		   cout << "Enter Your Choice: ";
		   cin >> choice;
   } while (choice != 1 || choice != 2 || choice != 3 || choice != 4);

   return 0;
}