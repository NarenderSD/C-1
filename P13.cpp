#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[25], b[25];

    cout << "Enter the first string: ";
    cin.getline(a, 25);

    cout << "Enter the second string: ";
    cin.getline(b, 25);

    strcat(a, b);
    cout << "String after concatenation is = " << a << endl;

    return 0;
}
