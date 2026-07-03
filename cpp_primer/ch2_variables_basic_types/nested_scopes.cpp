#include <iostream>

/*
    program just for teaching purposes
    (bad style for a function to use a global variable and
    also define a local variable with the same name)

*/

int reused = 42; // reused has global scope (can be used anywhere in the program)
int main() {
    int unique = 0; // has block scope only

    // uses global scope reused and block scope unique (42 0)
    std::cout << reused << " " << unique << std::endl; 

    int reused = 0; // new, local obj named reused hides global reused (program will prioritize local scope over global)

    // uses block scopes reused and unique (0 0)
    std::cout << reused << " " << unique << std::endl;

    // explicitly requests the global reused by using the prefix :: (42 0)
    std::cout << ::reused << " " << unique << std::endl;

    return 0;
}