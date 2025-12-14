#include <iostream>
using namespace std;

class B;   // Forward declaration

class A {
private:
    int x;
public:
    void set(int a) {
        x = a;
    }
    void show() {
        cout << "Class A value: " << x << endl;
    }
    friend void exchange(A &, B &);
};

class B {
private:
    int y;
public:
    void set(int b) {
        y = b;
    }
    void show() {
        cout << "Class B value: " << y << endl;
    }
    friend void exchange(A &, B &);
};

void exchange(A &obj1, B &obj2) {
    int temp;
    temp = obj1.x;
    obj1.x = obj2.y;
    obj2.y = temp;
}

int main() {
    A objA;
    B objB;

    objA.set(10);
    objB.set(20);

    cout << "Before Exchange:" << endl;
    objA.show();
    objB.show();

    exchange(objA, objB);

    cout << "\nAfter Exchange:" << endl;
    objA.show();
    objB.show();

    return 0;
}
