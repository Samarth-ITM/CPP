// Q6. Write a program to check whether a number is even or odd using call by value.
#include <iostream>
using namespace std;

void chk(int x){
    if(x % 2 == 0) cout << "Even";
    else cout << "Odd";
}

int main(){
    int a;
    cout << "Enter: ";
    cin >> a;
    chk(a);
}
