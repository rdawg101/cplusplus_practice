#include <iostream>


void happyBday(std::string bdayPerson, int age); //  can use this function as long as it's defined anywhere within the file
// doesn't matter what order - can be before the main function or after

int main() {
    // function = a block of reusable code

    std::string name = "Ronald";
    int age = 22;

    // to use a function, you have to call a function - think of parenthesis as a pair of phones calling each other
    happyBday(name, age);
    

    return 0;
}

// function name should be descriptive of what it does
void happyBday(std::string bdayPerson, int age) { // have matching parameters to whatever dtype you're intending to pass through into the function - can rename parameters though
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday to dear " << bdayPerson <<  "!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "You are " << age << " years old!!! Holy unc status. \n";
}

// think of functions like houses - functions can't see what's going on in other functions
// which is why we can't use name at first
// we can pass the string var 'name' as an argument instead - also do it with age as well
// can pass different dtypes into function parameters to be used within a function
