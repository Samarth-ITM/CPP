#include <iostream>
using namespace std;

int main()
{

    int a = 10, b = 3;
    cout << "Add:" << a + b << endl;
    cout << "Sub:" << a - b << endl;
    cout << "Mult:" << a * b << endl;
    cout << "Floor:" << a / b << endl;
    cout << "Div:" << float(a) / float(b) << endl;
    cout << "Mod:" << a % b << endl;
    cout << "Pre-inc:" << ++a << " " << ++b << endl;
    cout << "Post-inc:" << a++ << " " << b++ << endl;
    cout << "Pre-decc:" << --a << " " << --b << endl;
    cout << "Post-decc:" << a-- << " " << b-- << endl;

    return 0;
}