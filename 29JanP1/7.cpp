// Q7. Write a program to find the factorial of a number using call by value.
#include <iostream>
using namespace std;

void fact(int x){
    int f = 1;
    for(int i=1;i<=x;i++) f*=i;
    cout << f;
}

int main(){
    int a;
    cout << "Enter: ";
    cin >> a;
    fact(a);
}
