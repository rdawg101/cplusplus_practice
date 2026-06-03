#include <iostream>
#include <string>

int main() {
    // while loop - keeps loop going as long as condition holds true

    std::string name;

    if (name.empty()) {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    } 
    
    std::cout << "Hello " << name;

    return 0;
}