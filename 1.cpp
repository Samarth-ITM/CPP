// 1. Write a C++ program to define a function that accepts two integers as arguments and returns their sum. Call the function from main() and display the result.

#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    cout << "Enter1: ";
    cin >> x;
    cout << "Enter2: ";
    cin >> y;

    cout << "Sum: " << sum(x, y) << endl;
    return 0;
}
