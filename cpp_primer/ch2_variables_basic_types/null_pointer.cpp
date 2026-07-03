#include <iostream>
#include <cstdlib>

int main() {
    int *p1 = nullptr; // equivalent to in *p1 = 0;
    int *p2 = 0; // directly initializes p2 from the literal constant 0
    // must #include cstdlib
    int *p3 = NULL; // equivalent to int *p3 = 0;

    int zero = 0;
    //p1 = zero; // ERROR: cannot assign an int to a pointer


    return 0;
}