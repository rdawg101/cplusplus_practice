#include <iostream>

int main() {
    // for loops - better for scenarios when you're supposed to loop only a CERTAIN NUMBER of times compared to while loops that loop indefinitely until
    // a condition is met

    /*
    for(int i = 1; i <= 5; i++) {
        std::cout << "HAPPY NEW YEAR!\n";
    }
    */

    /*
    for(int i = 1; i <= 10; i++) {
        std::cout << i << "\n";
    }
    */

    for(int i = 0; i <= 10; i+=2) { // can increment or decrement i by any number, not just one ++ --
        std::cout << i << "\n";
    }
    

    std::cout << "HAPPY NEW YEAR!!!\n";

    return 0;
}