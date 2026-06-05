#include <iostream>
#include <iomanip> // function needed for precision for floating point numbers (for cents)

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
    double balance = 0;
    int choice = 0;

do{
        std::cout << "******************\n";
        std::cout << "Enter your choice:\n";
        std::cout << "******************\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        std::cin.clear(); // this function will reset any error flags when the standard input fails to interpret the input (if random strings like 'pizza' or 'dasfgsf' are read in)
        fflush(stdin); // clears input buffer - once we hit enter, we have a new line character within our input buffer so we just need to flush that and get rid of it

        switch (choice) {
            case 1: showBalance(balance);
                    break;
            case 2: balance += deposit(); // will return double dtype of amount deposited
                    showBalance(balance);
                    break;
            case 3: balance -= withdraw(balance);
                    showBalance(balance);
                    break;
            case 4: std::cout << "Thanks for using our services!\n";
                    break;
            default:
                    std::cout << "Invalid choice :( \n";
                    break;
        }

} while (choice != 4);
    return 0;
}

void showBalance(double balance) {
    std::cout << "Your current balance is: $" << std::setprecision(2) << std::fixed << balance << "\n"; // std::setprecision() and std::fixed used to output cents
}

double deposit() {
    double amount = 0;
    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;

    // need to prevent negative (-) numbered deposits
    if (amount > 0) {
        return amount;
    }
    else {
        std::cout << "That's NOT a valid amount\n";
        return 0;
    }
}

double withdraw(double balance) {
    double amount = 0;
    std::cout << "Enter amount you want to withdraw from your account: ";
    std::cin >> amount;

    // need to prevent negative withdraws and over withdrawing money that the user does not have (insufficient amounts)
    if (amount > 0 && amount < balance) {
        return amount;
    }
    else if (amount > balance) {
        std::cout << "You have insufficient funds - you cannot withdraw $" << amount <<"\n";
        return 0;
    }
    else {
        std::cout << "That's NOT a valid amount\n";
        return 0;
    }
}