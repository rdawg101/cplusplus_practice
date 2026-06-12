#include <iostream>

int main() {
    /*
        dynamic memory = memory that is allocated after the program
                        is already compile and running
                        Use the 'new' operator to allocate
                        memory in the heap rather than the stack

        Useful when we don't know how much memory we will need
        Makes our programs more flexible, especially when accepting user input (have no idea what they're going to type in)
    */
   int *pNum = NULL;

   pNum = new int; // new operator will return an address and we will store that address within pNum because it's a pointer

   *pNum = 21;

   std::cout << "address: " << pNum << '\n';
   std::cout << "value: " << *pNum << '\n';

   // also want to use the 'delete' operator when you're not using that memory space anymore
   delete pNum; // freeing up the memory at this address
   // IF YOU DON'T, you might cause a memory leak

   // WHENEVER YOU USE 'new' OPERATOR, BEST TO USE THE 'delete' OPERATOR

   // grades (char) example
   char *pGrades = NULL;
    int size;
    std::cout << "How many grades to enter in?: ";
    std::cin >> size;

    pGrades = new char[size];
    for (int i = 0; i < size; i++) {
        std::cout << "Enter grade #" << i + 1 << '\n';
        std::cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++) {
        std::cout << pGrades[i] << " ";
    }

    delete[] pGrades; // need to add [] post delete when working with an array

    return 0;
}