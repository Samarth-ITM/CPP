// 3. Even or Odd
// Write a C++ program to create a function that takes an integer as an argument
// and returns whether the number is even or odd.

#include <iostream>
using namespace std;

bool isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int n;
    cout << "Enter number:";
    cin >> n;

    if (isEven(n))
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;

    return 0;
}
