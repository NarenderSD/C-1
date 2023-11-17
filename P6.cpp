#include <iostream>

class Array {
private:
    int *arr; // Pointer to array
    int size; // Size of the array

public:
    // Constructor to initialize the array with the given size
    Array(int s) : size(s) {
        arr = new int[size];
    }

    // Copy constructor
    Array(const Array &source) : size(source.size) {
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = source.arr[i];
        }
    }

    // Function to input elements into the array
    void inputElements() {
        std::cout << "Enter " << size << " elements:" << std::endl;
        for (int i = 0; i < size; ++i) {
            std::cin >> arr[i];
        }
    }

    // Function to display elements of the array
    void display() {
        std::cout << "Array elements:" << std::endl;
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    // Destructor to free the dynamically allocated memory
    ~Array() {
        delete[] arr;
    }
};

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    Array originalArray(size); // Creating the original array object

    originalArray.inputElements(); // Input elements into the original array
    originalArray.display(); // Display original array elements

    // Using the copy constructor to create a new array object by copying the original array
    Array copiedArray = originalArray;

    std::cout << "Copied array elements using copy constructor:" << std::endl;
    copiedArray.display(); // Display copied array elements

    return 0;
}
