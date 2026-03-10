// Q8. Write a program to find the cube of a number using call by value.

#include <iostream>
using namespace std;

void cube(int x){
    cout << x*x*x;
}

int main(){
    int a;
    cout << "Enter: ";
    cin >> a;
    cube(a);
}
