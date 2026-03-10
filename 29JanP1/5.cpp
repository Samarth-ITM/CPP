//Q5. Write a program to divide two numbers using call by value.

#include <iostream>
using namespace std;

void divi(float a, float b){
    cout << a / b;
}

int main(){
    int x,y;
    cout << "Enter 1: ";
    cin >> x;
    cout << "Enter 2: ";
    cin >> y;
    divi(x,y);
}
