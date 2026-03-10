#include <iostream>

using namespace std;

class Car {
  public:
    string brand;
    int year;

    void display() {
      cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};


class Number{
    public:
        int num;

    void display(){
        cout << num << endl;
    }
};


class sum1{
    public:
        int n;
        int m;
    
    void disp(){
        cout << n + m << endl;
    }
};


class even{
public:
    int num;
    void inp(){
        cout << "Enter num:" ;
        cin >> num;
    }
    void disp(){
        if (num%2==0){
            cout << "Even" << endl;
        }
        else{
             cout << "odd" << endl;
        }
        }
    };


class ATM{
    public:
        int balance = 1000;
        int amt;

    void withdraw(int amt){
        if ((balance - amt) >= 0)
        {
            balance = balance - amt;
        }
        else 
        {
            cout << "Amount: "<< amt << " exceeds balance:" << balance << endl;
        }
    }
    void showball(){
        cout<< "Current Balance: "<< balance << endl;
    }
};


int main(){
    ATM bank;
    cout << "Enter amt: ";
    cin >> bank.amt;
    bank.withdraw(bank.amt);
    bank.showball();
}