#include <iostream>
using namespace std;

class ONE {
public:
    int a;
};

class Two : virtual public ONE {
public:
    int b;
};

class THREE : virtual public ONE {
public:
    int c;
};

class FOUR : public Two, public THREE {
public:
    int d;
};

int main() {
    FOUR obj;
    obj.a = 100;
    obj.b = 200;
    obj.c = 300;
    obj.d = obj.a + obj.b + obj.c;
    
    cout << "A of class ONE = " << obj.a << "\n";
    cout << "B of class TWO = " << obj.b << "\n";
    cout << "C of class THREE = " << obj.c << "\n";
    cout << "D of class FOUR = " << obj.d << "\n";

    return 0;
}
