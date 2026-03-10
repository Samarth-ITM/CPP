//3. Write a program to check whether a number is zero or non-zero.

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter num:";
    cin >> a;
    if (a == 0)
    {
        cout << "Zero" << endl;
    }
    else
    {
        cout << "Non-zero" << endl;
    }

    return 0;

}