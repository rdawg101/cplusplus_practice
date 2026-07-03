#include <iostream>

int main() { // main defined outside any curly braces - global scope
    int sum = 0; // block scope - can only be accessed within the main fxn due to being declared within it
    // sum values from 1 - 10 inclusive
    for (int val = 1; val <= 10; val++) { // val: only in the scope of the for loop
        sum += val; 
    }
    std::cout << "Sum of 1 to 10 inclusive is " 
            << sum << std::endl;

    return 0;
}