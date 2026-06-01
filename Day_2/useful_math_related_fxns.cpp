#include <iostream>
#include <cmath> // include the cmath library to use math related functions like max and min

int main() {
    double x = 3;
    double y = 4;
    double z;
    
    // max function - returns the larger of two values
    z = std::max(x, y);
    std::cout << "Max: " << z << '\n';

    // min function - returns the smaller of the two values 
    z = std::min(x, y);
    std::cout << "Min: " << z << '\n';

    // power function - exponents
    z = pow(2, 3); // pow(base, exponent) - returns the value of base raised to the power of exponent
    std::cout << "2^3 = " << z << '\n';

    // square root function
    z = sqrt(16); // sqrt(value) - returns the sqrt of the value
    std::cout << "sqrt(16) = " << z << '\n';

    // absolute value function - distance from 0 on the number line, always non-negative
    z = abs(-5); 
    std::cout << "abs(-5) = " << z << '\n';

    // round function - rounds a floating-point number to the nearest integer
    z = round(3.6); // rounds to 4
    std::cout << "round(3.6) = " << z << '\n';
    z = round(3.3); // rounds to 3
    std::cout << "round(3.3) = " << z << '\n';

    // round up - ceiling function - rounds a floating-point number up to the nearest integer
    z = ceil(3.2); // rounds up to 4
    std::cout << "ceil(3.2) = " << z << '\n';
    z = ceil(3.8); // rounds up to 4
    std::cout << "ceil(3.8) = " << z << '\n';


    return 0;
}