// 8. Write a C++ program that uses a function to find the sum of digits of a given number.

#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
    int n;
    cout << "Enter number:";
    cin >> n;
    cout << sumOfDigits(n) << endl;
    return 0;
}
