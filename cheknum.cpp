#include <iostream>

using namespace std;


void eo(){
    int a;

    cout << "Enter 1: ";
    cin >> a;

    if (a%2==0){
        cout << "Even";
        cout << endl;
    }
    else{
        cout << "Odd";
        cout << endl;
    }
}

int main(){
    eo();
    return 0;
}