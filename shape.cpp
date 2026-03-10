#include <iostream>
using namespace std;

class Shape{
    public:
    virtual string area(){
        return "area:";
    }
};

class Rectangle : public Shape {
    public:
    double area(double length, double width){
        return length*width;
    }
};  

class Circle : public Shape {
    public:
    double area(double length){
        return 3.14*length*length;
    }
};  

class Square : public Shape {
    public:
    double area(double length){
        return length*length;
    }
};  

class Rhombus : public Shape {
    public:
    double area(double d1, double d2){
        return (d1*d2)/2;
    }
};  

int main(){
    Shape s;
    cout << s.area() << endl;
    Rectangle r;
    cout << r.area(10,20) << endl;
    Circle c;
    cout << c.area(10) << endl;
    Square sq;
    cout << sq.area(10) << endl;
    Rhombus rh;
    cout << rh.area(10,20) << endl;
}