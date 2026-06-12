#include <iostream>

int main() {
    // fill() = fills a range of elements with a specified value 
    //          fill(beginning address of a data structure, end address, value)

    std::string foods[10] = {"pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza"};


    //for(std::string food : foods) {
    //    std::cout << food << "\n";
    //}
    // this is NOT PRACTICAL - what happens if we want 100 elements of 'pizza' instead?

    const int SIZE = 100;
    std::string pizza[SIZE];
    //fill(pizza, pizza + SIZE, "pizza"); // name of data structure gives the beginning address, given data structure + size = end address
    fill(pizza, pizza + (SIZE/2), "pizza");
    fill(pizza + (SIZE/2), pizza + SIZE, "burger"); // fills first half with pizza and second half with burger

    for(std::string piz : pizza) {
        std::cout << piz << "\n";
    }



    return 0;
}