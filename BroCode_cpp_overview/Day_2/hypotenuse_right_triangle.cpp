#include <iostream>
#include <cmath>

int main() {
    double a;
    double b;
    double c;

    // get user inputs for the three sides of the triangle
    std::cout << "Enter side A: ";
    std::cin >> a;
    std::cout << "Enter side B: ";
    std::cin >> b;

    // to check if the triangle is a right triangle, we can use the Pythagorean theorem which states that in a right triangle, 
    // the square of the length of the hypotenuse (the longest side) is equal to the sum of the squares of the lengths of the other two sides.
    // c = sqrt(a^2 + b^2) - if this is true, then the triangle is a right triangle

    //a = pow(a, 2);
    //b = pow(b, 2);
    //c = sqrt(a + b);
    c = sqrt(pow(a,2) + pow(b,2)); // more compact way to write the same thing

    std::cout << "side C (hypotenuse) = " << c << '\n';

    return 0;
}