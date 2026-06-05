#include <iostream>
#include <ctime> // need access to time function

int main() {
    // creating a random event generator using RANDOM NUMBERS and SWITCHes
    srand(time(0)); // uses current time as a seed to generate random numbers
    int randNum = (rand() % 5) + 1;

    switch(randNum) {
        case 1: std::cout << "You win a bumper sticker!\n";
                break; // without break statements, you would just fall through the switch - goes to the case that happens, and any case afterwards also happens
                // if case 3 happens and there's no break statements afterward, case 4 and 5 will also execute
                // break - exits out of function, whether it be switch or a loop
        case 2: std::cout << "You win a t-shirt!\n";
                break;
        case 3: std::cout << "You win a free lunch!\n";
                break;
        case 4: std::cout << "You win a gift card!\n";
                break;
        case 5: std::cout << "You win concert tickets to Slayr!\n";
                break;

    }

    return 0;
}