#include <iostream>

int main() {
    // VERY BASIC type conversion examples in C++
    /*
        type conversion = conversion a value of one data type to another data type
        - implicit = automatic type conversion by the compiler
        - explicit = manual type conversion by the programmer (precede value with new data type in parentheses), ex: int x = (int) 3.14; // x will be 3
    
    */

    //int x = 3.14;
    //std::cout << x << '\n'; // output: 3 (implicit type conversion, the decimal part is truncated)

    //double y = (int) 3.14; // explicit type conversion, the decimal part is truncated before being assigned to y
    //std::cout << y << '\n'; // output: 3 (y is a double, so it will be 3 after the explicit conversion to int)

    //char z = 100;
    //std::cout << z << '\n'; // output: d (implicit type conversion - implicitly convert num into a char, 100 is the ASCII code for 'd')

    // how about explicity cast with char to int?
    //std::cout << (char) 100; // also outputs 'd' (explicit type conversion, but since 100 is already an int, it will be converted to char and output 'd')

    // when would type conversion be useful?
    // suppose we have an online exam - have to give user a score: num of questions they got right / total num of questions 
    int correct = 8;
    int questions = 10;
    // need to calc score as a percentage, we can do
    //double score = correct/questions * 100;
    //std::cout << score << "%\n"; // output: 0% (incorrect - results in error, because correct/questions is an integer division, which results in 0%)
    // when dividing 8 by 10, we're truncating the decimal part (0.8 -> 0), and multiplying by 100 gives us 0% instead of 80%

    // to fix this, we need to explicity cast questions as a double before the division, so we can get the correct result:
    double score = correct/(double)questions * 100;
    std::cout << score << "%\n"; // output: 80% (correct - by explicitly casting questions to double, we get a floating-point division, which gives us the correct result of 0.8, and multiplying by 100 gives us 80%)

    return 0;
}