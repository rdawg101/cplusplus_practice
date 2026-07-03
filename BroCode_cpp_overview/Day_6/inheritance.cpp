#include <iostream>

// going to make an Animal class (parent class)
class Animal {
    public:
        bool alive = true;

    void eat() {
        std::cout << "NOM NOM NOM!\n";
    }
};

// Dog and Cat class will inherit from Animal class
class Dog : public Animal { // once we create a dog object, it will have the bool alive attribute and void eat() method from Animal
    // inherits everything from Animal class (parent class)
    public:

    void bark() {
        std::cout << "The dog goes WOLF!!!\n";
    }

};

class Cat : public Animal {
    // inherits from Animal class
    public:
        void meow() {
            std::cout << "The cat goes MEOWWW!!!\n";
        }

};



// ANOTHER EXAMPLE: Parent class Shape
class Shape {
    public:
        double area;
        double volume;
// no methods this time, just attributes
};

// both Cube and Sphere inherit from Shape - both will have a constructor
class Cube : public Shape {
    public:
        double side;

    Cube(double side) {
        this->side = side;
        this->area = side * side * 6;
        this->volume = side * side * side;
    }
};

class Sphere : public Shape {
    public:
        double radius;

    Sphere(double radius) {
        this->radius = radius;
        this->area = 4 * 3.14159 * (radius * radius);
        this->volume = (4 / 3.0) * 3.14159 * (radius * radius * radius);
    }
};

int main() {
    /*
        inheritance = a class can recieve attributes and methods from another class
            children classes inherit from a Parent class
            Helps to reuse similar code found within multiple classes
    
    */

    Dog dog;
    Cat cat;

    std::cout << dog.alive << '\n';
    dog.eat();
    dog.bark();

    std::cout << cat.alive << '\n';
    cat.eat();
    cat.meow();
    //cat can't use bark() method as it doesn't inherit it, only inherits from Animal class

    // Shape examples

    Cube cube(10);
    Sphere sphere(10);

    std::cout << cube.area << "cm\n";
    std::cout << cube.volume << "cm^3\n";

    std::cout << sphere.area << "cm\n";
    std::cout << sphere.volume << "cm^3\n";

    return 0;
}