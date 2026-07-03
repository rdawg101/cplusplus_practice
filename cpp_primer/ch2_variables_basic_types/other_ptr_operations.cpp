#include <iostream>

int main() {
    int ival = 1024;

    int *pi = 0; // pi is a valid, null ptr
    int *pi2 = &ival; // pi2 is a valid ptr that holds the address of ival

    if (pi) { // pi has value 0, so condition evaluates as false
        // ...
    }
    if (pi2) { // pi2 points to ival, so not 0; condition evaluates as true
        // ...
    }

    return 0;
}