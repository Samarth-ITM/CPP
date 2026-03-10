// 4. Write a C++ program using a function to calculate the factorial of a number entered by the user.
#include <iostream>
using namespace std;
long long factorial(int n) {
    long long fact = 1;
    while (n > 0) {
        fact *= n;
        n--;
    }
    return fact;
}
int main() {
    long long n;
    cout << "Enter number:";
    cin >> n;

    cout << factorial(n) << endl;
    return 0;
}
