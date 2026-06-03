#include <iostream>

int main() {
    // ternary operator = rpelacement to an if/else statement
    // condition ? expression1 : expression2;
    // basically, is something true? if it is, expression1, if not, expression2

    // GRADE PASSING OR FAIL EXAMPLE
    //int grade;
    //std::cout << "Enter a valid grade number (0-100): ";
    //std::cin >> grade;

    //(grade >= 60) ? std::cout << "You pass!" : std::cout << "You fail!";

    // ODD OR EVEN NUMBER EXAMPLE
    //int num = 8;
    //num 9;
    //num % 2 == 1 ? std::cout << "Number is odd!" : std::cout << "Number is even!";
    // can also do it this way
    //num % 2 ? std::cout << "Number is odd!" : std::cout << "Number is even!";
    // results in either 1 or 0 (true or false) 

    // BOOLEAN VARIABLE EXAMPLE
    bool hungry = true;
    hungry = false;

    // don't have to put == true, can just have the boolean var by itself
    // reads in true or false either way, true would trigger the first expression, false the second expression
    //hungry ? std::cout << "Awwwww, who's a hungry boyyyyy" : std::cout << "So full, need someone to rub my belly";
    // this would work as well
    std::cout << (hungry ? "Awwwww, who's a hungry boyyyyy" : "So full, need someone to rub my belly");


    return 0;
}