#include <iostream>
//#include "Sales_item.h"

int main() {
    //Sales_item book;

    // read ISBN, number of copies sold, and sales price
    // std::cin >> book;
    
    // write ISBN, number of copies sold, total revenue, and average price
    // std::cout << book << std::endl;

    /*
        If the input to this program is
        0-201-70353-X 4 24.99
        then the output will be
        0-201-70353-X 4 99.96 24.99,
        where 99.96 is the total revenue of selling 4 of those items
    */


    // adding Sales_items
    // Sales_item item1, item2;
    // std::cin >> item1 >> item2; // read a pair of transactions
    // std::cout << item1 + item2 << std::endl; // print their sum

    /*
        If we give this program the following input
        0-201-78345-X 3 20.00
        0-201-78345-X 2 25.00
        our output is
        0-201-78345-X 5 110 22

        checks for same ISBN => if true, add total copies sold
        and sum total profits from each
    */


    /*
        Sales_item item1, item2;
        std::cin >> item1 >> item2;
        // first check that item1 and item2 represent the same book
        if (item1.isbn() == item2.isbn()) {
            std::cout << item1 + item2 << std::endl;;
            return 0; // indicate success
        } else {
            std::cerr << "Data must refer to same ISBN" 
                    << std::endl; 
            return -1; // indicate failure
        }
    
    
    */


    return 0;
}