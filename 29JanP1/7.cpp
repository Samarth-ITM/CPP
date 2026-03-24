// Q7. Write a program to find the factorial of a number using call by value.
#include <iostream>
using namespace std;

void fact(int x){
    double f = 1;
    for(int i=1;i<=x;i++) f*=i;
    cout << f;
}

int main(){
    double a;
    cout << "Enter: ";
    cin >> a;
    fact(a);
}
