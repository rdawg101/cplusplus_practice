#include <iostream>



int main() {
    std::cout << "Enter two numbers:" << std::endl; // prompts user to enter 2 numbers
    int v1 = 0, v2 = 0; // establishes variables to hold these 2 values
    std::cin >> v1 >> v2; // std input to enter these values into the est variables
    std::cout << "The sum of " << v1 << " and " << v2
                << " is " << v1 + v2 << std::endl; // output of total sum b/n the 2 variables


    return 0;
}