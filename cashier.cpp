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

 	cout << "Enter the unit price of the book: " << endl;
 	cin >> unitPrice;

 	// Print the information the user entered
 	cout << "Date: " << enteredDate << endl;
 	cout << "Quantity: " << quantity << endl;
 	cout << "ISBN: " << inputIsbn << endl;
 	cout << "Title: " << inputTitle << endl;
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

/* SAMPLE RUN OUTPUT SO FAR

Joses-MacBook-Pro:eBookStore joseluiscastillo$ make cashier
c++     cashier.cpp   -o cashier
Joses-MacBook-Pro:eBookStore joseluiscastillo$ ./cashier 
Enter date of purchase (MM/DD/YYYY): 05/07/2017
Enter quantity: 10
Enter ISBN: 43234-412-4
Enter the title of the book: my life
Enter the unit price of the book: 
90.43
Date: 05/07/2017
Quantity: 10
ISBN: 43234-412-4
Title: my life
Price: $90.43 per book.

		eBookStore Booksellers


Date:

Qty	ISB		Title			Price	Total
-------------------------------------------------------------



		Subtotal
		Tax
		Total

Thank You for Shopping at eBookStore!
Joses-MacBook-Pro:eBookStore joseluiscastillo$ 

*/