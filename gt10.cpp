//2. Write a program to check whether a number is greater than 10.

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter num:";
    cin >> a;
    if (a>10)
    {
        cout << "Greater than 10" << endl;
    }
    else if (a == 10)
    {
        cout << "10" << endl;
    }
    else
    {
        cout << "Less than 10" << endl;
    }

    return 0;

}