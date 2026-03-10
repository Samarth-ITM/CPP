// 4. Write a program to compare two numbers and find the greater one.

#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout << "Enter num1: ";
    cin >> a;
    cout << "Enter num2: ";
    cin >> b;
    if (a>b)
    {
        cout << a << " is greater than "<< b << endl;
    }
    else if (b==a)
    {
        cout << "Both are equal" << endl;
    }
    else
    {
        cout << b << " is greater than "<< a << endl;

    }

    return 0;

}