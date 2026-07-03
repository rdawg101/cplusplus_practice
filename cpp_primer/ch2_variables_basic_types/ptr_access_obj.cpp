#include <iostream>

int main() {
    int ival = 42;
    int *p = &ival; // p holds the address of ival; p is a pointer to ival
    std::cout << *p << std::endl; // * yields the object to which p points; prints 42
    std::cout << p << std::endl; // will yield the address of object p points to

    *p = 0; // * yields the obj; we assign a new value to ival through p
    std::cout << *p << std::endl; // prints 0
    // when we assign to *p, we are assigning to the obj to which p points

    return 0;
}