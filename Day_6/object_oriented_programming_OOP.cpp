#include <iostream>

// creating a class to make human objects
class Human {
    public: // public access modifier
        std::string name;
        std::string occupation;
        int age;
        // can set default values to attributes to like: std::string name = "Rick";    OR    std::string occupation = "Driver";
    
    // methods are functions that belong to a class - an action that an object can do

        void eat() {
            std::cout << "This person is eating\n";
        }

        void drink() {
            std::cout << "This person is drinking\n";
        }

        void sleep() {
            std::cout << "This person is sleeping\n";
        }
};

// second class example
class Car {
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        void accelerate() {
            std::cout << "You step on the gas!\n";
        }

        void brake() {
            std::cout << "You step on the brakes!\n";
        }

};

int main() {
    /*
        object = a collection of attributes and methods
            they can have characteristics and could perform actions
            can be used to mimic real world items (ex. Phone, Book, etc.)
            created from a class which acts as a "blueprint"
    */

    Human human1;
    Human human2;
    Car car1;

    human1.name = "Rick";
    human1.occupation = "Scientist";
    human1.age = 70;

    human2.name = "Morty";
    human2.occupation = "Student";
    human2.age = 15;

    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "silver";

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    // invoke class methods

    human1.eat();
    human1.drink();
    human1.sleep();

    // second example

    std::cout << human2.name << '\n';
    std::cout << human2.occupation << '\n';
    std::cout << human2.age << '\n';

    human2.eat();
    human2.drink();
    human2.sleep();


    // third example - Car class

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    // invoke class methods

    car1.accelerate();
    car1.brake();

    return 0;
}