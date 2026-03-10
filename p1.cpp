#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;


class Poly{
    public:
    void func(int x){
        cout << "Type of x is " << typeid(x).name() << endl;
    }
    void func(double x){
        cout << "Type of x is " << typeid(x).name() << endl;
    }
    void func(string x){
        cout << "Type of x is " << typeid(x).name() << endl;
    }
    void func(char x){
        cout << "Type of x is " << typeid(x).name() << endl;
    }
};

int main(){
    int a;
    double b;
    string s;
    char c;

    Poly p;
    p.func(a);
    p.func(b);
    p.func(s);
    p.func(c);

}