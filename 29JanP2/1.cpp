//Q1. Write a C++ program using call by reference to swap two numbers.

#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}

int main(){
    int x,y;
    cout << "Enter 1: ";
    cin >> x;
    cout << "Enter 2: ";
    cin >> y;
    swap(x,y);
    cout << x << " " << y;
}
