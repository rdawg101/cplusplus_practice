#include <iostream>


// REMEMBER TO DECLARE FUNCTIONS AT THE TOP ONCE DEFINED
void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main() {
    bakePizza();
    bakePizza("pepperoni");
    bakePizza("pepperoni", "pineapple");

    return 0;
}

// OVERLOADED FUNCTIONS
// functions can have the SAME name but have to have different parameters
// a function's name and its parameters are known as a function's SIGNATURE

void bakePizza() { // no parameters
    std::cout << "Here is your pizza!\n";
}

void bakePizza(std::string topping1) {
    std::cout << "Here is your " << topping1 << " pizza!\n";
}

void bakePizza(std::string topping1, std::string topping2) {
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}