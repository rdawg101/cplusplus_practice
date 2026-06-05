#include <iostream>
#include <string>

int main() {
    // while loop - keeps loop going as long as condition holds true

    std::string name;

    // doesn't make sure that the input that the user puts is an empty string
    /*
    if (name.empty()) {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    } 
    */

    // while loop to constantly check if name is empty - will continue to prompt user for a name
    while (name.empty()) {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }
    // so, if you keep pressing 'Enter' with an empty string for the name, the user will still be prompted to enter their name (as name is still empty)

    std::cout << "Hello " << name;

    return 0;
}