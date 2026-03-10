// 7. Write a C++ program to swap two numbers using a function.

#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    cout << "Enter 1st No: ";
    cin >> a;
    cout << "Enter 2nd No: ";
    cin >> b;
    swapNumbers(a, b);
    cout << a << " " << b << endl;
    return 0;
}
