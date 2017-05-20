//
//  invmenu.cpp
//  eBookStore
//
//  Created by Jose Luis Castillo on 02/03/2017.
//  Copyright © 2015 Jose Luis Castillo. All rights reserved.
//

#include <stdio.h>
#include "invmenu.h"
#include <iostream>
using namespace std;

// Stub functions
void lookUpBook() {
   cout << "Looking up your book now ... " << endl;
}

void addBook() {
   cout << "Adding the book you selected to your cart ... " << endl;
}

void editBook() {
   cout << "You can now edit the book you selected: " << endl;
}

void deleteBook() {
   cout << "Deleting the book from your cart ... " << endl;
}

void invmenu() {
//int inventory(int choice) {
   int choice;
   cout << "\neBookStore Booksellers\n";
   cout << "\t\tInventory Database\n\n";
   cout << "1. Look Up a Book\n";
   cout << "2. Add a Book\n";
   cout << "3. Edit a Book's Record\n";
   cout << "4. Delete a Book\n";
   cout << "5. Return to the Main Menu\n\n";
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
      default: cout << "\nPlease enter a number in the range 1-4.\n\n";
      break;
   }

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
            default: cout << "\nPlease enter a number in the range 1-4.\n\n";
            break;
         }
   } while (choice != 5);


}

