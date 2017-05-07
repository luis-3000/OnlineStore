//
//  cashier.cpp
//  eBookStore
//
//  Created by Jose Luis Castillo on 02/03/17.
//  Copyright © 2017 Jose Luis Castillo. All rights reserved.
//

#include <stdio.h>
#include <iomanip>
#include "iostream"
using namespace std;

int main(int argc, const char * argv[]) {

	char date[11]; //8 date character (MM/DD/YYYY) plus the null terminate character '\0'
 	int quantity;
 	char ISBN[14]; //13 digits plus null terminate character '\0'
 	char title[30]; // long enough for a title 
 	float unitPrice;

 	//Accepting input from users:
 	cout << "Enter date of purchase (MM/DD/YYYY): ";
 	cin >> date;
 	string enteredDate = date; // Convert to string for printing
 	
 	cout << "Enter quantity: ";
 	cin >> quantity;
 	
 	cout << "Enter ISBN: ";
 	cin >> ISBN;
 	string enteredIsbn = ISBN;

 	cout << "Enter the title of the book: ";
 	cin >> title;

 	
 	cout << "Enter the unit price of the book: " << endl;
 	cin >> unitPrice;
 	//getline(in, unitPrice);



 	cout << "\nDate: " << enteredDate << endl;
 	cout << "Quantity: " << quantity << endl;
 	cout << "ISBN: " << enteredIsbn << endl;
 	string enteredTitle = title; // convert to string for printing 
 	cout << "Title: " << enteredTitle << endl;
 	cout << "Price: $" << unitPrice << " per book." << endl;


    cout << "\n\t\teBookStore Booksellers\n\n\n";
    cout << "Date:\n\n";
    cout << "Qty\tISB\t\tTitle\t\t\tPrice\tTotal\n";
    cout << "-------------------------------------------------------------\n\n\n\n";
    cout << "\t\tSubtotal\n";
    cout << "\t\tTax\n";
    cout << "\t\tTotal\n\n";
    cout << "Thank You for Shopping at eBookStore!\n";
 
   return 0;
}