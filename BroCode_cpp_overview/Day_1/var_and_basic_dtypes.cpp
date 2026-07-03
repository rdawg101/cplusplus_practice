#include <iostream>

int main() {
    // can store numbers, characters, sentences, and more
    int x; // var declaration - tells compiler we want to create a variable, and what type of data it will hold
    x = 5; // var assignment - gives the variable a value, in this case we are assigning the value of 5 to the variable x
    int y = 6;
    int sum = x + y; // we can also declare and assign a variable in the same line, here we are declaring a variable called sum and assigning it the value of x + y, which will be 11
    
    std::cout << x << '\n'; // output the value of x to the console, which will print 5
    std::cout << y << '\n'; // output the value of y to the console, which will print 6
    std::cout << sum << '\n'; // output the value of sum to the console, which will print 11

    return 0;
}