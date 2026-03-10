#include <iostream>
using namespace std;

void chg(char c){
    c = 'z';
    cout << c << endl;
}

int main(){
    char a = 'a';
    chg(a);
    cout << a << endl;
}

