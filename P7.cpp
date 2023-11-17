#include <iostream>

class SomeClass {
private:
    int *data; // Pointer to dynamically allocated memory

public:
    // Constructor
    SomeClass() {
        data = new int(10); // Dynamically allocate memory
        std::cout << "Constructor called" << std::endl;
    }

    // Destructor
    ~SomeClass() {
        delete data; // Free the allocated memory
        std::cout << "Destructor called" << std::endl;
    }
};

int main() {
    SomeClass obj; // Creating an object of SomeClass

    // The object will be destroyed when it goes out of scope (at the end of main)
    std::cout << "Object is going out of scope..." << std::endl;

    return 0;
}
