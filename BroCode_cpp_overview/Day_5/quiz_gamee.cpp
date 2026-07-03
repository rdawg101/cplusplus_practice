#include <iostream>
#include <string>
#include <array>
#include <cctype> // need these headers, prevented program from running properly
// due to undefined behavior

int main() {

    std::string questions[] = {"1. What year was C++ created?: ",
                               "2. Who invented C++?: ",
                               "3. What is the predecessor of C++?: ",
                               "4. Is the Earth flat?: "};

    std::string options[][4] = {{"A. 1960", "B. 1975", "C. 1985", "D. 1989"},
                               {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark ZUCKerberg"},
                               {"A. C", "B. C+", "C. C--", "D. B++"},
                               {"A. yes", "B. no", "C. sometimes", "D. What's Earth?"}};

    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = std::size(questions);
    char guess;
    int score = 0;

    for (int i = 0; i < size; i++) { // need to iterate over questions
        std::cout << "***************************\n";
        std::cout << questions[i] << '\n';
        std::cout << "***************************\n";

        for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++) { // need to iterate over 2D array (options)
            std::cout << options[i][j] << '\n';
        }

        std::cin >> guess;
        guess = toupper(guess); // toupper() will capitalize the guess string 

        if (guess == answerKey[i]) {
            std::cout << "CORRECT!\n";
            score++;
        }
        else {
            std::cout << "WRONG!\n";
            std::cout << "Answer: " << answerKey[i] << '\n';
        }
    }

    std::cout << "RESULTS: \n";
    std::cout << "CORRECT GUESS: " << score << '\n';
    std::cout << "# of QUESTIONS: " << size << '\n';
    std::cout << "SCORE: " << (score/(double)size)*100 << "%\n"; 

    return 0;
}