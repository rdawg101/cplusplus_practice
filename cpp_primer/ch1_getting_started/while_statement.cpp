#include <iostream>

int main() {
    int sum = 0, val = 1;
    int sum2 = 0, val2 = 50;
    int sum3 = 0, val3 = 25;

    // keep executing the while as long as val is less than or equal to 10
    // want to sum up every num from 1-10
    while (val <= 10) {
        sum += val; // assigns sum + val to sum
        ++val; // add 1 to val
        std::cout << sum << std::endl;

    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl; // should output 55

    while (val2 <= 100) {
        sum2 += val2;
        val2++;
    }

    std::cout << "Sum of 50 to 100 inclusive is " << sum2 << std::endl;

        while (val3 >= 0) {
        sum3 += val3;
        val3--;
    }

    std::cout << "Sum of 0 to 25 inclusive is " << sum3 << std::endl;

    return 0;
}