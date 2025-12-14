#include <iostream>
using namespace std;

class geofig {
protected:
    float a, b;
public:
    virtual void getdata() {
        cin >> a >> b;
    }
    virtual void display() = 0;   // pure virtual function
};

class rect : public geofig {
public:
    void display() {
        float area = a * b;
        cout << "Rectangle Sides: " << a << " , " << b << endl;
        cout << "Area of Rectangle: " << area << endl;
    }
};

class tri : public geofig {
public:
    void display() {
        float area = 0.5 * a * b;
        cout << "Triangle Base and Height: " << a << " , " << b << endl;
        cout << "Area of Triangle: " << area << endl;
    }
};

int main() {
    geofig *g;
    int choice;

    cout << "1. Rectangle\n2. Triangle\nEnter your choice: ";
    cin >> choice;

    if (choice == 1) {
        rect r;
        g = &r;
        cout << "Enter length and breadth: ";
    } 
    else if (choice == 2) {
        tri t;
        g = &t;
        cout << "Enter base and height: ";
    } 
    else {
        cout << "Invalid choice";
        return 0;
    }

    g->getdata();
    g->display();

    return 0;
}
