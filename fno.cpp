#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;


class Poly{
    public:
    int func(int x, int y){
        cout << "Enter first number: ";
        cin >> x;
        cout << "Enter second number: ";
        cin >> y;
        cout << "Sum: ";
        return x + y;
    }
    int func(int x, int y, int z){
        cout << "Enter first number: ";
        cin >> x;
        cout << "Enter second number: ";
        cin >> y;
        cout << "Enter third number: ";
        cin >> z;
        cout << "Sum: ";
        return x + y + z;
    }
};

int main(){
    int a,b,c;
    int cho;

    cout << "Enter how many arguments: ";
    cin >> cho;


    Poly p;

    switch (cho){
    case 2: 
    cout <<  p.func(a,b) << endl;
    case 3: 
    cout <<  p.func(a,b,c) << endl;

    }


}