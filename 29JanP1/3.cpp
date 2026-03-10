// Q3. Write a program to subtract two numbers using call by value.
#include <iostream>
using namespace std;

void sub(int a, int b){
    cout << a - b;
}

int main(){
    int x,y;
    cout << "Enter 1: ";
    cin >> x;
    cout << "Enter 2: ";
    cin >> y;
    sub(x,y);
}
