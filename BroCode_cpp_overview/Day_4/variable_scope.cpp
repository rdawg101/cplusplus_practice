#include <iostream>

int myNum = 3; // can be accessed from any scope

void printNum();

int main() {
    // Local variables = declared inside a function or block {}
    // Global variables = declared outside of all functions 


    //int myNum = 1; // it is legal/allowed to reuse variable name, as long as it's used in a different scope 
    // can use the same name 'myNum' in multiple different local variables once or for a global variable
    std::cout << myNum << '\n';
    printNum();

    return 0;
}

void printNum() {
    //int myNum = 2; // different scope, can be named 'myNum' as well
    std::cout << myNum; // myNum is unknown - only can be seen in the local function it was declared
}

// IMPORTANT ********
// functions will focus on LOCAL VARIABLES first (they will have priority over global variables)
// so if myNum was initialized in global and in each scope/fxn, myNum would be equal to whatever it was
// initialized with in their scopes/fxns first, if not initialized to anything then they are set to
// the global variable's value
// IF YOU SPECIFICALLY WANT TO USE THE GLOBAL VARIABLE OVER THE LOCAL VARIABLE THAT'S DECLARED
// use the scope resolution operator prefix (::) - EXAMPLE:  ::myNum (uses the global version of myNum)

// Try to avoid using global variables when you can - pollutes global namespace and these variables are LESS SECURE