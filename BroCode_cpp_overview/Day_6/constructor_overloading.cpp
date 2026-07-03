#include <iostream>

class Pizza{
    public:
        std::string topping1;
        std::string topping2;

    Pizza() {

    }

    Pizza(std::string topping1) {
        this->topping1 = topping1;

    }

    Pizza(std::string topping1, std::string topping2) {
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};

int main() {
    // overloaded constructors = multiple constructors w/ the same name but different parameters
    //  allows for varying arguments when instantiating an object
    Pizza pizza1("pepporoni");
    Pizza pizza2("mushrooms", "peppers"); // get an error at first, only constructor available has 1 argument - make another constructor with 2 arguments for 2 toppings
    Pizza pizza3; // no matching function call for Pizza with NO arguments - we need a MATCHING CONSTRUCTOR with NO arguments

    std::cout << pizza1.topping1 << '\n';
    std::cout << pizza2.topping1 << " + " << pizza2.topping2 << '\n';

    return 0;
}