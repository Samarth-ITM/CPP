#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream mf("abc.txt");
    if (!mf){
        cout << "Error opening the file" << endl;
        return 1;
    }
    else{
        cout << "File found" << endl;

        mf << "Hi BTech" << endl;
        mf << "C++ session" << endl;
        mf << "Hi" << endl;
    }

    mf.close();

    return 0;
}