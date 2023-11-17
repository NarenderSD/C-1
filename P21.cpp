#include <iostream>

// Base class 1
class Animal {
public:
    void eat() {
        std::cout << "Animal eats" << std::endl;
    }
};

// Base class 2
class Vehicle {
public:
    void drive() {
        std::cout << "Vehicle moves" << std::endl;
    }
};

// Derived class from Animal
class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog barks" << std::endl;
    }
};

// Derived class from Animal and Vehicle
class DogCart : public Dog, public Vehicle {
public:
    void display() {
        std::cout << "DogCart is a type of Dog and Vehicle" << std::endl;
    }
};

int main() {
    DogCart dc;

    dc.display(); // Call method from DogCart class
    dc.bark();    // Call method from Dog class
    dc.eat();     // Call method from Animal class
    dc.drive();   // Call method from Vehicle class

    return 0;
}
