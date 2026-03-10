// Q2. Write a function that uses call by reference to increment a number by 1.

#include <iostream>
using namespace std;

void inc(int &x){
    x = x + 1;
}

int main(){
    int a;
    cout << "Enter: ";
    cin >> a;
    inc(a);
    cout << a;
}
