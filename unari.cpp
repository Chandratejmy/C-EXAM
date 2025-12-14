#include <iostream>
using namespace std;

class Number {
    int x, y;

public:
    Number(int a, int b) {
        x = a;
        y = b;
    }

    void display() {
        cout << "x = " << x << " y = " << y << endl;
    }

    void operator-() {
        x = -x;
        y = -y;
    }
};

int main() {
    Number n(5, -8);

    cout << "Before unary minus:" << endl;
    n.display();

    -n;

    cout << "After unary minus:" << endl;
    n.display();

    return 0;
}
