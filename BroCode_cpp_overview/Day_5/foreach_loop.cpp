#include <iostream>

int main() {
    // foreach loop = loop that eases the traversal over an 
    //                iterable data set (ex: array)
    std::string students[] = {"Bob", "Tanya", "Sinjid"};

    // standard for loop - need an index, condition, increment/decrement index
    for (int i = 0; i < sizeof(students)/sizeof(std::string); i++) {
        std::cout << students[i] << '\n';
    }

    // for each loop - dtype of elements the array is composed of and a name assigned for each element from said array + ':' + name of iterable array
    for (std::string student : students) {
        std::cout << student << '\n';
    }

    // grades (int) example
    int grades[] = {65, 78, 92, 53};

    for (int grade : grades) {
        std::cout << grade << '\n';
    }

    // less syntax involved in a for each loop
    // HOWEVER less flexible - if you just need to display the elements of an iterable data set, for each loops are your go-to

    return 0;
}