#include <iostream>

struct Car{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);
void paintCar(Car &car, std::string color);

int main () {

    Car car1;
    Car car2;

    car1.model = "Corvette";
    car1.year = 2012;
    car1.color = "Red";

    car2.model = "Hellcat";
    car2.year = 2018;
    car2.color = "Green";

    paintCar(car1, "Silver");
    paintCar(car2, "Teal");


    std::cout << &car1 << '\n'; // shows address of car1
    printCar(car1);
    std::cout << &car2 << '\n'; // shows address of car2
    printCar(car2);
    // 2 different memory addresses appear, one for the original and one for the copy of the struct
    // we display members of the copy instead of the original
    // if you want members of the original struct, need to use address-of operator (&)


    return 0;
}

// function to print the members of a car
// passing a struct as an argument creates a copy of the original struct
// if you want members of the original struct, need to use address-of operator (&) - will show same memory address prior to after printCar function call
void printCar(Car &car) { // pass the struct as a dtype 
    std::cout << &car << '\n'; // shows address of car1
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}

void paintCar(Car &car, std::string color) { // without & (address-of operator), the color wouldn't be changed - only changes the values of the copy, not the original
    // we are displaying the original's colors, so without &, the original's values would not be changed
    car.color = color;
}