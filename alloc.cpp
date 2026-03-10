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

}
