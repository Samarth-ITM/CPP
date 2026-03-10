#include <iostream>
using namespace std;

int square() {
    int n;
    cout << "Enter: ";
    cin >> n;
    return n * n;
}

int main() {
    cout << square() << endl;
    return 0;
}