#include <iostream>

int main() {
    // another switch example - grades (alternative to using else if statements, much more efficient and looks cleaner)
    char grade;
    std::cout << "What letter grade?: ";
    std::cin >> grade;

    switch(grade) {
        case 'A':
            std::cout << "You did great!";
            break;
        case 'B':
            std::cout << "You did good";
            break;
        case 'C': 
            std::cout << "You did okay";
            break;
        case 'D':
            std::cout << "Oof, I don't even think that's passing gng";
            break;
        case 'F':
            std::cout << "Yea, you're cooked bro. Go ahead and just sign up for this class again next semester...";
            break;
        default: 
            std::cout << "Invalid letter grade: Only enter a valid letter grade (A, B, C, D, or F)";
            break;

    }
}