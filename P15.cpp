#include<iostream>
using namespace std;

class test {
private:
    int a, b;
public:
    void data() {
        a = 20;
        b = 30;
    }

    friend int compute(test t);
};

int compute(test t) {
    return (t.a + t.b);
}

int main() {
    test t1;
    t1.data();
    cout << "The result is " << compute(t1) << endl;
    return 0;
}
