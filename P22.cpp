#include <iostream>

// Function template for finding the maximum of two values
template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

// Overloaded function template to find the maximum of three values
template <typename T>
T maximum(T a, T b, T c) {
    return maximum(maximum(a, b), c);
}

int main() {
    int intMax2 = maximum(5, 10); // Calls the function template for two arguments
    int intMax3 = maximum(3, 9, 4); // Calls the overloaded function template for three arguments

    double doubleMax2 = maximum(3.5, 8.9); // Calls the function template for two arguments
    double doubleMax3 = maximum(1.2, 9.5, 4.8); // Calls the overloaded function template for three arguments

    std::cout << "Maximum of 5 and 10: " << intMax2 << std::endl;
    std::cout << "Maximum of 3, 9, and 4: " << intMax3 << std::endl;
    std::cout << "Maximum of 3.5 and 8.9: " << doubleMax2 << std::endl;
    std::cout << "Maximum of 1.2, 9.5, and 4.8: " << doubleMax3 << std::endl;

    return 0;
}
