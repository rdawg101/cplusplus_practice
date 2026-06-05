#include <iostream>

// FIRST EXAMPLE 
/*
double square(double length); // function declaration
double cube(double length); // function declaration



int main() {
    // return = return a value back to the spot where you called the encompassing function 

    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << "Area: " << area << "cm^2\n";
    std::cout << "Volume: " << volume << "cm^3\n";

    return 0;
}

double square(double length) { // function definition - change prefix keyword to clarify return dtype
    return length * length;
}

double cube(double length) { 
    return length * length * length;
}

*/

std::string concatStrings(std::string string1, std::string string2);

int main() {
    std::string firstName = "Ronald";
    std::string lastName = "Celino";
    std::string fullName = concatStrings(firstName, lastName);

    std::cout << "Hello " << fullName << "\n";
}

std::string concatStrings(std::string string1, std::string string2) { // make sure return dtype matches what is returned in the function!!!!
    return string1 + " " + string2;
}
