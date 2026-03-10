#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char a;
    cout << "Enter Letter:";
    cin >> a;
    char upper = toupper(a);

    switch(upper)
    {
        case 'A': case 'E': case 'I': case 'O': case 'U':
        cout << "Vowel" << endl;
        break;

        default:
        cout << "Consonant" << endl;

    }

    return 0;

}