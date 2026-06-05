#include <iostream>
#include <ctime>

int main() {
    // gonna implement a simple number guessing game
    int num; // what num is generated
    int guess; // what num the user guesses the number to be
    int tries = 0; // total attempts to get the answer right - had to initialize because local variables are not automatically initialized
    // it is set to whatever random value happened to be SITTING IN MEMORY - was set to 32759 for the first run for some reason

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "***** NUMBER GUESSING GAME *****\n";

    do {
        std::cout << "Enter a guess between (1-100): ";
        std::cin >> guess;
        tries++;

        if (guess > num) {
            std::cout << "Too high!\n";
        }
        else if (guess < num) {
            std::cout << "Too low!\n";
        }
        else {
            std::cout << "YOU GOT IT! Number of tries: " << tries << "\n";
        }

    } while (guess != num);

    std::cout << "********************************\n";
    return 0;
}