#include <iostream>

using namespace std;

class sample {
    public:
    int id;

    sample(){};

    sample(int x) {
        this->id = x;
    }

    sample(sample &t) {
        cout << "ID= " << id << endl;
    }
};

int main(){
    
}