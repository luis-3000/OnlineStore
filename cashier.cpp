//
//  cashier.cpp
//  eBookStore
//
//  Created by Jose Luis Castillo on 02/03/17.
//  Copyright © 2017 Jose Luis Castillo. All rights reserved.
//

#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <string>
#include <algorithm>
#include "cashier.h"
using namespace std;

void cashier() {

	const int DATE_SIZE = 11;
	char date[DATE_SIZE]; //8 date character (MM/DD/YYYY) plus the null terminate character '\0'
 	int quantity;
 	string inputIsbn;
 	const int ISBN_SIZE = 14;  //13-digits ISBN, plus null terminate character '\0'
 	char ISBN[ISBN_SIZE]; 
 	string inputTitle;
 	const int TITLE_SIZE = 30;
 	char title[TITLE_SIZE]; // long enough for a title 
 	float unitPrice;

  string anotherTransaction = "No";

  do {
   	//Accepting input from users:
   	cout << "Enter date of purchase (MM/DD/YYYY): ";
   	cin >> date;
   	string enteredDate = date; // Convert to string for printing
   	
   	cout << "Enter quantity: ";
   	cin >> quantity;
   	

   	cout << "Enter ISBN: ";
   	cin.ignore(); // skip the newline character if the previous line 'Enter' key press
   	cin.getline(ISBN, ISBN_SIZE); // Save user input directly to char array, a maximum of ISBN_SIZE characters
   	// convert to string for printing
   	inputIsbn = ISBN;
  	//std::getline(std::cin, inputIsbn);
   	// Now, sve the inputIsbn as a character array
   	//strcpy(ISBN, inputIsbn.c_str());
   	

   	cout << "Enter the title of the book: ";
   	//cin >> inputTitle; // Won't work since it only accepts a word not a line of strings
   	getline(cin, inputTitle);

   	// Now, save the string as a character array
   	strcpy(title, inputTitle.c_str());

   	/*
   	// Print contents fo the character array for the title
   	cout << "For debugging. Printing the contents of the character array for the title: " << endl;
   	for (char c : title)
   		cout << c;
   	cout << endl;
   	*/

   	cout << "Enter the unit price of the book: ";
   	cin >> unitPrice;

   	/*
   	// Print the information the user entered (for debugging only)
   	cout << "Date: " << enteredDate << endl;
   	cout << "Quantity: " << quantity << endl;
   	cout << "ISBN: " << inputIsbn << endl;
   	cout << "Title: " << inputTitle << endl;
   	cout << "Price: $" << unitPrice << " per book." << endl;
  	*/

  	float subTotal = quantity * unitPrice;
  	float Tax = subTotal * 0.06;
  	float Total = subTotal + Tax;

    cout << "\n\t\teBookStore Booksellers\n\n\n";
    cout << "Date: " << enteredDate << "\n\n";
    cout << setw(4) << "Qty" << setw(14) << "ISBN" << setw(15) << "Title" << setw(15) << "Price" << setw(15) << "Total" << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << setw(4) << quantity << setw(14) << inputIsbn << setw(15) << " " << inputTitle << setw(11) << "$" << setw(6) << unitPrice << setw(9) << "$" << setw(6)  << subTotal << "\n" << endl; 
    cout << setw(35) << "Subtotal" << setw(24) << "$" << setw(6) << subTotal << endl;
    cout << setw(35) << "Tax" << setw(24) << "$" << setw(6) <<  Tax << endl;
    cout << setw(35) << "Total" << setw(24) << "$" << setw(6) << Total << "\n" << endl;
    cout << "Thank You for Shopping at eBookStore!\n";

  cout << "Do you need to process another transaction? ";
  cin.ignore();
  getline(cin, anotherTransaction);
  std:transform(anotherTransaction.begin(), anotherTransaction.end(), anotherTransaction.begin(), ::tolower);
  //cout << "checking 'anotherTransaction' value: " << anotherTransaction << endl;
  cout << "--------------------------------------------------------------------------------\n"  << endl;
  
  } while (anotherTransaction != "no");

  
}

/* SAMPLE RUN OUTPUT SO FAR

Joses-MacBook-Pro:eBookStore joseluiscastillo$ ./cashier 
Enter date of purchase (MM/DD/YYYY): 05/18/2017
Enter quantity: 12
Enter ISBN: 14312-412-5
Enter the title of the book: Ce la vie
Enter the unit price of the book: 19.90

    eBookStore Booksellers


Date: 05/18/2017

 Qty          ISBN          Title          Price          Total
----------------------------------------------------------------------------
  12   14312-412-5               Ce la vie          $ 19.90        $238.80

                           Subtotal                       $238.80
                                Tax                       $ 14.33
                              Total                       $253.13

Thank You for Shopping at eBookStore!
Do you need to process another transaction? yes
--------------------------------------------------------------------------------

Enter date of purchase (MM/DD/YYYY): 05/18/2017
Enter quantity: 40
Enter ISBN: 123-44-45
Enter the title of the book: Calculus I
Enter the unit price of the book: 34.56

    eBookStore Booksellers


Date: 05/18/2017

 Qty          ISBN          Title          Price          Total
----------------------------------------------------------------------------
  40     123-44-45               Calculus I          $ 34.56        $1382.40

                           Subtotal                       $1382.40
                                Tax                       $ 82.94
                              Total                       $1465.34

Thank You for Shopping at eBookStore!
Do you need to process another transaction? No
--------------------------------------------------------------------------------

Joses-MacBook-Pro:eBookStore joseluiscastillo$ 

*/