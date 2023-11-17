#include <iostream>

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    int binary[32]; // Array to store binary digits, assuming 32-bit integer
    
    int index = 0;
    while (decimal > 0) {
        binary[index] = decimal % 2;
        decimal /= 2;
        index++;
    }

    std::cout << "Binary equivalent: ";
    for (int i = index - 1; i >= 0; i--) {
        std::cout << binary[i];
    }
}

int main() {
    int decimalNumber;
    std::cout << "Enter a decimal number: ";
    std::cin >> decimalNumber;

    if (decimalNumber < 0) {
        std::cout << "Please enter a non-negative decimal number." << std::endl;
        return 1;
    }

    decimalToBinary(decimalNumber);

    return 0;
}
