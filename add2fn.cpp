#include <iostream>

using namespace std;


void add2(int a, int b){
    cout << "Sum: "<<  a + b << endl;
}

int main(){
    int a, b;
    cout << "Enter1: ";
    cin >> a;
    cout << "Enter2: ";
    cin >> b;

    add2(a, b);
    return 0;
}