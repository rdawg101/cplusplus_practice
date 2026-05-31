#include <iostream>

int main() {
    // const keyword specifies that a vars value is constant
    // it tells the compiler to prevent anything from modifying it
    // thus, making it read-only

    //double pi = 3.14159;
    //pi = 420.69; // this will compile, but it is not good practice to modify a value that is meant to be constant, because it can lead to bugs and confusion in the code
    // add const keyword to prevent this from happening
    // good practice to capitalize const variables to show that they are constants
    const int LIGHT_SPEED = 299792458; 
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    const double PI = 3.14159;
    //PI = 420.69; // this will cause an error, because we cannot modify a const variable - error: assignment of read-only variable 'PI'
    double radius = 10;
    //double circumference = 2 * pi * radius;
    double circumference = 2 * PI * radius; // this will compile, and it is good practice to use the const variable PI, because it prevents us from accidentally modifying its value, and it also makes our code more readable, because we know that PI is a constant value that should not be changed.

    std::cout << circumference << "cm" << '\n'; // this will print 62.8318cm

    return 0;
}