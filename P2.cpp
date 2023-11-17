#include <iostream>
#define MAX_SIZE 100 // Maximum size of the array

// Function to insert an element at a specific position in the array
void insertElement(int arr[], int& size, int element, int position) {
    if (size >= MAX_SIZE) {
        std::cout << "Array is full, insertion not possible." << std::endl;
        return;
    }

    if (position < 0 || position > size) {
        std::cout << "Invalid position for insertion." << std::endl;
        return;
    }

    // Shift elements to make space for the new element
    for (int i = size; i > position; --i) {
        arr[i] = arr[i - 1];
    }

    // Insert the element at the specified position
    arr[position] = element;
    size++; // Increment size of the array
}

int main() {
    int arr[MAX_SIZE];
    int size, element, position;

    // Input the size of the array
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Input elements of the array
    std::cout << "Enter elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    // Input element and position for insertion
    std::cout << "Enter the element to insert: ";
    std::cin >> element;
    std::cout << "Enter the position to insert: ";
    std::cin >> position;

    insertElement(arr, size, element, position);

    // Display the updated array after insertion
    std::cout << "Array after insertion:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}