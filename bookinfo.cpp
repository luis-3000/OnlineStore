// bookinfo.cpp
// Author: Jose Luis Castillo
// Date: 02/03/2017

#include <stdio.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

//Function prototypes
int main();
void bookInfo(char [], char [], char [], char[], char[], int , double, double);
void display(char [], int);

int main() {
   char isbn[14] = {'1', '2', '3', '-', '5', '6', '7', '-', '9', '0', '1', '2', '3', '4'};
   char bookTitle[51] = {'L', 'i', 'f', 'e'};
   char author[31] = {'T', 'h', 'e', ' ', 'a', 'u', 't', 'h', 'o', 'r'};
   char publisher[31] = {'O', '\'', 'R', 'a', 'i', 'l', 'l', 'y'};
   char date[11] = {'0', '5', '/', '2', '3', '/', '2','0', '1', '7'};
   int quantity = 21;
   double wholesale = 19.65;
   double retail = 20.00;

   bookInfo(isbn, bookTitle, author, publisher, date, quantity, wholesale, retail);
   // char a[3] = {'a', ' ', 'c'};
   // for(int i = 0; i < 3; i++) {
   //    cout << a[i];
   // }
   // cout << endl;
   return 0;
}

void bookInfo (char _isbn[14], char _bookTitle[51], char _author[31], char _publisher[31], 
                               char _date[11], int _qty, double _wholesale, double _retail) {

   cout << "\n\t\teBookStore Booksellers\n";
   cout << "\t\t   Book Information\n\n";
   cout << "ISBN: "; display(_isbn, 14); cout << "\n";
   cout << "Title: "; display(_bookTitle, 51); cout << "\n";
   cout << "Author: "; display(_author, 31); cout << "\n";
   cout << "Publisher: "; display(_publisher, 31); cout << "\n";
   cout << "Date Added: "; display(_date, 11); cout << "\n";
   cout << "Quantity-On-Hand: " << _qty << "\n"; 
   cout << fixed << showpoint << setprecision(2);
   cout << "Wholesale Cost: " << _wholesale << "\n";
   cout << "Retail Price: " << _retail << "\n";
}

void display(char containerToDisplay[], int size) {
   //Iterate through the char array and print out each character
   for(int i = 0; i < size; i++) {
      cout << containerToDisplay[i];
   }
}