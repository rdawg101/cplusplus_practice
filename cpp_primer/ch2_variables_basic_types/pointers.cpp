#include <iostream>

int main() {
    int *ip1, *ip2; // ip1 and ip2 are pointers to int
    double dp, *dp2; // dp2 is a pointer to double; dp is a double

    int ival = 42;
    int *p = &ival; // p holds the address of ival; p is a pointer to ival

    double dval;
    double *pd = &dval; // initializer is the address of a double
    double *pd2 = pd; // initializer is a pointer to double 

    //int *pi = pd; // ERROR: types of pi and pd differ
    //pi = &dval; // ERROR: assigning the address of a double to a pointer to int

    return 0;
}