//
//  main.cpp
//  eBookStore
//
//  Created by Jose Luis Castillo on 10/4/15.
//  Copyright © 2015 Jose Luis Castillo. All rights reserved.
//

/* eBookStore is a small bookstore. There is a cashier station equipped with a computer. 
 * I need to develope a software package that will serve as the point-of-sale. This will make the computer
 * function as the cash register and keep an inverntoty file. The inverntoty file willbe a database of all 
 * the books in the bookstore.
 * 
 * The software is to perform the following tasks:
 * - Calculate the total of a sale, including sales tax
 * - Wehn a book is purchased, subtract it from the store's inverntory file
 * - Adds, changes, deletes and looks up books in the inverntory file
 * - Displays various reports
 * - Other functionalities will be added as needed in the future. 
 *
 * The software will be organized into three modules:
 * - A cashier module
 * - An inventory Database module
 * - A report module
 *
 * When the software is run, the user will be shown a meny on the screen, whch allows him or her to activate
 * any of the modules.
 *
 * Cashier Module:
 * --------------
 *     This module will allow the computer to act as a cash register. The user will enter information for the
 * books being purchased and thr program calculates the sales tax and the total price. In addition, the books
 * beign purchased are automatically subtracted from the Inventory Database.
 *
 * Inverntory Database Module:
 * --------------------------
 *     This will be a file containing a list of all the books in inventory. The following will be the 
 * information stored in the file for each book:
 * - ISBN               The International Standard Book Number, which is a unique number assigned to each book 
 *                      by the publisher.
 * - Title              The book's title.
 * - Author             The book's author.
 * - Publisher          The company that published the book in question.
 * - Date added         When the book was added to the inventory.
 * - Quantity-ON-Hand   Number of copies for each book currently in the inventory.
 * - Wholesale Cost     The price paid by this store for each copy of each book in question.
 * - Retail Price       The price being charged to each customer for each copy of the book in question.
 *
 * This module will allow the user to look up information on any book in the file, add new books to the file, 
 * delete books, and change any inforamtion int the database.
 *
 *
 * Report Module:
 * -------------
 * This module will analyze the information in the Inventory Database to produce any of the requested reports 
 * below:
 * - Inventory List - A list of information on all books in the inventory
 * - Inventory Wholesale Value - A list of the wholsesale value of all book s in the inventory and the total wholsesale value of the inventory.
 * - Inventory Retail Value - A list of the retail value of all books in the inverntory and the total retail value of the inventory.
 * - Lis by Quantity - A list of all boks in the inventory sorted by quantity on hand. The books with the greatest quantity on hand will be liststed first.
 * - List by Cost - A list of all books in the inverntory, sorted by wholsesale cost. The books with the greatest wholesale cost will be listed first.
 * - List by Age - A list of all books in the inventory, sorted by purchase date. The books that have been in the inventory longerst will be listed first. s    
 */

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World in C++ !!!\n";
    return 0;
}
