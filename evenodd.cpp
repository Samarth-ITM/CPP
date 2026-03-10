//1. Write a program to check whether a number is even or odd.

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter num:";
    cin >> a;
    if (a==0)
    {
        cout << "ZERO" << endl;
    }
    else if (a%2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "ODD" << endl;
    }

    return 0;

}