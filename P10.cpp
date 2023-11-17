#include <iostream>

class MyClass {
public:
    // Static member variable
    static int staticVar;

    // Static member function
    static void staticFunction() {
        std::cout << "Static function called" << std::endl;
    }
};

// Initializing the static variable outside the class definition
int MyClass::staticVar = 10;

int main() {
    std::cout << "Accessing static variable: " << MyClass::staticVar << std::endl;

    // Calling the static function
    MyClass::staticFunction();

    return 0;
}

