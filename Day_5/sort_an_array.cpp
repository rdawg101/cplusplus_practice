#include <iostream>

void bubbleSort(int array[], int size);

int main() {
    // sorting an array using BUBBLE SORT
    int array[] = {1, 5, 7, 10, 9, 8, 4, 6, 3, 2};
    int size = std::size(array);

    bubbleSort(array, size);

    for (int element : array) {
        std::cout << element << " ";
    }

    return 0;
}

void bubbleSort(int array[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) { // reason for minus 1 is because we don't need to compare the last element to anything
        for (int j = 0; j < size - i - 1; j++){ // size - i - 1, once we place larger elements to the right, they should already be in order, don't need to sort any elements already sorted
            if (array[j] > array[j + 1]) { // if you want DESCENDING ORDER instead, use less than (<) when comparing array[j] (left value) and array[j+1] (right value)
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}