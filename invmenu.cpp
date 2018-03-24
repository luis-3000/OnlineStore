//
//  invmenu.cpp
//  eBookStore
//
//  Created by Jose Luis Castillo on 02/03/2017.
//  Copyright © 2015 Jose Luis Castillo. All rights reserved.
//

#include <stdio.h>
#include "invmenu.h"
#include <string>
#include <iostream>
using namespace std;

// variables to hold store items information
char itemName[20][50];
char itemIDNumber[20][14];
char itemDescription[28][31]

// Global variables to hold books' data
   char bookTitle[20][51];
   char isbn[20][14];
   char author[20][31];
   char publisher[20][31];
   char dateAdded[20][11];
   int qtyOnHand[20];
   double wholesale[20];
   double retail[20];

void copyStringIntoArray(char destArray[][], int index, int size, string sourceString, int len) {
   //Iterate through the char array and print out each character
   for(int i = 0; i < size; i++) {
      if(i == index) { // found index where to put data
         for(int j = 0; j < len; j++) {
            destArray[i][j] = sourceString[j];
         }
      }
   }
}   


// Stub functions
void lookUpItem() {
   cout << "Enter the name of the item you are looking for (For example: 'Yoga pants')";
   cin >> itemName;
   cout << "Enter he item's Identification number";
   cin >> itemIDNumber;
   cout << "Enter the item's description";
   cin >> itemDescription;
}

void lookUpBook() {
   cout << "Enter the book's title";
   cin >> bookTitle;
   cout << "Enter the book's ISB: ";
   cin >> isbn;
   cout << "Looking up your book now ... " << endl;
}

// void addBook() {
//    string _title;
//    string _author;
//    string _publisher;
//    string _dateAdded;
//    int _qtyOnHand;
//    double _wholesage;
//    double _retail;

//    cout << "Checking to see if we can add the book to the inventory ... " << endl;

//    /* Code to find the size of an array */
//    //cout << "The size of bookTitle array is: " 
//    //      << sizeof(bookTitle)/sizeof(bookTitle[0]);
   
//    int size = sizeof(bookTitle)/sizeof(bookTitle[0]); // Calculate bookTitle's size
//    for(int i = 0; i < size; i++) {

//       // Check if array is full, cannot store Database
//       if(i == size) { 
//          cout << "No more books can be added to the inventory. Sorry!\n";
//          return;
//       }

//       if(bookTitle[i] == 0 || bookTitle[i] == '\0') { // If empty spot
//          cout << "The book can be added to the inventoy, please provide the pertinent data."
//          // Add the title at this empty index.
//          cout << "Enter the title of the booK: ";
//          cin >> _title;
//          // Copy the string into the index 'i', of size string.length()
//          //bookTitle[i] = _title;
//          copyStringIntoArray(bookTitle, i, _title, _title.length());
         
//          // Also add all other pertinent data at the same index for the
//          // other arrays that will hold data for this book
//          cout << "Enter the ISBN of this book: ";
//          cin >> _isbn;
//          isbn[i] = _isbn;
         
//          cout << "Enter the author of this book: ";
//          cin >> _author;
//          author[i] = _author;

//          cout << "Enter the publisher of this book: ";
//          cin >> _publisher;
//          publisher[i] = _publisher;

//          cout << "Date this book is being added: ";
//          cin >> _dateAdded;   
//          dateAdded[i] = _dateAdded;

//          cout << "Current quantity on hand by adding this book: ";
//          cin >> _qtyOnHand;
//          qtyOnHand[i] = _qtyOnHand;

//          cout << "Enter the wholesale price of this book: ";
//          cin >> _wholesage;
//          wholesale[i] = _wholesage;

//          cout << "Enter the retail price of this book: ";
//          cin >> _retail;         
//          retail[i] = _retail;
//       }

//    }
// }

void editBook() {
   cout << "You can now edit the book you selected: " << endl;
}

void deleteBook() {
   cout << "Deleting the book from your cart ... " << endl;
}


//void invmenu() {
int main() {

   int choice;

   string s = "My life";
   for(int i = 0; i < s.length(); i++) {
      cout << s[i];
   }
   
   int size = s.length();
   int len = s.length();
   char temp[size][size];
   
   //copy string into array
   copyStringIntoArray(temp[size][size], 1,  size, s, len);

   //print array
   for(int i = 0; i < s.length(); i++) {
      for(int j = 0; j < s.length(); j++) {
         cout << temp[i][j];
      }
   }

   // do {
   // 		cout << "\n\teBookStore Booksellers\n";
		 //   cout << "\t\t\tInventory Database\n\n";
		 //   cout << "1. Look Up a Book\n";
		 //   cout << "2. Add a Book\n";
		 //   cout << "3. Edit a Book's Record\n";
		 //   cout << "4. Delete a Book\n";
		 //   cout << "5. Return to the Main Menu\n\n";
		 //   cout << "Enter Your Choice: ";
		 //   cin >> choice;
   //       //Take appropriate actions
   //       switch(choice)
   //       {
   //          case 1: lookUpBook();
   //          break;
   //          case 2: addBook();
   //          break;
   //          case 3: editBook();
   //          break;
   //          case 4: deleteBook();
   //          break;
   //          case 5: cout << "Returnning to the main menu ...\n";
   //          break;
   //          default: cout << "\nPlease enter a number in the range 1-4.\n\n";
   //          break;
   //       }
   // } while (choice != 5);

   return 0;
}

