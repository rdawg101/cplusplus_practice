#include <iostream>

int main() {
    // integer (whole num)
    int age = 21;
    int year = 2026;
    int days = 7.5; // this will be truncated to 7, because it is a whole number data type, and cannot hold decimal values

    //std::cout << days << '\n'; // this will print 7, because the decimal part was truncated

    // double (decimal num)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 98.6;

    //std::cout << price << '\n'; // this will print 10.99, because double can hold decimal values
    //std::cout << gpa << '\n'; // this will print 2.5
    //std::cout << temperature << '\n'; // this will print 98.6

    // single character
    char grade = 'A';
    char initial = 'B';
    char currency = '$';
    //char initial2 = 'BC'; // this will cause an error, because char can only hold a single character

    //std::cout << initial2 << '\n'; // warning: multi-character character constant [-Wmultichar] 
    // char initial2 = 'BC'; // this will cause an error, because char can only hold a single character
    //std::cout << initial << '\n'; // this will print B

    // boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = true;

    // string (obj that represents a sequence of text, can hold multiple characters)
    std::string name = "Ronald";
    std::string day = "Wednesday";
    std::string food = "Ice Cream";
    std::string address = "123 Main St";

    //std::cout << name << '\n'; // this will print Ronald
    //std::cout << day << '\n'; // this will print Wednesday
    //std::cout << food << '\n'; // this will print Ice Cream
    //std::cout << address << '\n'; // this will print 123 Main St

    // how to display a variable along with text
    std::cout << "Hello, my name is " << name << " and I am " << age << " years old." << '\n'; // this will print Hello, my name is Ronald and I am 21 years old.


    return 0;
}