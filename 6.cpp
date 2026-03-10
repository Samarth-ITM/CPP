// 6. Write a C++ program using a function to find the largest of three numbers passed as arguments.
#include <iostream>
using namespace std;
int maxOfThree(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}
int main() {
    int a, b, c;
    cout << "Enter 1st No: ";
    cin >> a;
    cout << "Enter 2nd No: ";
    cin >> b;
    cout << "Enter 3rd No: ";
    cin >> c;
    cout << maxOfThree(a, b, c) << endl;
    return 0;
}
