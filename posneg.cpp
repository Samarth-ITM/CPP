

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter num:";
    cin >> a;
    if (a>0)
    {
        if (a%2 ==0)
        {
            cout << "Positive and Even" << endl;
        }
        else
        {
            cout << "Positive and Odd" << endl;
        }
    }
    else if (a == 0)
    {
        cout << "Zero" << endl;
    }
    else
    {
        cout << "Negative" << endl;
    }

    return 0;

}