#include <iostream>

int main() {
    // nested loop - just means a loop that's inside another loop (can be a while loop, for loop, etc.)

    /*
    for (int i = 1; i <= 3; i++) { // runs the for loop inside 3 times
        for (int j = 1; j <= 10; j++) { // counts to 10
            std::cout << j << ' ';
        }
        std::cout << '\n';

    }
    */

    int rows;
    int columns;
    char symbol;

    std::cout << "How many rows?: ";
    std::cin >> rows;
    std::cout << "How many columns?: ";
    std::cin >> columns;

    std::cout << "Enter a symbol to use: ";
    std::cin >> symbol;

    // reuse and modify previous nested loop (outer loop controls rows, inner loop controls columns)
    for (int i = 1; i <= rows; i++) { // i index controls rows
        for (int j = 1; j <= columns; j++) { // j index controls columns
            std::cout << symbol << ' '; // instead of printing j (the num), print the user's desire symbol
        }
        std::cout << '\n';
    }

    return 0;
}