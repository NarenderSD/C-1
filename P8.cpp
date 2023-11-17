#include <iostream>

// Function to calculate factorial using recursion
unsigned long long factorial(unsigned int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    unsigned int number;
    std::cout << "Enter a non-negative integer to calculate its factorial: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        unsigned long long fact = factorial(number);
        std::cout << "Factorial of " << number << " is: " << fact << std::endl;
    }

    return 0;
}
