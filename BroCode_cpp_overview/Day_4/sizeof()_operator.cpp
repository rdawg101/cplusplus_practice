#include <iostream>

int main() {
    // sizeof() operator = determines the size in BYTES of a:
    //                     variable, dtype, class, objects, etc.

    std::string name = "Bro, what the freak are you doing here dawg? It's been a minute since I last saw you\n";
    char grade = 'A';
    bool isStudent = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"Bob", "Pat", "Wardell", "LEBRONNNNNN"};

    double gpa = 2.5;
    std::cout << sizeof(gpa) << " bytes\n"; // results in 8 bytes - that is the maximum bytes assigned to a DOUBLE VARIABLE
    // if you replace gpa with the actual dtype 'double', it would give the same results
    std::cout << sizeof(double) << " bytes\n"; // results in 8 bytes

    // HELPFUL when working with arrays

    std::cout << sizeof(name) << " bytes\n"; // returns 32 bytes - a string only holds an address of where some text is located
    // address of where the string of text is located is 32 bytes
    // 32 bytes will remain the size of any string variable, even if you add more text to the string variable

    std::cout << sizeof(grade) << " bytes\n"; //  1 byte for char
    std::cout << sizeof(isStudent) << " bytes\n"; //  1 byte for boolean

    std::cout << sizeof(grades) << " bytes\n"; // results in 5 bytes (5 char elements = 5 bytes)
    // SIZE OF AN ARRAY DEPENDS ON:   # OF ELEMENTS IN AN ARRAY * TOTAL BYTES FOR EACH ELEMENT
    std::cout << sizeof(grades)/sizeof(char) << " elements within the array\n";


    std::cout << sizeof(students)/sizeof(std::string) << " elements within the array\n";


    return 0;
}