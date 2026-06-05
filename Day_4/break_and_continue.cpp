#include <iostream>

int main() {
    // break = break out of a loop
    // continue = skip current iteration

    for(int i = 1; i <= 20; i++) {
        if (i == 13) {
            //break; // breaks out of loop at index 13, program only prints up to 12 (1-12)
            continue; // skips current iteration - displays all numbers 1-20 except 13 (ends current iteration and goes to the next iteration before running anymore code)
        }
        std::cout << i << "\n";
    }

    return 0;
}