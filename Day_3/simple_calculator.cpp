#include <iostream>
#include <cmath>

int main() {
    char op; // operator (+, -, *, /, %, ^)
    double num1;
    double num2;
    double result;

    std::cout << "************** - CALCULATOR - **************\n";

    std::cout << "Enter desired operator: either (+ - * / % ^): ";
    std::cin >> op;

    std::cout << "Enter #1: ";
    std::cin >> num1;

    std::cout << "Enter #2: ";
    std::cin >> num2;

    switch(op) {
        case '+':
            result = num1 + num2; 
            std::cout << num1 << " + " << num2 << " = " << result << "\n";  
            break;
        case '-':
            result = num1 - num2; 
            std::cout << num1 << " - " << num2 << " = " << result << "\n";  
            break;
        case '*':
            result = num1 * num2; 
            std::cout << num1 << " * " << num2 << " = " << result << "\n";  
            break;
        case '/':
            result = num1 / num2; 
            std::cout << num1 << " / " << num2 << " = " << result << "\n";  
            break;
        case '%':
            result = std::fmod(num1, num2); // truncates decimal though - can't use regular % operator on double dtype 
            std::cout << num1 << " % " << num2 << " = " << result << "\n";  
            break;
        case '^':
            result = std::pow(num1, num2); 
            std::cout << num1 << " ^ " << num2 << " = " << result << "\n";  
            break;
        default:
            std::cout << "That wasn't a valid response - operator input was not valid (make sure to only choose from these options: + - * / % ^)\n";
            break;
    }


    std::cout << "********************************************";

    return 0;
}