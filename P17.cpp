#include <iostream>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

int main() {
    int sum1 = add(5, 10);
    int sum2 = add(3, 7, 12);
    double sum3 = add(3.5, 7.2);

    std::cout << "Sum of two integers: " << sum1 << std::endl;
    std::cout << "Sum of three integers: " << sum2 << std::endl;
    std::cout << "Sum of two doubles: " << sum3 << std::endl;

    return 0;
}
