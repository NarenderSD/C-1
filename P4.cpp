#include <iostream>

class ArraySorter {
private:
    int *arr; // Pointer to array
    int size; // Size of the array

public:
    ArraySorter(int s) : size(s) {
        arr = new int[size];
    }

    void inputElements() {
        std::cout << "Enter " << size << " elements:" << std::endl;
        for (int i = 0; i < size; ++i) {
            std::cin >> arr[i];
        }
    }

    void bubbleSort() {
        for (int i = 0; i < size - 1; ++i) {
            for (int j = 0; j < size - i - 1; ++j) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    void display() {
        std::cout << "Sorted array elements:" << std::endl;
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    ~ArraySorter() {
        delete[] arr;
    }
};

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    ArraySorter array(size);

    array.inputElements();
    array.bubbleSort();
    array.display();

    return 0;
}
