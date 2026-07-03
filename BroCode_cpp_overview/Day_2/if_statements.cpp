#include <iostream>

int main() {
    /*
        if statements = do something if a condition is true
        if not, then don't do it

    */
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 100) {
        std::cout << "Holy fuck, you're just dust bro. You're too old to come in gng, sorry... \n";
    }
    else if (age >= 18) {
        std::cout << "You are an adult! Holy unc status. Come right in! \n";
    }
    else if (age < 0) {
        std::cout << "Yo how tf are you even here? You haven't even been born yet! \n";
    }
    else {
        std::cout << "You are a minor! You ain't old enough to get in, go to Weenie Hut Jr. instead! \n";
    }


    return 0;
}