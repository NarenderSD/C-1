#include <iostream>

// Creating a class
class MyClass {
public:
    static int myStaticVar; // Static variable

    static void myStaticFunction() {
        std::cout << "This is a static function" << std::endl;
    }
};

// Initializing the static variable outside the class definition
int MyClass::myStaticVar = 100;

int main() {
    // Accessing the static variable using the scope resolution operator
    std::cout << "Accessing static variable using scope resolution operator: " << MyClass::myStaticVar << std::endl;

    // Calling the static function using the scope resolution operator
    MyClass::myStaticFunction();

    return 0;
}
