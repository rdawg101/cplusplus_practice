#include <iostream>

void swap(std::string x, std::string y); // swap fxn declaration - pass by value

void swap_ref(std::string &x, std::string &y); // pass by reference

int main() {
    // differences between pass by value AND pass by reference

    // FIRST EXAMPLE: SWAPPING TWO VARIABLES
    // imagine two cups
    std::string x = "Kool-Aid";
    std::string y = "Water";

    // pasted this code in the swap function
    /*
    std::string temp;

    temp = x;
    x = y;
    y = temp;
    */
    swap(x, y); // when we pass a variable to a function, we are PASSING BY VALUE - meaning, we're creating copies of the original values
    // after this function, we will have 2 copies of x and 2 copies of y
    // we end up only switching the 2 copies of each x and y rather than switching the actual values between x and y
    std::cout << "X: " << &x << '\n'; // should now output Water
    std::cout << "Y: " << &y << '\n'; // should now output Kool-Aid


    // to actually switch the values, we need to PASS BY REFERENCE
    swap_ref(x, y);

    std::cout << "X: " << x << '\n'; // should now output Water
    std::cout << "Y: " << y << '\n'; // should now output Kool-Aid



    return 0;
}

// create a function to swap 2 variables for us instead
void swap(std::string x, std::string y) {
    std::string temp;
    temp = x;
    x = y;
    y = temp;
    std::cout << "X: " << &x << '\n'; // this is to show we only swap the values for the x and y copies, not for the original x and y values from the local scope of main
    std::cout << "Y: " << &y << '\n'; 
}

// create a function to swap 2 variables for us instead
// we pass memory addresses where the original x and y variables are located and swapping the values
void swap_ref(std::string &x, std::string &y) { // prefix the "address of" operator (&) for the parameters
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}

// we want to use PASS BY REFERENCE - always remember to prefix the address of operator (&)