#include <iostream>

struct student {
    std::string name; // member
    double gpa; // member
    bool enrolled; // member
    // can set default values to members like "bool enrolled = true;"
    //                              would not need to declare = true
    //                              when defining a new student
}; // end struct declaration with a ; 

int main() {
    /*
        struct = a structure that group related variables under one name
            structs can contain many different dtypes (string, int, double, bool, etc.)
            variables in a struct are known as "members"
            members can be accessed with . "Class Member Access Operator"

    
    */

    student student1;
    // assigning values for student1
    student1.name = "Lebron";
    student1.gpa = 3.2;
    student1.enrolled = true;

    student student2;
    // assigning values for student1
    student2.name = "Stephen";
    student2.gpa = 4.0;
    student2.enrolled = true;

    student student3;
    // assigning values for student1
    student3.name = "Bob";
    student3.gpa = 1.5;
    student3.enrolled = false;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

    std::cout << student3.name << '\n';
    std::cout << student3.gpa << '\n';
    std::cout << student3.enrolled << '\n';


    return 0;
}