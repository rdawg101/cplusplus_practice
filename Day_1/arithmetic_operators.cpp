#include <iostream>

int main() {
    /*
        Arithmetic operators are used to perform mathematical operations on variables and values.
        - return the result of a specific arithmetic operation (+ - * / %)
        - can be used with built-in data types (int, float, double, etc.) and user-defined types (classes, structs, etc.)
        - can be used in expressions to perform calculations and assign values to variables
    */

    int students = 20;

    // Equivalent statements for adding 1 to students:
    //students = students + 1;
    //students+=1;
    //students++; // this is the most concise way to add 1 to students, it is called the increment operator

    // Equivalent statements for subtracting 1 from students:
    //students = students - 1;
    //students-=1;
    //students--; // this is the most concise way to subtract 1 from students, it is called the decrement operator

    // Multiplication
    //students = students * 2; // this will double the number of students
    //students *= 2; // this will double the number of students too

    // Division
    //students = students / 2; // this will halve the number of students
    //students /= 2; // this will also halve the number of students
    //students /= 3; // this will divide the number of students by 3 - however, decimal portion will be truncated since students is an int
    // ^ instead of 6.66, it will be 6 - however if we change student to float or double, it will give us the correct result

    // Modulo
    //int remainder = students % 2; // remainder of students after dividing by 2 - total of 20 students, 0 remainder
    //int remainder = students % 3; // this will give us the remainder of students divided by 3 - total of 20 students, 2 unaccounted for => remainder of 2

    std::cout << students << '\n';
    //std::cout << remainder << '\n';

    /*
        Arithmetic operators have an order of precedence, which determines the order in which they are evaluated in an expression.
        - parenthesis
        - multiplication & division
        - addition & subtraction 

    */

    students = 6 - 5 + 4 * 3 / 2;
    // 6 - 5 + 12 / 2
    // 6 - 5 + 6
    // 1 + 6
    // 7 -> outputs 7 in terminal 
    // can change precedence with parenthesis - example: 6 - (5 + 4) * 3 / 2
    //  6 - (9) * 3 / 2
    //  6 - 27 / 2
    //  6 - 13
    //  -7 -> outputs -7 in terminal

    std::cout << students << '\n'; // this will print 7

    return 0;
}