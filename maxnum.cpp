#include <iostream>
using namespace std;

int main(){
    int a, b;
    int *p1, *p2;

    cout << "Enter 2 nums: ";
    cin >> a >> b;

    p1 = &a;
    p2 = &b;

    if (*p1 > *p2){
        cout << "Max: "<< *p1;
    }
    else if (*p1 == *p2){
        cout << "Equal";
    }
    else {
        cout << "Max: "<< *p2;

    }
}