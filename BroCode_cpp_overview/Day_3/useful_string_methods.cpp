#include <iostream>
#include <string>

int main() {
    // useful string methods that i can use in the future

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // .length() - returns integer value corresponding to length of string 
    /*
    if (name.length() > 12) {
        std::cout << "Your name can't be over 12 characters long\n";
    } 
    else {
        std::cout << "Welcome " << name;
    }
    */

    // .empty() - returns boolean value corresponding to whether or not there is text within the string
    /*
    if (name.empty()) {
        std::cout << "You didn't enter your name";
    }
    else {
        std::cout << "Hello " << name;
    }
    */

    // .clear() - clears whatever was in the string => outputs an empty string
    // name input will be empty when outputted after using this method
    //name.clear();
    //std::cout << "Hello " << name;

    // .append("...") - appends whatever text specified in the parenthesis (within the quotation marks) at the end of the specified string
    //name.append("@gmail.com");
    //std::cout << "Your username is now " << name;

    // .at(index) - displays char at specific index within the string
    //std::cout << name.at(0); // outputs the char at index 0 (first character of the string)

    // .insert(index, "...") - inserts specified text (in quotation marks) within the string at a declared index
    //name.insert(0, "@");
    //std::cout << name;

    // .find('char') - finds specific character within the string
    //std::cout << name.find(' '); // if character cannot be found, output shows the special constant 18446744073709551615 = std::string::npos (largest possible unsigned num)
    // have to compare the result explicity against std::string::npos
    /*
    std::size_t found = name.find(' ');

        if (name != std::string::npos) {
            std::cout << "Character found at the index of: " << found;
        }
        else {
            std::cout << "Character could not be found in the string";
        }
    */

    // .erase(start_index, end_index)
    //name.erase(0, 3); // non-inclusive though (0,3) eliminates chars at index 0, 1, and 2, BUT not at 3
    //std::cout << name; // ronald -> ald (eliminates the first 3 chars)


    return 0;
}