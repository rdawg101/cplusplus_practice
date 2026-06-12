#include <iostream>

void printInfo(const std::string name, const int age);

int main() {
    /*
        const parameter = parameter that is effectively read-only
        code is more secure & conveys intent - lets others know to not mess with those specific values
        useful for references and pointers - prevents someone from changing value at reference, nobody can change address of what pointer is pointing to

    */
    std::string name = "Bro";
    int age = 21;

    printInfo(name, age);

    return 0;
}

// to make this function more secure, we can use const parameters - we can't change the values that we receive (in the function)
void printInfo(const std::string name, const int age) {
    //name = " ";
    //age = 0;  // don't want this to happen (let function change values from parameter)
    //have to add const keyword to parameters
    // first two lines cause errors now after addition of const keyword to parameters

    std::cout << name << '\n';
    std::cout << age << '\n';
}