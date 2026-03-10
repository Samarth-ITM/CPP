// Q4. Write a function using call by reference to find the maximum of two numbers.
#include <iostream>
using namespace std;

void max(int &a, int &b){
    if(a > b) cout << a;
    else cout << b;
}

int main(){
    int x,y;
    cout << "Enter 1: ";
    cin >> x;
    cout << "Enter 2: ";
    cin >> y;
    max(x,y);
}
