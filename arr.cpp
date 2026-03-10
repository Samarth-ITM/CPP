#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter len of array: ";
    cin >> n;
    int arr[n];

    for (int i =0; i< n;  i++){
        cout << "Enter element "<< i+1 <<": ";
        cin >> arr[i];
    }

    cout << "Array: [";
    for (int i =0; i < n;  i++){

        if (i == n-1)
        {
            cout << arr[i];
            break;
        }

        cout << arr[i] << ",";
    }
    cout << "]";
    cout << endl;

    int s;

    for (int i =0; i< n;  i++){
        s += arr[i];
    }

    int max=0;


    for (int i =0; i< n;  i++){
        if (arr[i]>=max){
            max = arr[i];
        }
    }

    int min = max;

    for (int i =0; i< n;  i++){
        if (min >= arr[i]){
            min = arr[i];
        }
    }


    cout << "Sum: "<< s <<endl;
    cout << "Max: "<< max <<endl;
    cout << "Min: "<< min <<endl;


    cout << "Reverse Array: [";
    for (int i =n-1; i >= 0;  i--){

        if (i == 0)
        {
            cout << arr[i];
            break;
        }

        cout << arr[i] << ",";
    }
    cout << "]";
    cout << endl;


    int narr[n];

    for (int i = 0; i < n; i++){
        narr[i] = arr[i];
    }

    cout << "New Array: [";
    for (int i =0; i < n;  i++){

        if (i == n-1)
        {
            cout << narr[i];
            break;
        }

        cout << narr[i] << ",";
    }
    cout << "]";
    cout << endl;

    int evn=0;


    for (int i =0; i< n;  i++){
        if (arr[i]%2==0){
            evn++;
        }
    }
    cout << "No. of even elements: "<< evn<<endl;
    cout << "No. of odd elements: "<< n - evn << endl;

    int choice;
    cout << "Enter "<< endl<< "1. Enter Index"<<endl<<"2. Enter Number :";
    cin >> choice;
    

    int ind;
    int src;
    if (choice == 1){
        cout << "Enter index to search: ";
        cin >> ind;
        if (ind <= n-1){
            cout << "Number for Index: " << arr[ind] << endl;
        }
    }
    else{
        cout << "Enter number to search: ";
        cin >> src;

        for (int i = 0; i<=n; i++){
            if (arr[i] == src){
                cout << "The number is found in index "<< i << endl;
            }
            

        }
    }
}