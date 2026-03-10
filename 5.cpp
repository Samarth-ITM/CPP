// 5. Write a C++ program to define a function that checks whether a given number is prime or not and returns the result.

#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main() {
    int n;
    cout << "Enter number:";
    cin >> n;
    if (isPrime(n))
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;
    return 0;
}
