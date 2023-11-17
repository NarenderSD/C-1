#include <iostream>

class ComplexNumber {
private:
    double real;
    double imag;

public:
    ComplexNumber(double r = 0, double i = 0) : real(r), imag(i) {}

    // Overloading the + operator for addition of complex numbers
    ComplexNumber operator+(const ComplexNumber& other) {
        ComplexNumber temp;
        temp.real = real + other.real;
        temp.imag = imag + other.imag;
        return temp;
    }

    // Overloading the << operator for output
    friend std::ostream& operator<<(std::ostream& out, const ComplexNumber& num) {
        out << num.real << " + " << num.imag << "i";
        return out;
    }
};

int main() {
    ComplexNumber num1(2.0, 3.5);
    ComplexNumber num2(1.5, 2.5);

    ComplexNumber sum = num1 + num2;

    std::cout << "num1: " << num1 << std::endl;
    std::cout << "num2: " << num2 << std::endl;
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
