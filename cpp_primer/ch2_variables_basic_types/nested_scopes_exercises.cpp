#include <iostream>


int i = 42;
int main() {
    int i = 100;
    int j = i; // prioritizes local scope, has the value 100

    std::cout << j << std::endl; // prints out 100 (value of local scope of i)

    i = 100;
    int sum = 0;
    for (int i = 0; i != 10; i++) {
        sum += i;
    }
    std::cout << i << " " << sum << std::endl; // prints i outside of for loop scope and prints the sum calculated WITHIN the for loop scope 

    return 0;
}