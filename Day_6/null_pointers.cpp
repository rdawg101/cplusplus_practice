#include <iostream>

int main() {
    /*
        Null value = a special value that means something has no value
                    when a pointer is holding a null value
                    that pointer is not pointing at anything (null pointer)
        
        nullptr = keyword represents a null pointer literal

        nullptrs are helpful when determining if an address was
        successfully assigned to a pointer
    
        if we create a pointer, but don't assign a value, we don't know what it's pointing to

        when using pointers, be careful that your code isn't dereferencing nullptr or pointing to free memory
        ^this will cause undefined behavior
    */

    // good practice to have a pointer pointing to a valid address or 'nullptr' keyword
    int *pointer = nullptr;
    int x = 123;


    pointer = &x;

    // if you dereference a null pointer (*pointer;) it can lead to undefined behavior
    // if you dereference a pointer not assigned a value can also lead to undefined behavior

    if (pointer == nullptr) { // check to see if pointer has a valid address before dereferencing it
        // if pointer is still a nullptr, it is NOT safe to dereference that nullptr
        std::cout << "address was not assigned!\n";
        // std::cout << *pointer; // DO NOT DO THIS
    }
    else {
        std::cout << "address was assigned!\n";
        // safe to dereference (access value of variable) in this else statement since we know that pointer is NOT a nullptr
        std::cout << *pointer;
    }

    return 0;
}