#include <iostream>

int main() {

    // [3][4] - first set of brackets indicate number of rows, while second set of brackets indicate columns
    // don't need to initialize with row size in the beginning, but you do have to initialize with a column size
    // to access one of these elements, you're going to need TWO indices
    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
                            {"Corvette", "Equinox", "Silverado"},
                            {"Challenger", "Durango", "Rm 1500"}};
                
    /*
    std::cout << cars[0][0] << " ";
    std::cout << cars[0][1] << " ";
    std::cout << cars[0][2] << " \n";
    std::cout << cars[1][0] << " ";
    std::cout << cars[1][1] << " ";
    std::cout << cars[1][2] << " \n";
    std::cout << cars[2][0] << " ";
    std::cout << cars[2][1] << " ";
    std::cout << cars[2][2] << " \n";
    */

    int rows = std::size(cars);
    int columns = std::size(cars[0]); // pass first row to get the number of cols

    for (int i = 0; i < rows; i++) {
        //std::cout << cars[i] << '\n'; // this displays the beginning addresses of each row
        for (int j = 0; j < columns; j++) {
            std::cout << cars[i][j] << " ";
        }
        std::cout << '\n'; // new line after every row
    }

    return 0;
}