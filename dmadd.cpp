#include <iostream>
using namespace std;

int main(){
    int a,b;

    cout << "Enter 1: ";
    cin >> a;

    cout << "Enter 2: ";
    cin >> b;
    int* p1 = new int(a);
    int* p2 = new int(b);
    
    int* sum = new int(*p1 + *p2);

    cout << "Sum: " << *sum << endl;

    delete p1;
    delete p2; 
    delete sum;

    cout << *p1 << endl << *p2 << endl << *sum << endl;
}