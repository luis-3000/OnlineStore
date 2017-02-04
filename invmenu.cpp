//
//  invmenu.cpp
//  eBookStore
//
//  Created by Jose Luis Castillo on 02/03/2017.
//  Copyright © 2015 Jose Luis Castillo. All rights reserved.
//

#include <stdio.h>

#include "iostream"
using namespace std;

int main(int argc, const char * argv[]) {
   int choice;
   cout << "eBookStore Booksellers\n";
   cout << "\t\t\tInventory Database\n\n";
   cout << "1. Look Up a Book\n";
   cout << "2. Add a Book\n";
   cout << "3. Edit a Book's Record\n";
   cout << "4. Delete a Book\n";
   cout << "5. Return to the Main Menu\n\n";
   cout << "Enter Your Choice: ";
   cin >> choice;

   do {
   		   cout << "eBookStore Booksellers\n";
		   cout << "\t\t\tInventory Database\n\n";
		   cout << "1. Look Up a Book\n";
		   cout << "2. Add a Book\n";
		   cout << "3. Edit a Book's Record\n";
		   cout << "4. Delete a Book\n";
		   cout << "5. Return to the Main Menu\n\n";
		   cout << "Enter Your Choice: ";
		   cin >> choice;
   } while (choice != 1 || choice != 2 || choice != 3 || choice != 4 || choise != 5);

   return 0;
}