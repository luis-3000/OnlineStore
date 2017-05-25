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

// Global variables to hold books' data
   char bookTitle[20][51];
   char isbn[20][14];
   char author[20][31];
   char publisher[20][31];
   char dateAdded[20][11];
   int qtyOnHand[20];
   double wholesale[20];
   double retail[20];

// Stub functions
void lookUpBook() {
   cout << "Looking up your book now ... " << endl;
}

void addBook(string _title, string _author, string _publisher, string _dateAdded,
                     int _qtyOnHand, double _wholesage, double _retail) {
   //cout << "Adding the book you selected to your cart ... " << endl;
   //cout << "The size of bookTitle array is: " 
   //      << sizeof(bookTitle)/sizeof(bookTitle[0]);
   int size = sizeof(bookTitle)/sizeof(bookTitle[0]);
   for(int i = 0; i < bookTitle.size; i++) {
      if(bookTitle[i] == 0 || bookTitle[i] == '\0') { // If empty spot
         // Add the title at this empty index.
         bookTitle[i] = _title;
         // Also add all other pertinent data at the same index for the
         // other arrays that will hold data for this book
         isbn[i] = _isbn;
         author[i] = _author;
         publisher[i] = _publisher;
         dateAdded[i] = _dateAdded;
         qtyOnHand[i] = _qtyOnHand;
         wholesale[i] = _wholesage;
         retail[i] = _retail;
      }
      if(i == size) { // full array, cannot store Database
         cout << "No more books can be added to the inventory. Sorry!\n";
         return;
      }
   }
}

void editBook() {
   cout << "You can now edit the book you selected: " << endl;
}

void deleteBook() {
   cout << "Deleting the book from your cart ... " << endl;
}


//void invmenu() {
int main() {

   int choice;

   do {
   		cout << "\n\teBookStore Booksellers\n";
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
            case 1: lookUpBook();
            break;
            case 2: addBook();
            break;
            case 3: editBook();
            break;
            case 4: deleteBook();
            break;
            case 5: cout << "Returnning to the main menu ...\n";
            break;
            default: cout << "\nPlease enter a number in the range 1-4.\n\n";
            break;
         }
   } while (choice != 5);

   //return 0;
}

