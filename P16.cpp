#include <iostream>
using namespace std;

int main() {
    int *p;
    p = new int;
    *p = 100;
    
    cout << "The address of p is: " << p << endl;
    cout << "The value pointed by p is: " << *p << endl;

    delete p; // Deallocate the memory allocated with new

    return 0;
}
