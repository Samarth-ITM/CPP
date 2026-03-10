//Q5. Write a function using call by reference to add bonus to an employee salary.

#include <iostream>
using namespace std;

void bonus(int &s){
    s = s + 1000;
}

int main(){
    int sal;
    cout << "Enter :";
    cin >> sal;
    bonus(sal);
    cout << sal;
}
