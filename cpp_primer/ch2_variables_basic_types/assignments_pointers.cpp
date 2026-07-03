#include <iostream>

int main() {
    int i = 42;
    int *pi = 0; // pi initialized but addresses no obj (null)
    int *pi2 = &i; // pi2 initialized to hold the address of i
    int *pi3; // if pi3 is defined inside a block, pi3 is uninitialized

    pi3 = pi2; // pi3 and pi2 address the same object (i)
    pi2 = 0; // pi2 now addresses no obj

    //pi = &ival; // we assign a new value to pi, which changes the address that pi holds
    *pi = 0; // *pi (the value which pi points to) is changed

    return 0;
}