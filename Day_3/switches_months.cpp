#include <iostream>

int main() {
    /*
        switches are an alternative to using many else if statements
        - you compare one value against matching cases

    */

    int month;
    std::cout << "Enter the month number (1-12): ";
    std::cin >> month;

    // instead of using a bunch of if, else if, and else statements, we can use a switch statement
    // much more efficient and easier to read

    switch(month) {
        case 1: 
            std::cout << "It is January"; 
            break;
        case 2: 
            std::cout << "It is February"; 
            break;
        case 3: 
            std::cout << "It is March"; 
            break;
        case 4: 
            std::cout << "It is April"; 
            break;
        case 5: 
            std::cout << "It is May"; 
            break;
        case 6: 
            std::cout << "It is June"; 
            break;
        case 7: 
            std::cout << "It is July"; 
            break;
        case 8: 
            std::cout << "It is August"; 
            break;
        case 9: 
            std::cout << "It is September"; 
            break;
        case 10: 
            std::cout << "It is October"; 
            break;
        case 11: 
            std::cout << "It is November"; 
            break;
        case 12: 
            std::cout << "It is December"; 
            break;
        // no matching cases? can use DEFAULT case instead
        default:
            std::cout << "Please enter a valid month number (1-12, inclusive)";
            break;

    }

    return 0;
}