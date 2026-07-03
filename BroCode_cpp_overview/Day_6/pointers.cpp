#include <iostream>

int main() {
    /*
        pointers = variable that stores a memory address of another variable
                    sometimes it is easier to work with an address
                    tell where the location of something is rather than carrying that information around with you

        & address-of operator
        * dereference operator
    
    */

    // variables and assigned values
    std::string name = "Ronald";
    int age = 22;
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"}; // just tell people where the 5 free pizzas are instead of carrying them around to each house


    // pointers
    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas; // array freePizzas is already an address, DON'T need to use address-of operator (&)

    // output showing mem address location or value from pointer depending on the use of dereference operator (*) or not
    std::cout << pName << '\n'; // outputs memory address as its value (with no *), with * (dereference operator), you access the value of that address that's stored in that pointer
    std::cout << *pName << '\n';

    std::cout << pAge << '\n';
    std::cout << *pAge << '\n';

    std::cout << freePizzas << '\n';
    std::cout << *freePizzas << '\n'; // would give the first element of the freePizzas array

    return 0;
}