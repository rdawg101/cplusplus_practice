#include <iostream>

int main() {
    // memory address = a location in memory where data is stored 
    // a memory address can be accessed with a & (address-of operator)
    std::string name = "Bro";
    int age = 21;
    bool student = true;

    std::cout << &name << '\n'; // will change everytime you run the program
    std::cout << &age << '\n';
    std::cout << &student << '\n';
    // outputs a hexadecimal representing the memory address of the variable - can find tools online to convert hexadecimal to decimal
    // distances between variables explained by their dtype sizes!!!!!

    return 0;
}