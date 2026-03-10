#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter num:";
    cin >> a;
    if (a<13)
    {
        cout << "Child" << endl;
    }
    else if (13<a and a<15)
    {
        cout << "Growing" << endl;
    }
    else
    {
        cout << "Adult"<< endl;
    }

    return 0;

}