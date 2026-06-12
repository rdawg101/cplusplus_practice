#include <iostream>

void walk_iterative(int steps);
void walk_rec(int steps);

int factorial_iterative(int num);
int factorial_rec(int num);

int main() {
    // recursion = a programming technique where a function invokes itself from within
    //                            break a complex concept into repeatable single steps
    /*
        Many problems can be solved iteratively or recursively (iterative vs recursive)

        advantages = less code and is cleaner + useful for sorting and searching algorithms

        disadvantages = uses more memory + slower
    */

    // going to make a function for walking to show this concept
    //walk_iterative(10);
    //walk_rec(10);

    // factorial example
    //std::cout << factorial_iterative(10);
    std::cout << factorial_rec(10);

    return 0;
}

int factorial_iterative(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result = result * i;
    }
    return result;
}


int factorial_rec(int num) {
    // need a base case: when do we stop?
    if (num > 1) { // 10 * fac(9) => recursively get 10 * 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1 
        return num * factorial_rec(num - 1);
    }
    else { // base case
        return 1;
    }
}



void walk_iterative(int steps) {
    for (int i = 0; i < steps; i++) {
        std::cout << "You take a step!\n";
    }
}


// recursion involves calling a function within itself - often editing the parameter that's entered when calling the function inside of itself
void walk_rec(int steps) { 
    if(steps > 0) {
        std::cout << "You take a step!\n";
        walk_rec(steps - 1);
    }
    // watch out for potential infinite loops => stack overflow error
    // when you invoke a function, you add a frame to the stack
    // when the stack is overloaded, you get a stack overflow
}