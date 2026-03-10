//5. Write a program to check whether a number is divisible by 5.

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter num:";
    cin >> a;
    if (a%5==0)
    {
        cout << "Div by 5" << endl;
    }
    else
    {
        cout << "Not div by 5" << endl;
    }

    return 0;

}