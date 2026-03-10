//Q3. Write a C++ program to find the square of a number using call by reference.
#include <iostream>
using namespace std;

void sq(int &x){
    x = x * x;
}

int main(){
    int a;
    cout << "Enter: ";
    cin >> a;
    sq(a);
    cout << a;
}
