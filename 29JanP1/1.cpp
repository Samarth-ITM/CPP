//Q1. Write a program to pass an integer to a function using call by value.
#include <iostream>
using namespace std;

void show(int x){
    cout << x;
}

int main(){
    int a;
    cout << "Enter: ";
    cin >> a;
    show(a);
}
