#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairList_t; // this creates a new type alias called pairList_t, which is a vector of pairs of strings and ints
typedef std::string text_t; // this creates a new type alias called text_t, which is a string
typedef int number_t; // this creates a new type alias called number_t, which is an int
using TEXT_t = std::string; // this creates a new type alias called TEXT_t, which is a string - using more suitable for templates
using NUMBER_t = int;

int main() {
    // typedef => reserved keyword used to create an additional name (alias) for another dtype
    // new identifier for an existing type helps with readability and maintainability of code
    // reduces typos in general
    // only use typedef or using keywords if there is a CLEAR benefit to doing so, otherwise it can make code more confusing and harder to read
    // example - if we have a vector of pairs of strings and ints like the example above, we can create a type alias for it to make it easier to read and use in our code

    //pairList_t myList; // this creates a variable called myList of type pairList_t, which is a vector of pairs of strings and ints ^
    // main benefit - we can give a main identifier to an existing dtype 
    // helps with code readability and typos

    //std::string firstName;
    // ^ can replace dtype with 

    text_t firstName = "Ronald"; // this creates a variable called firstName of type text_t, which is a string
    number_t age = 21; // this creates a variable called age of type number_t, which is an int

    std::cout << firstName << '\n'; // this will print Ronald
    std::cout << age << '\n'; // this will print 21

    /*
        However, typedef has been largely replaced by the using keyword in C++
        - 'using' works better with templates and is more readable
    */

    TEXT_t lastName = "Smith"; // this creates a variable called lastName of type TEXT_t, which is a string
    NUMBER_t height = 180; // this creates a variable called height of type NUMBER_t, which is an int

    std::cout << lastName << '\n';
    std::cout << height << '\n';

    return 0;
}