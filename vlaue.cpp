#include <iostream>
using namespace std;

void sal(int &n){
    n = n + 10000;
}

int main()
{
    int a;
    cout << "Enter: ";
    cin >> a;
    int* p = &a;
    sal(a);
    cout << "new val: "<< a<< endl;
    return 0;
}