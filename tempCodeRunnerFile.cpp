#include <iostream>

// Base class with a virtual function
class Base {
public:
    // Virtual function
    virtual void show() {
        std::cout << "Inside Base class" << std::endl;
    }
};

// Derived class overriding the virtual function
class Derived : public Base {
public:
    // Overriding the virtual function
    void show() override {
        std::cout << "Inside Derived class" << std::endl;
    }
};

int main() {
    Base* ptr;

    Base baseObj;
    Derived derivedObj;

    // Pointing to Base class and calling the show function
    ptr = &baseObj;
    ptr->show(); // Calls Base::show()

    // Pointing to Derived class and calling the show function
    ptr = &derivedObj;
    ptr->show(); // Calls Derived::show()

    return 0;
}
