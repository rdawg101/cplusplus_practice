#include <iostream>

int main() {
    /*
        && = check if 2 conditions are true - AND
        || = check if AT LEAST ONE of two conditions is true - OR
        !  = reverses the logical state of its operand - NOT
    
    */

    int temp; // in Celsius
    bool sunny = true;
    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    // AND (&&) OPERATOR
    /*
    if (temp > 0 && temp < 30) {
        std::cout << "The temperature is good!\n";
    }
    else {
        std::cout << "The temperature is bad!\n";
    }

    return 0;
    */

    // OR (||) OPERATOR
    if (temp <= 0 || temp >= 30) {
        std::cout << "The temperature is bad!\n";
    }
    else {
        std::cout << "The temperature is good!\n";
    }

    // NOT (!) OPERATOR
    if (!sunny) {
        std::cout << "It is cloudy outside!";
    }
    else {
        std::cout << "It is sunny outside!";
    }
}