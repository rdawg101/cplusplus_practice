#include <iostream>

int main() {
    // do while loop = do some block of code first, then repeat again if condition is true
    // think of it as - - - keep doing this action (section of code within loop) as long as condition holds true
    // does action first without checking condition, but checks condition in later iterations onward

    int num;
    

    /*
    std::cout << "Enter a positive number: ";
    std::cin >> num;


    while (num < 0) {
        std::cout << "Enter a positive number: ";
        std::cin >> num;

    }
    */

    do {
        std::cout << "Enter a positive number: ";
        std::cin >> num;

    } while (num < 0);

    std::cout << "The number is " << num;

    return 0;
}