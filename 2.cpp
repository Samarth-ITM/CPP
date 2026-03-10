// 2. Write a C++ program that uses two separate functions to calculate the square and cube of a given number.

#include <iostream>
using namespace std;

int square(int n) {
    return n * n;
}

int cube(int n) {
    return n * n * n;
}

int main() {
    int n;
    cout << "Enter number:";
    cin >> n;

    cout << square(n) << endl;
    cout << cube(n) << endl;
    return 0;
}
