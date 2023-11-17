#include <iostream>

int division(int a, int b) {
    if (b == 0) {
        throw "Division by zero error"; // Throwing an exception when attempting to divide by zero
    }
    return a / b;
}

int main() {
    int dividend, divisor;
    std::cout << "Enter the dividend: ";
    std::cin >> dividend;
    std::cout << "Enter the divisor: ";
    std::cin >> divisor;

    try {
        int result = division(dividend, divisor);
        std::cout << "Result of division: " << result << std::endl;
    }
    catch (const char* errorMessage) {
        std::cerr << "Exception caught: " << errorMessage << std::endl;
    }

    return 0;
}
