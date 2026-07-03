#include <iostream>
#include <string> // include the string library to use the std::string type (for the std::getline function to work properly, we need to include the string library)

// cout << (insertion operator)
// cin >> (extraction operator)

int main() {

    std::string name;
    int age;

    std::cout << "What is your age?: "; // prompts user for their age
    std::cin >> age;

    // however, if prompting for a string, if there's a space it stops reading the input after the first space 
    std::cout << "What is your full name?: "; // prompts user for input, in this case, their name
    //std::cin >> name; // waits for user input and stores it in the variable 'name' (cin is used to get input from the user, and the >> operator is used to extract the input and store it in the variable)
    std::getline(std::cin >> std::ws, name); // reads in strings with spaces so that the whole string is stored in the variable 'name' (getline is used to read a line of text from the input stream, and it allows for spaces in the input)

    std::cout << "Hello, " << name << "! You are " << age << " years old.\n"; // outputs a greeting message that includes the user's name and age (cout is used to output text to the console, and the << operator is used to insert the variables 'name' and 'age' into the output stream)
    
    // switched the order of the prompts for age and name (age being asked first now, and name being asked second)
    // however, if we run the program and input our age first, then when it prompts us for our name, it doesn't wait for us to input our name and just outputs 
    // the greeting message with an empty name. This is because when we input our age and press enter, the newline character is still in the input buffer, 
    // so when getline tries to read the name, it reads the newline character instead of waiting for user input. To fix this, we can use std::ws to consume any 
    // leading whitespace characters (including the newline character) before reading the name, which allows getline to wait for user input as expected.

    return 0;
}