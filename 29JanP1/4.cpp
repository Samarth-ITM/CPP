//Q4. Write a program to multiply two numbers using call by value.
#include <iostream>
using namespace std;

void mul(int a, int b){
    cout << a * b;
}

int main(){
    int x,y;
    cout << "Enter 1: ";
    cin >> x;
    cout << "Enter 2: ";
    cin >> y;
    mul(x,y);
}
