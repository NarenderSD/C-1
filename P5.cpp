#include <iostream>

// Class definition for Rectangle
class Rectangle {
private:
    double length;
    double breadth;

public:
    // Constructor to initialize length and breadth
    Rectangle(double len, double brd) {
        length = len;
        breadth = brd;
    }

    // Function to calculate the area of the rectangle
    double calculateArea() {
        return length * breadth;
    }
};

int main() {
    double userLength, userBreadth;

    // Input from the user for length and breadth of the rectangle
    std::cout << "Enter length of the rectangle: ";
    std::cin >> userLength;
    std::cout << "Enter breadth of the rectangle: ";
    std::cin >> userBreadth;

    // Creating an object of the Rectangle class with user input values using the constructor
    Rectangle rect(userLength, userBreadth);

    // Calculating the area of the rectangle
    double area = rect.calculateArea();

    // Displaying the calculated area
    std::cout << "Area of the rectangle: " << area << std::endl;

    return 0;
}
