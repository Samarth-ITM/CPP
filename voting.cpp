#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter age:";
    cin >> a;
    if (a>=18)
    {
        cout << "Elibile to vote" << endl;
    }
    else
    {
        cout << "Not elibile to vote" << endl;
    }

    return 0;

}