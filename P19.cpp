#include <iostream>

// Base class
class Animal {
public:
    void eat() {
        std::cout << "Animal eats" << std::endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog barks" << std::endl;
    }
};

// Derived class 2 from Dog
class Bulldog : public Dog {
public:
    void display() {
        std::cout << "Bulldog is a type of Dog" << std::endl;
    }
};

int main() {
    Bulldog b;

    b.display(); // Call method from Bulldog class
    b.bark();    // Call method from Dog class
    b.eat();     // Call method from Animal class

    return 0;
}
