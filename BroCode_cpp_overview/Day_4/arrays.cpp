#include <iostream>

int main() {
    // array = a data structure that can hold multiple values
    // values are accessed by an index number 
    // - think of it like a variable that holds multiple values 

    //std::string car = "Corvette"; // can modify this into an array
    std::string car[] = {"Corvette", "Mustang", "Camry"};
    //std::string car[] = {"Corvette", "Mustang", "Camry", 1}; // error: conversion from int to non-scalar type std::string 

    car[0] = "Camaro"; // can change value of elements at specific indices

    std::cout << car << "\n"; // however, trying to output an array will display only the MEMORY ADDRESS of where the array is located
    std::cout << car[0] << " " << car[1] << " " << car[2] << "\n"; // need to clarify which element from the array to display through indices specified in brackets

    // ARRAYS can only hold values of the same dtype
    // can declare an array and assign values later BUT since it's a STATIC DATA STRUCTURE, you need to declare the size (ex: cars[3])
    std::string cars[3];

    // PRICES EXAMPLE

    double prices[] = {12.99, 5.00, 7.29, 3.49};

    std::cout << prices[0] << '\n';
    std::cout << prices[1] << '\n';
    std::cout << prices[2] << '\n';
    std::cout << prices[3] << '\n';

    return 0;
}