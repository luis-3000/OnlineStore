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
using namespace std;

int main(int argc, const char * argv[]) {

	const int DATE_SIZE = 11;
	char date[DATE_SIZE]; //8 date character (MM/DD/YYYY) plus the null terminate character '\0'
 	int quantity;
 	string inputIsbn;
 	const int ISBN_SIZE = 14;
 	char ISBN[ISBN_SIZE]; //13 digits plus null terminate character '\0'
 	string inputTitle;
 	const int TITLE_SIZE = 30;
 	char title[TITLE_SIZE]; // long enough for a title 
 	float unitPrice;

	
 	//Accepting input from users:
 	cout << "Enter date of purchase (MM/DD/YYYY): ";
 	cin >> date;
 	string enteredDate = date; // Convert to string for printing
 	
 	cout << "Enter quantity: ";
 	cin >> quantity;
 	

 	cout << "Enter ISBN: ";
 	cin.ignore(); // Ignore any potential leadind white spaces
 	cin.getline(ISBN, ISBN_SIZE); // Save user input directly to char array
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
    //cout << "Qty\tISB\t\tTitle\t\t\tPrice\tTotal\n";
    cout << setw(4) << "Qty" << setw(14) << "ISBN" << setw(15) << "Title" << setw(15) << "Price" << setw(15) << "Total" << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    cout << setprecision(2) << fixed;
    cout << setw(4) << quantity << setw(14) << inputIsbn << setw(15) << inputTitle << setw(11) << "$" << setw(6) << unitPrice << setw(9) << "$" << setw(6)  << subTotal << "\n" << endl; 
    cout << setw(35) << "Subtotal" << setw(24) << "$" << setw(6) << subTotal << endl;
    cout << setw(35) << "Tax" << setw(24) << "$" << setw(7) <<  Tax << endl;
    cout << setw(35) << "Total" << setw(24) << "$" << setw(6) << Total << "\n" << endl;
    cout << "Thank You for Shopping at eBookStore!\n";
 
   return 0;
}

/* SAMPLE RUN OUTPUT SO FAR

Joses-MacBook-Pro:eBookStore joseluiscastillo$ make cashier
c++     cashier.cpp   -o cashier
Joses-MacBook-Pro:eBookStore joseluiscastillo$ ./cashier 
Enter date of purchase (MM/DD/YYYY): 05/07/2017
Enter quantity: 22
Enter ISBN: 13241-41-41
Enter the title of the book: My life
Enter the unit price of the book: 76.67

		eBookStore Booksellers


Date: 05/07/2017

 Qty          ISBN          Title          Price          Total
----------------------------------------------------------------------------
  22   13241-41-41        My life          $ 76.67        $1686.74

                           Subtotal                       $1686.74
                                Tax                       $ 101.20
                              Total                       $1787.94

Thank You for Shopping at eBookStore!
Joses-MacBook-Pro:eBookStore joseluiscastillo$ 

*/