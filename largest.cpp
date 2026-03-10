#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter num1:";
    cin >> a;
    int b;
    cout << "Enter num2:";
    cin >> b;
    int c;
    cout << "Enter num3:";
    cin >> c;

    if (a>=b && a>=c)
    {
        cout << "largest is " << a << endl;
    }
    else if (b>=c && b>=a)
    {
        cout << "largest is " << b << endl;
    }
    else if (c>=b && c>=a)
    {
        cout << "largest is " << c << endl;
    }
    else
    {
        cout << "All nums are equal" << endl;
    }

    return 0;

}