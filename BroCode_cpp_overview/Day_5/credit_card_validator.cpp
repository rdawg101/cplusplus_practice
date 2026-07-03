#include <iostream>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);

int main() {
    /*
        creating a credit card validator using the Luhn Algorithm
            1. Double every second digit from right to left, if doubled number is 2 digits, split them
            2. Add all single digits from step 1
            3. Add all odd numbered digits from right to left
            4. Sum results from steps 2 and 3
            5. If step 4 is divisible by 10, # is valid

            EX: 6011    0009   9013     9424
            1.  1 2 2   0 0    1 8 2    1 8 4
          2.SUM: 5    +  0    +  11    +  13          = 29
            3.   0 1     0 9    0 3      4 4          = 21
            4. 29 + 21  = 50
            5. 50 % 10 = 0      50 divisible by 10, # is valid
    */
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card #: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if (result % 10 == 0) {
        std::cout << cardNumber << " is valid";
    } 
    else {
        std::cout << cardNumber << " is NOT valid";
    }

    return 0;
}

int getDigit(const int number) {
    // 18 % 10 ==>  8  --> 8 + (18 / 10 % 10) = 8 + 1 = 9
    return number % 10 + (number / 10 % 10);
}

int sumOddDigits(const std::string cardNumber) {
    int sum = 0;

    for (int i = cardNumber.size() - 1; i >= 0; i-=2) {
        sum += cardNumber[i] - '0';
    }

    return sum;
}

int sumEvenDigits(const std::string cardNumber) {
    // need to iterate over card number in reverse order
    // can treat string as an array of characters an iterate over that 
    int sum = 0;

    for (int i = cardNumber.size() - 2; i >= 0; i-=2) {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }

    return sum;
}
