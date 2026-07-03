// io stream is a header file that contains functions for basic input and output operations in C++.
// It allows us to use the standard input and output streams, such as std::cin and std::cout, to read from the console and write to the console, respectively.
#include <iostream>

int main() { 
    /* std - standard
       cout - character output
       << - means output, also known as left shift operator when used with numbers
       end statements with a semicolon in C++ - lets compiler know statement is done  
    */
    std::cout << "I like pizza!" << '\n'; // std::endl is used to insert a newline character and flush the output buffer, ensuring that the output is displayed immediately.
    std::cout << "It's really good!" << '\n'; // '\n' is a newline character that moves the cursor to the next line, it is more efficient than std::endl because it does not flush the output buffer.
    return 0; //if we reach return 0, it means program has managed to make it to the end, executing successfully, if 1 is returned, it means there was an error during execution.
}