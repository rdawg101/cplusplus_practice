#include <iostream>

double getTotal(double prices[], int size);

int main() {
    // how to pass an array to a function 
    // prices (double) example
    double prices[] = {49.99, 15.35, 65, 10.99};
    int size = sizeof(prices)/sizeof(int);
    double total = getTotal(prices, size);

    std::cout << "$" << total;


    return 0;
}

double getTotal(double prices[], int size) {
    // double prices[] is actually just a POINTER
    // a POINTER points to the address of where the array begins
    // this function actually has no idea how big the array is anymore, SOOOOOO we CANNOT use sizeof(prices)/sizeof(int)
    // we can instead pass in the size of the array as a parameter (int size) - calculate size prior to going into the function 
    double total = 0;

    for (int i = 0; i < size; i++) {
        total = total + prices[i];
    }

    return total;
}