#include <iostream>
using namespace std;

class Vehicle {
protected:
    int spd;

public:
    Vehicle(int s) {
        spd = s;
    }

    void dsp() {
        cout << "Speed: " << spd << " km/h" << endl;
    }
};

class Car : public Vehicle {
public:
    Car(int s) : Vehicle(s) {}

    void msg() {
        cout << "This is a car." << endl;
    }
};

int main() {
    Car c(120);
    c.msg();
    c.dsp();
    return 0;
}
