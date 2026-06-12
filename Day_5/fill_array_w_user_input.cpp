#include <iostream>
#include <string>

int main() {
    std::string foods[5]; // arrays are static data structures, while program is running we cannot change the size of it
    int size = std::size(foods);
    std::string temp; // temporary variable

    for (int i = 0; i < size; i++) {
        std::cout << "Enter a food you like or 'q' to quit #" << i + 1 << ": "; 
        std::getline(std::cin, temp);
        if (temp == "q") { // this if-statement is so that we only assign user input to our array if we check what it is beforehand (if q, break and q won't be included in the food list)
            break;
        }
        else {
            foods[i] = temp;
        }
    }

    std::cout << "You like the following food: \n";

    for (int i = 0; !foods[i].empty(); i++) {
        std::cout << foods[i] << '\n';
    } // prevents empty lines from being displayed if you quit mid program-running

    // disadvantage of arrays - they're static, once size is declared, we can't change it 

    return 0;
}