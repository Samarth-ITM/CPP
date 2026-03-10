// Q2. Write a program to add 10 to a number using call by value.

#include <iostream>
using namespace std;

void add(int x){
    x = x + 10;
    cout << x;
}

int main(){
    int a;
    cin >> a;
    add(a);
}
