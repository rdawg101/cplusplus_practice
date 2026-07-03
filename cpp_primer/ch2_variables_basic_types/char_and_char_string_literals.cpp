#include <iostream>

int main() {
    std::cout << "a really, really long string literal"
                "that spans two lines" << std::endl; 
    // string literals that appear adjacent to one another,
    // separated by only spaces, tabs, newlines
    // are CONCATENATED into one single literal


    return 0;
}