//
//  mainmenu.cpp
//  eBookStore
//
//  Created by Jose Luis Castillo on 10/7/15.
//  Copyright © 2015 Jose Luis Castillo. All rights reserved.
//

#include <stdio.h>
#include "cashier.cpp"
#include "bookinfo.cpp"
#include "invmenu.cpp"
#include "reports.cpp"
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

   int choice = 0;
   cout << "\n     OnlineStore\n";
   cout << "        Main Menu\n\n";
   cout << "1. Cashier Module.\n";
   cout << "2. Inventory Database Module.\n";
   cout << "3. Report Module.\n";
   cout << "4. Exit.\n\n";
   cout << "Enter Your Choice: ";
   cin >> choice;
   //Take appropriate actions
   switch(choice)
   {
      case 1: cashier(); //cout << "You selected item  1.\n";
      break;
      case 2: invmenu(); //cout << "You selected item  2.\n";
      break;
      case 3: reports(); //cout << "You selected item  3.\n";
      break;
      case 4: cout << "Exiting now ... "; //"You selected item  4.\n";
      break;
      default: cout << "\nPlease enter a number in the range 1-4.\n\n";
      break;
   }

   do {
   		cout << "       OnlineStore\n";
		   cout << "        Main Menu\n\n";
		   cout << "1. Cashier Module.\n";
		   cout << "2. Inventory Database Module.\n";
		   cout << "3. Report Module.\n";
		   cout << "4. Exit.\n\n";
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
            default: cout << "\nPlease enter a number in the range 1-4.\n\n";
            break;
         }
   } while (choice != 4);

   return 0;
}