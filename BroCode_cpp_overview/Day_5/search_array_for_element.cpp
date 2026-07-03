#include <iostream>
#include <string>

int searchArray(int array[], int size, int element); // this for int example
int searchArray(std::string array[], int size, std::string element); // this for string example

int main() {
    // searching an array for an element
    // first example - int numbers
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = std::size(numbers); // to get size of array
    int index;
    int myNum;

    // second example - string (foods)
    std::string foods[] = {"Adobo", "Lechon", "Bibingkang", "Puto"};
    int f_size = std::size(foods);
    std::string myFood;
    // gonna reuse the int index variable from previous example

    /*
    std::cout << "Enter element to search for: \n";
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if (index != -1) { // element is actually found within array
        std::cout << myNum << " is at index " << index << '\n';
    }
    else {
        std::cout << myNum << " is NOT in the array. Sorry :( \n";
    }
    */


    std::cout << "Enter element to search for: \n";
    std::getline(std::cin, myFood);

    index = searchArray(foods, f_size, myFood);

    if (index != -1) { // element is actually found within array
        std::cout << myFood << " is at index " << index << '\n';
    }
    else {
        std::cout << myFood << " is NOT in the array. Sorry :( \n";
    }



    return 0;
}

int searchArray(int array[], int size, int element) {
    for (int i = 0; i < size; i++) { // linear search
        if (array[i] == element) {
            return i;
        }
    }
    return -1; // -1 represents an element not being found
}

int searchArray(std::string array[], int size, std::string element) {
    for (int i = 0; i < size; i++) { // linear search
        if (array[i] == element) {
            return i;
        }
    }
    return -1; // -1 represents an element not being found
}