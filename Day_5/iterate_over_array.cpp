#include <iostream>

int main() {
    // iterating over an array
    std::string students[] = {"Spongebob", "Pat", "Wardell", "Sophia", "Aeon"};

    // want to display all of the elements of the array, but don't want to repeat std::cout lines
    // can use one std::cout in a for loop instead
    // can use sizeof() on the students array to calculate the total number of elements from the array
    for(int i = 0; i < sizeof(students)/sizeof(std::string); i++) { // divide sizeof(students) (total # of bytes) / # bytes given per string value (32 bytes in this case)
        std::cout << students[i] << "\n";
    }


    // grades (char) example
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    for(int i = 0; i < sizeof(grades)/sizeof(char); i++) { // divide sizeof(students) (total # of bytes) / # bytes given per string value (32 bytes in this case)
        std::cout << grades[i] << "\n";
    }

    return 0;
}