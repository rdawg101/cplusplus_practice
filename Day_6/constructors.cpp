#include <iostream>

class Student {
    public:
        std::string name;
        int age;
        double gpa;

    // we have a constructor that's automatically called behind the scenes, but we can explicitly set one up 
    // constructor has same name as the class
    Student(std::string name, int age, double gpa) {
        this->name = name; // this is the syntax for assigning the variables values that have the same name (this->)
        this->age = age; // however, if attribute names (arguments) are named differently, you would NOT NEED the (this->) keyword and symbol
        this->gpa = gpa;
        // so instead it would be like: name = (different arg name);
    }

};


// new constructor example
class Car {
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

    Car(std::string make, std::string model, int year, std::string color) {
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }    

};

int main() {
    /*
        constructor = special method that is automatically called when an object is instantiated
            useful for assigning values to attributes as arguments
    
    */

    // we have a constructor that's automatically called behind the scenes, but we can explicitly set one up 
    // constructor has same name as the class
    Student student1("Spongebob", 25, 3.2); 
    Student student2("Patrick", 30, 2.5); 
    Student student3("Squidward", 35, 3.7); 

    Car car1("Chevy", "Corvette", 2022, "silver");
    Car car2("Ford", "Mustang", 2014, "turquoise");

    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.age << '\n';
    std::cout << student2.gpa << '\n';

    std::cout << student3.name << '\n';
    std::cout << student3.age << '\n';
    std::cout << student3.gpa << '\n';

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    std::cout << car2.make << '\n';
    std::cout << car2.model << '\n';
    std::cout << car2.year << '\n';
    std::cout << car2.color << '\n';


    return 0;
}