#include <iostream>
using namespace std;

class test {
private:
    int a;
    int b;

public:
    void output();
};

void test::output() {
    this->a = 30;
    this->b = 60;
    cout << "Number a=" << this->a << endl;
    cout << "Number b=" << this->b << endl;
}

int main() {
    test x;
    x.output();
    return 0;
}
