#include <iostream>
using namespace std;

class Shape {
protected:
    int w, h;

public:
    Shape(int x, int y) {
        w = x;
        h = y;
    }
};

class Rect : public Shape {
public:
    Rect(int x, int y) : Shape(x, y) {}

    void area() {
        cout << "Area: " << w * h << endl;
    }
};

int main() {
    Rect r(10, 5);
    r.area();
    return 0;
}
