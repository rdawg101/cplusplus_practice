#include <iostream>

int main() {
    std::cout << '\n'; // prints a newline
    std::cout << "\tHi!\n"; // prints a tab followed by "Hi!" and a newline

    // generalized escape sequences using hexadecimal/octal digits
    std::cout << '\7'; // bell
    std::cout << '\12'; // newline
    std::cout << '\40'; // blank
    std::cout << '\0'; // null
    std::cout << '\115'; // 'M'
    std::cout << '\x4d' << '\n'; // 'M'

    std::cout << "Hi \x4dO\115!\n"; // prints Hi  MOM! followed by newline
    std::cout << '\115' << '\n'; // prints M followed by a newline

    return 0;
}