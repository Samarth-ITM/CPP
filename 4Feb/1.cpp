#include <iostream>
using namespace std;

class Person {
protected:
    string nm;
    int ag;

public:
    Person(string n, int a) {
        nm = n;
        ag = a;
    }

    void disp() {
        cout << "Name: " << nm << endl;
        cout << "Age: " << ag << endl;
    }
};

class Student : public Person {
    int rno;

public:
    Student(string n, int a, int r) : Person(n, a) {
        rno = r;
    }

    void show() {
        disp();
        cout << "Roll No: " << rno << endl;
    }
};

int main() {
    Student s("Rahul", 20, 101);
    s.show();
    return 0;
}
