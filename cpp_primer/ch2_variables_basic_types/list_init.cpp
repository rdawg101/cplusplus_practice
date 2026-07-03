#include <iostream>

int main() {
    // different ways to initialize lists
    //int units_sold = 0;
    int units_sold = {0}; // most prominent way
    //int units_sold{0};
    //int units_sold(0);

    long double ld  = 3.1415926536;
    //int a{ld}, b = {ld}; // error: narrowing conversion required, going from long double to int, will lead to error due to potential loss of info
    int c(ld), d = ld; // ok, BUT value will be truncated


    return 0;
}