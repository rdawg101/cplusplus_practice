#include <iostream>
#include <ctime> // need access to time function

int main() {
    // working with PSUEDO-RANDOM NUMBERS = NOT truly random (but close)

    // need to initialize the random number generator
    srand(time(NULL)); // input seed -- common for programmers to use the current calendar time as a seed (time(NULL))

    //int num = rand(); // initial range is too large, want the random numbers generated to be in a smaller range
    //int num  = rand() % 6; // take whatever number we roll, divide by 6 (or any constant - in this case, the context is a 6-sided dice), 
    // take the remainder and that's our number
    // however, the initial range is technically 0-5 as of right now!!

    // to fix this, just add 1
    int num = (rand() % 6) + 1; // will now give us a number from 1-6

    // if working with different number sided dice or different number ranges, just change constant after % 
    // so instead of % 6, you can do % 8, % 10, % 12, % 20, % 100, etc....

    std::cout << num << '\n';

    // wanna roll THREE 6-sided dice
    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';

    return 0;
}