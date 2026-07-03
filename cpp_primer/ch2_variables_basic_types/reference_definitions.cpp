#include <iostream>

int main() {
    int i = 1024, i2 = 2048;

    int &r = i, r2 = i2; // r is a reference bound to i, r2 is an int
 
    int i3 = 1024, &ri = i3; // i3 is an int, ri is a ref bound to i3

    int &r3 = i3, &r4 = i2; // both r3 and r4 are references

    int a, &ra = a;
    a = 5; ra = 10; // ra bound to a, a value changed from 5 to 10
    // so a will hold the value 10 and ra will ref the value of 10 at a
    std::cout << a << " " << ra << std::endl;

    return 0;
}