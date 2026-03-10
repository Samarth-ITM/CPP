#include <iostream>
using namespace std;

class Number{
    public:
    int value;
    Number(int v){
        value = v;
    }
    Number operator+(Number obj){
        return value + obj.value;
    }
    Number operator-(Number obj){
        return value - obj.value;
    }
}; 

int main(){
    Number n1(20);
    Number n2(20);

    Number n3 = n1 + n2;

    Number n4 = n1 - n2;

    cout << "Sum= " << n3.value << endl;
    cout << "Diff= " << n4.value << endl;

    return 0;
}