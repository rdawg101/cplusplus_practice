#include <iostream>


int main() {
    unsigned u = 10;
    int i = -42;
    std::cout << i + i << std::endl; // will print -84
    std::cout << u + i << std::endl; // if 32-bit ints, prints 4294967264 (it is, in fact, 32-bit ints)

    unsigned u1 = 42, u2 = 10;
    std::cout << u1 - u2 << std::endl; // 42-10 = 32 no problems here :D
    std::cout << u2 - u1 << std::endl; 
    // if you try to subtract a bigger number from smaller number (unsigned), instead of negative
    // it "wraps around" => giving you the output 4294967264

    for (int i = 10; i >= 0; i--) { // this will stop once it gets to less than 0 (-1)
        std::cout << i << std::endl;
    }

    /*
    for (unsigned u = 10; u >= 0; u--) { // this will NEVER STOP => wraps around after 0 to the biggest possible positive number (will always be greater than 0)
        std::cout << u << std::endl
    
    }
    */

    // to write the loop above so it works ^ we can use a while loop instead of a for loop
    unsigned z = 11; // start loop ONE past the first element we want to print
    while (z > 0) { // makes sure loop stops AT 0 => gets rid of the chances of the loop wrapping around
        z--;    // decrement first, so that the last ieration will print 0
        std::cout << z << std::endl;
    }
    // when z reaches 1, decrements by 1 and prints out 0
    // when z is @ 11, prints out 10
    // 10-0 are printed
    return 0;
}